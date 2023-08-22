class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int t = nums[n-1];
        int i = 0;
        while(i<n-2){
            if(nums[i] == nums[i+1]){
                i = i + 2;
            }
            else{
                return nums[i];
            }
        }
        return t;
    }
};