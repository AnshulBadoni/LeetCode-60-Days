class Solution {
public:
    bool isAnagram(string s, string t) {
        // by sorting
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t){
        //     return true;
        // }
        // return false;

    /////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
     
        //using hash 
        // unordered_map<char, int> check;
        // for(char c:s){
        //     check[c]++;
        // }
        // for(char c:t){
        //     check[c]--;
        //     if(check[c]<0){
        //         return false;
        //     }
        // }
        // for (const auto& pair : check) {
        //     if (pair.second != 0) {
        //         return false;
        //     }
        // }
        // return true;

    }
};