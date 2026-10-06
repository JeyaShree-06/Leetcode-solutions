#include <string>
#include <sstream>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::stringstream ss(s);
        std::string word;
        std::string result = "";
        
    
        while (ss >> word) {
            if (result.empty()) {
                result = word;
            } else {
              
                result = word + " " + result;
            }
        }
        
        return result;
    }
};
