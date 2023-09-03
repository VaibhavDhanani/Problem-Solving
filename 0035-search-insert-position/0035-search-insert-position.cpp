class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int m=(s+e)/2;
        while(s<=e)
        {
            if(target < nums[m])
            {
                e=m-1;
            }
            else if(target > nums[m])
            {
                s=m+1;
            }
            else
            {
                return m;
            }
            m=((e+s)/2);
        }
        return s;
    }
};