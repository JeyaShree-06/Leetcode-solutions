#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        // 1. Move left pointer if it's not a letter or a number
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        
        // 2. Move right pointer if it's not a letter or a number
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        // 3. Compare the characters in lowercase
        if (tolower(s[left]) != tolower(s[right])) {
            return false; // Found a mismatch
        }

        // 4. Move both pointers inward
        left++;
        right--;
    }

    return true; // Everything matched
}
