class Solution {
public:
    int search(vector<int>& v, int x) {
        
        int start = 0, end=v.size()-1;
        int mid = (end+start)/2;
        
        while(start<=end)
        {
            mid = (end+start)/2;
            if(v[mid]==x) return mid;
            else if(v[mid]>x) end = mid-1;
            else if(v[mid]<x) start = mid+1;
        }
        return -1;
    }
};
