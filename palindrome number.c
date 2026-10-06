bool isPalindrome(int x) {
    int original = x;
    long long reverse = 0;

    if (x < 0)
        return false;

    while (x > 0) {
        reverse = reverse * 10 + x % 10;
        x = x / 10;
    }

    return original == reverse;
}
