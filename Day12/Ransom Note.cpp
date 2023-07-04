class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> magzinehash;
        for(char c:magazine){
            magzinehash[c]++;
        }
        for(char c: ransomNote){
            if(magzinehash[c]<=0){
                return false;
            }
            magzinehash[c]--;
        }
    return true;
    }
};