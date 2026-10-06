class Solution {
public:
    string intToRoman(int num) {
        // Your logic goes here
        string th[] = {"", "M", "MM", "MMM"};
        string hd[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string ten[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string unit[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        
        return th[num / 1000] + hd[(num % 1000) / 100] + ten[(num % 100) / 10] + unit[num % 10];
    }
};
