class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int> max_idx;
        vector<int> ans(n-k+1);

        for(int i=0; i<n; i++){
            while(!max_idx.empty() && nums[i]>=nums[max_idx.back()]) 
                max_idx.pop_back();
            max_idx.push_back(i);

            if (max_idx.front()==i-k) 
                max_idx.pop_front(); 
            if (i>=k-1)
                ans[i-k+1]=nums[max_idx.front()];
        }
        return ans;
    }
};