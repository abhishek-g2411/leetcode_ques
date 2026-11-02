class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int median = nums[nums.size()/2];
        int mov=0;

        for(int n : nums)
        mov += abs(n - median);

        return mov;
    }
};