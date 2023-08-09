class Solution {
public:
    vector<int>generateRows(int numRows){
        long long ans = 1;
        vector <int> Rows;
        Rows.push_back(1);
        for(int col=1;col<numRows;col++){
            ans = ans  * (numRows-col);
            ans = ans / col;
            Rows.push_back(ans);
        }
        return Rows;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRows(i));
        }
        return ans;
    }
};