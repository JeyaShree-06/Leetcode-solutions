#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    
    if (strsSize == 0) return "";

   
    char* prefix = strs[0];

   
    for (int i = 1; i < strsSize; i++) {
        
        while (strstr(strs[i], prefix) != strs[i]) {
            
            int len = strlen(prefix);
            if (len == 0) return ""; 
            prefix[len - 1] = '\0';  
        }
    }

    return prefix;
}
