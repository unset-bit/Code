//Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major = INT_MAX, count = 0;
        for(auto x : nums)
        {
            if(major == x)
                count++;
            else
            {
                if(count > 0)
                    count--;
                else
                {
                    major = x;
                    count = 1;
                }
            }
        }
        return major;
    }
};
