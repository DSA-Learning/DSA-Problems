bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
            return v1[0] < v2[0];
        }
class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),sortcol);
        vector<vector<int>> v;
        vector<int> v1;
        int a,b,c,d,e=intervals[a][0],f=intervals[a][1],flag=0;
        for(a=0;a<intervals.size()-1;a++)
        {
            b=intervals[a][0];
            c=intervals[a][1];
            if(flag==0)
            {
                e=b;
                f=c;
                flag++;
            }
            d=intervals[a+1][0];
            if(e<=d && d<=f)
            {
                f=max(f,intervals[a+1][1]);
            }
            else
            {
                v1.push_back(e);
                v1.push_back(f);
                v.push_back(v1);
                v1.clear();
                flag=0;
            }
        }
        if(flag==1)
        {
              v1.push_back(e);
              v1.push_back(f);
              v.push_back(v1);
              v1.clear();
        }
        else
        {
            b=intervals[a][0];
            c=intervals[a][1];
            v1.push_back(b);
              v1.push_back(c);
              v.push_back(v1);
              v1.clear();
        }
        return v;
    }
};
