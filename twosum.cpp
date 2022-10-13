class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { //vector array created taking nums and target
        map<int,int> m; //map
        vector<int> v;
        for(int i=0;i<nums.size();i++) 
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]); 
                v.push_back(i);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};
