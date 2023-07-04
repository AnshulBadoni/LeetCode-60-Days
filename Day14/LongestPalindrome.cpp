class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char, int> palin;
        for(char c:s){
            palin[c]++;
        }
        int longestlength=0;
        bool oddcount=false;

        for(const auto& pair: palin){
            int count = pair.second;
            if(count%2==0){
                longestlength += count;
            }
            else{
                longestlength+=count-1;
                oddcount=true;
            }
        }
        if(oddcount){
            longestlength+=1;
        }
        return longestlength;
    }
};