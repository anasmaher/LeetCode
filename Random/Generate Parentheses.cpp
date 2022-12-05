class Solution {
public:
    
    vector<string>v;
    void fun(int l,int r, string s)
    {
        if(l+r==0)
        {
            v.emplace_back(s); return;
        }
        
        if(l!=0)  fun(l-1,r,s+"(");
        
        if(r>l)  fun(l,r-1,s+")");
    }
    vector<string> generateParenthesis(int n) {
        
        fun(n , n , "");
        return v;
    }
};
