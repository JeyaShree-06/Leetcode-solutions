#include <stdbool.h>
bool isHappy(int n) {
    while (n != 1 && n != 4) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;        
            totalSum += digit * digit; 
            n /= 10;                   
        }
        n = totalSum;
    }
    return n == 1;
}
