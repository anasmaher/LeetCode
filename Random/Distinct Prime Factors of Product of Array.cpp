class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
    
        int val, n=nums.size(); set<int>st;
        for(int j=0 ; j<n ; j++)
        {
            val = nums[j];
            
            for (int i=2;i*i<=val;i++)
            {   
                while(val%i==0)
                {
                    st.insert(i);   
                    val/=i;
                }
            }
            if (val!=1) st.insert(val);
        }
       
        return st.size();
    }
};
