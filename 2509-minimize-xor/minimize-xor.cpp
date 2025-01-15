class Solution {
public:
    int countSet(int num) {
        int count = 0;
        while (num > 0) {
            if (num % 2) count++;
            num = num / 2;
        }
        return count;
    }

    int minimizeXor(int num1, int num2) {
        int cou1 = countSet(num1);
        int cou2 = countSet(num2);
        if (cou1 == cou2) return num1;
        string binary = "";
        while (num1 > 0) {
            binary = char('0' + (num1 % 2)) + binary;
            num1 = num1 / 2;
        }
        int num1Length = binary.length();
        while (binary.length() < cou2) {
            binary = "0" + binary;
        }
        if (cou1 < cou2) {
            int add = cou2 - cou1;
            for (int i = binary.length() - 1; i >= 0 && add > 0; i--) {
                if (binary[i] == '0') {
                    binary[i] = '1';
                    add--;
                }
            }
        } else {
            for (int i = binary.length() - 1; i >= 0 && cou1 > cou2; i--) {
                if (binary[i] == '1') {
                    binary[i] = '0';
                    cou1--;
                }
            }
        }
        int result = 0;
        for (int i = 0; i < binary.length(); i++) {
            result = result * 2 + (binary[i] - '0');
        }
        return result;
    }
};
