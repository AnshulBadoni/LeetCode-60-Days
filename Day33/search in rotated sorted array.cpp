class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        if(nums.size()>=1){
        while(start<=end){
            if(nums[start]==target) return start;
            if(nums[end]==target) return ((nums.size()-1) - start);
            start++;
            end--;
        }
        }
        return -1;
    }
};