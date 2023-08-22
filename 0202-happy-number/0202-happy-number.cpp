class Solution {
public:
    bool isHappy(int n) {
        if(n<=0) return false;
        while(true){
            int sum = 0;
            while(n!=0){
                int rem = n%10;
                sum = sum + (rem*rem);
                n = n/10;
            }
            if(sum/10 == 0){
                if(sum == 1 || sum == 7) return true;
                else return false;
            }
            n = sum;
        }
    }
};