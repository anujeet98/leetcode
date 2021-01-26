prob link: https://leetcode.com/problems/queries-on-a-permutation-with-key/

class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> output;
        vector<int> P;
        for(int i=1;i<=m;i++)
            P.push_back(i);
        for(int i:queries){
            auto iter=find(P.begin(),P.end(),i);
            output.push_back(iter-P.begin());
            P.erase(iter);        
            P.insert(P.begin(),i);
        }
        return output;
    }
};