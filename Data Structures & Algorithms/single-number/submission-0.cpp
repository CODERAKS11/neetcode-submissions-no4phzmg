class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int Xor = 0;
        for(int num : nums) Xor = Xor ^ num;
        return Xor;
    }
};
