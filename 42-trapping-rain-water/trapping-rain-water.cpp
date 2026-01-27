class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int right=n-1;
        int left=0;
        int lmax=0;
        int rmax=0;
        int ans=0;
        while(left<right){
            lmax=max(lmax,height[left]);
            rmax=max(rmax,height[right]);
            if(rmax<lmax){
                ans+=rmax-height[right];
                right--;
            }
            else{
                ans+=lmax-height[left];
                left++;
            }
        }
        return ans;
    }
};