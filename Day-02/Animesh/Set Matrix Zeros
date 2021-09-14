class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int a,b,c,d,e,f;
        set<int> s,s1;
        for(a=0;a<matrix.size();a++)
        {
            for(b=0;b<matrix[0].size();b++)
            {
                if(matrix[a][b]==0)
                {
                    s.insert(a);
                    s1.insert(b);
                }
            }
        }
        for(auto it=s.begin();it!=s.end();++it)
        {
            for(b=0;b<matrix[0].size();b++)
            {
                matrix[*it][b]=0;
            }
        }
        for(auto it=s1.begin();it!=s1.end();++it)
        {
            for(b=0;b<matrix.size();b++)
            {
                matrix[b][*it]=0;
            }
        }
    }
};
