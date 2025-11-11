class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        // Traverse from end of both strings
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) {
                sum += a[i] - '0'; // Convert char to int
                i--;
            }

            if (j >= 0) {
                sum += b[j] - '0'; // Convert char to int
                j--;
            }

            carry = sum / 2;
            result = char(sum % 2 + '0') + result; // Convert int back to char
        }

        return result;
    }
};