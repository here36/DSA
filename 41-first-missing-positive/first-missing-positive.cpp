class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

       unordered_set<int> st;

    for (auto num:nums){
        st.insert(num);
    }

    int miss=1;
    while(st.find(miss)!=st.end()){
        miss++;
    }

        return miss;
    }
};