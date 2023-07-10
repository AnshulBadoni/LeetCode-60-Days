// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==1){
            return 1;
        }
        bool ans;
        while(n>-1){
            ans = isBadVersion(n);
            if(ans==false){
                return n+1;
            }
            n--;
        }
        return n;
        
    }
};