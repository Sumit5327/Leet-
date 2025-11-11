class Solution {
public:
    int scoreOfString(string s) {
           int sum=0;
        int fs=0;
        int f;
        int sec;
      for(int i = 0; i < s.size() - 1; i++) {
            f = static_cast<int>(s[i]);
            sec = static_cast<int>(s[i + 1]);
            fs = abs(f-sec);
            sum = sum+fs;
        }
        return sum;
        
    }
};