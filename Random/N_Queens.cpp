class Solution {
public:
    
    vector<string>v;
    vector<vector<string>>ans;
    
    bool safe(int row , int col , int n)
    {
        int i,j;
        
        for(i=0 ; i<col ; i++)
        {
            if(v[row][i]=='Q') return false;
        }
        
        for(i=row , j=col ; i>=0 && j>=0 ; i--,j--)
        {
            if(v[i][j]=='Q') return false;
        }
        
        for(i=row , j=col; j>=0 && i<n ; i++,j--)
        {
            if(v[i][j]=='Q') return false;
        }
        
        return true;
    }
    
    void solve(int col, int n)
    {
        if(col==n)
        {
            ans.push_back(v);
            return;
        }
        for(int i=0 ; i<n ; i++)
        {
            if(safe(i,col,n))
            {
                v[i][col]='Q';
                solve(col+1,n);
                v[i][col]='.';
            }
        }
    }
    
  
    vector<vector<string>> solveNQueens(int n) {
          vector<vector<string>>what(int n);
    v.resize(n);
    
    for(int i=0 ; i<n ; i++)
    {
        v[i]=string(n,'.');
    }
    solve(0,n);
    return ans;
    }
};
