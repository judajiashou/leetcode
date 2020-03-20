class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        unordered_set<pair<int,int>> store;
        
        if(nums.empty())
        {
            return 0;
        }
       
       
        for(int i=0;i<nums.size()-1;++i)
        {
            for(int j=i+1; j<nums.size(); ++j)
            {
                if(k == abs(nums[i] - nums[j]))
                {
                    if(nums[i] > nums[j])
                    {
                        store.insert(make_pair(nums[i],nums[j]));
                    }
                    else
                    {
                        store.insert(make_pair(nums[j],nums[i]));
                    }
                }
            }
        }
        
        return store.size();
    }
};
