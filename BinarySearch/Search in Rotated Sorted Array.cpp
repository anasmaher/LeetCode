class Solution {
public:
    int search(vector<int>& v, int x) {
        int start = 0,end=v.size()-1;
        int first = v[0];
        
        while(start<=end)
        {
            int mid = start + (end - start)/2;
            int val = v[mid];
            if(x==val) return mid;
            
            bool left = val>=first , leftTarget = x>=first;
            if(left==leftTarget)
            {
                if(val<x) start = mid+1;
                else end = mid-1;
            }
            else
            {
                if(left) start = mid + 1;
                else end = mid-1;
            }
        }
        return -1;
    }
};
