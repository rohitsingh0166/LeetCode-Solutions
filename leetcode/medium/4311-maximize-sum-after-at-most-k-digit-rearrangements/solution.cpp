class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<pair<int,int>>gain;
        long long sum=0;
        for(int x:nums){
            string s=to_string(x);
            sort(s.rbegin(),s.rend());
            int best=stoi(s);
            gain.push_back({best-x,best});
            sum +=x;
        }
        sort(gain.rbegin(),gain.rend());
        for(int i=0; i<min(k,(int)gain.size());i++){
            sum +=gain[i].first;
        }
        return sum;
    }
};