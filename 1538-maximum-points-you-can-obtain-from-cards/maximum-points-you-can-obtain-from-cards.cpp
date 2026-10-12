class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ls=0, rs=0, ms=0;
        for(int i=0; i<k; i++){
            ls=ls+cardPoints[i];
        }
        ms=ls;
        int ri=cardPoints.size()-1;
        for(int i=k-1; i>=0; i--){
            ls=ls-cardPoints[i];
            rs=rs+cardPoints[ri];
            ri-=1;
            ms=max(ms, ls+rs);
        }
        
        return ms;
    }
};