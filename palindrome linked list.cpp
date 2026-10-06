class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true; 
        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
      
        ListNode* secondHalfHead = reverseList(slow->next);
        
       
        ListNode* firstHalfPointer = head;
        ListNode* secondHalfPointer = secondHalfHead;
        bool result = true;
        
        while (secondHalfPointer != nullptr) {
            if (firstHalfPointer->val != secondHalfPointer->val) {
                result = false;
                break;
            }
            firstHalfPointer = firstHalfPointer->next;
            secondHalfPointer = secondHalfPointer->next;
        }
        
        slow->next = reverseList(secondHalfHead);
        
        return result;
    }

private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }
};
