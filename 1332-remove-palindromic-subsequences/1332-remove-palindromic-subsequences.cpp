class Solution {
public:
    int removePalindromeSub(string s) {
        string ss = s;
        reverse(s.begin(),s.end());
        if(s.size()<=0) return 0;
        if(ss == s) return 1;
        else return 2;
    }
};