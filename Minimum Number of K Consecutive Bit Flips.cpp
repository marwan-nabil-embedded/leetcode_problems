class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int flips=0,ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            if( i >= k && nums[i-k] == 22){
                flips--;
            }
            if(nums[i] == (flips&1)){
                if(i+k > n)
                    return -1;
                flips++;
                nums[i]=22;
                ans++;
            }
        }
        return ans;
    }
};
