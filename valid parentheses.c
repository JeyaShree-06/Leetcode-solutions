#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    char stack[10005]; 
    int top = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[top] = ch;
            top++;
        } 
        else {
            if (top == 0) return false;

            char lastOpen = stack[top - 1]; 
            if ((ch == ')' && lastOpen == '(') ||
                (ch == '}' && lastOpen == '{') ||
                (ch == ']' && lastOpen == '[')) {
                top--; 
            } else {
                return false; 
            }
        }
    }
    return top == 0;
}
