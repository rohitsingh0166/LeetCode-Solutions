
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0, digitSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int n = nums[i];

            while(n > 0) {
                digitSum += n % 10;
                n /= 10;
            }
        }

        return abs(sum - digitSum);
    }
};
