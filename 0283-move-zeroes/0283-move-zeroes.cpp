class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        int i=0;
        for(int j = 0; j<s ; j++){
            if(nums[j] !=0 ){
                nums[i++] = nums[j];
            }
        }
        while(i<s){
            nums[i++] = 0;
        }
    }
};