// 1838. Frequency of the Most Frequent Element
// The frequency of an element is the number of times it occurs in an array.

// You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

// Return the maximum possible frequency of an element after performing at most k operations.

// Input: nums = [1,2,4], k = 5
// Output: 3
// Explanation: Increment the first element three times and the second element two times to make nums = [4,4,4].
// 4 has a frequency of 3.

class Solution {
public:
    long long maxFrequency(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        long long head=0,tail=0,n=nums.size(),ans=0,sum=0;
        for(head=0;head<n;++head)
        {
            sum+=nums[head];
            if((head-tail+1)*nums[head]-sum>k)
            {
                sum-=nums[tail];
                tail++;
            }
            ans=max(ans,head-tail+1);
        }
        return ans;
    }
};