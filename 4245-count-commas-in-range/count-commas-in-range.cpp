class Solution {
public:
    int countCommas(long long n) {
        long long ans=0;
        long long start=1000;
        long long com=1;
        while(start<=n){
            long long end=start*1000-1;
            long long cnt=min(n, end)-start+1;
            ans+=cnt*com;
            start*=1000;
            com++;
        }
        return ans;
        
    }
};