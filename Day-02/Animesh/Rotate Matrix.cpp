class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> v;
        vector<int> v1;
        int a,b,c,d,e=matrix.size();
        for(a=0;a<e;a++)
            v1.push_back(0);
        for(a=0;a<e;a++)
            v.push_back(v1);
        for(a=0;a<e;a++)
        {
            for(b=0;b<e;b++)
            {
                v[a][b]=matrix[e-1-b][a];
            }
        }
        matrix=v;
    }
};
