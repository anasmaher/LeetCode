class Solution {
public:
    int maxArea(vector<int>& v) {
        int n=v.size(), l=0, r=n-1;
        int res=0;

        while(l<r)
        {
            res = max(res, (r-l)*min(v[l], v[r]));
            if(v[l]>v[r])r--;
            else if(v[l]<v[r])l++;
            else {r--;l++;}
        }

        return res;
    }
};
