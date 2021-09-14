class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int a,b,c,d,e,f=numRows;
        vector<int> v;
        vector<vector<int>> v1;
        if(f>=1)
        {
            v.push_back(1);
            v1.push_back(v);
            v.clear();
        }
        if(f>=2)
        {
            v.push_back(1);
            v.push_back(1);
            v1.push_back(v);
            v.clear();
        }
        if(f>=3)
        {
            for(a=3;a<=f;a++)
            {
                v.push_back(1);
                for(b=0;b<v1[a-2].size()-1;b++)
                {
                    v.push_back(v1[a-2][b]+v1[a-2][b+1]);
                }
                v.push_back(1);
                v1.push_back(v);
                v.clear();
            }
        }
        return v1;
    }
};
