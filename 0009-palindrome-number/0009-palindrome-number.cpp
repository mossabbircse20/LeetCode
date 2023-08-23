class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string ss = s;
        reverse(s.begin(),s.end());
        if(s.size() == 0) return false;
        if(ss == s) return true;
        else return false;
    }
};