class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityElement = 0;
        int majorityCount = 0;
        unordered_map<int, int> length;
        for(int i:nums){
            length[i]++;
             if (length[i] > majorityCount) {
                majorityElement = i;
                majorityCount = length[i];
            }
        }
                return majorityElement;

              
    }
};