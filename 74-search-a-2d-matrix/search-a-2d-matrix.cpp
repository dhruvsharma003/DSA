class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int st=0;
        int end=n*m-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            int ele=matrix[mid/m][mid%m];
            if(ele==target){
                return true;
            }
            else if(ele>target){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return false;
    }
};