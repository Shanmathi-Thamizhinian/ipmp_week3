class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSub=INT_MIN;
        int minSub=INT_MAX;
        int totalSub=0;
        int sum1=0;
        int sum2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            totalSub+=nums[i];
            sum1=sum1+nums[i];
            sum2=sum2+nums[i];
            if(sum2<minSub) minSub=sum2;
            if(sum1>maxSub) maxSub=sum1;  
            if(sum1<0){
                sum1=0;
            }
            if(sum2>0){
                sum2=0;
            }
        }
        if(totalSub==minSub) return maxSub;
        return max(maxSub, totalSub-minSub);
    }
};
