class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int st=1;
        int end=nums.size()-2;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
                return mid;
            }else if(nums[mid-1]<nums[mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return -1;    
    }
};