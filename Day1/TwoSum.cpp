class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // brute force
    //     int i=0;
    //     for(i;i<nums.size();i++){
    //         int j = i+1;
    //         for(j;j<nums.size();j++){
    //             if(nums[i]+nums[j]==target){
    //                 return {i,j};
    //             }
    //         }
    //     }
    // return {};
    // using hashmap
    // unordered_map<int,int> numMap;
    // for(int i=0;i<nums.size();i++){
    //     int x = target-nums[i];
    //     if(numMap.count(x)>0){
    //         return {numMap[x],i};
    //     }
    //     numMap[nums[i]]=i;
    // }
    // return {};
    }
};