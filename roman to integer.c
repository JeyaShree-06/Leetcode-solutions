#include <string.h>

int romanToInt(char* s) {
    int total = 0;
    int prevValue = 0;
    int len = strlen(s);

    for (int i = len - 1; i >= 0; i--) {
        int currentValue = 0;
        if (s[i] == 'I') currentValue = 1;
        else if (s[i] == 'V') currentValue = 5;
        else if (s[i] == 'X') currentValue = 10;
        else if (s[i] == 'L') currentValue = 50;
        else if (s[i] == 'C') currentValue = 100;
        else if (s[i] == 'D') currentValue = 500;
        else if (s[i] == 'M') currentValue = 1000;
        if (currentValue < prevValue) {
            total -= currentValue;
        } else {
            total += currentValue;
        }
        prevValue = currentValue;
    }

    return total;
}
