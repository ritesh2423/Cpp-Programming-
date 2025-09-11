#include<bits/stdc++.h>
using namespace std;
vector<int> spiral(vector<vector<int>>& matrix){
    int rows = matrix.size(), cols = matrix[0].size();
    int startrow = 0, endrow = rows-1;
    int startcol = 0, endcol = cols-1;
    int count = 0, total = rows*cols;
    vector<int> ans(total);
    while(count<total){
        for(int index=startcol;index<=endcol && count<total;++index){
            ans[count]=matrix[startrow][index];
            count++;
        }
        startrow++;
        for(int index=startrow;index<=endrow && count<total;++index){
            ans[count]=matrix[index][endcol];
            count++;
        }
        endcol--;
        for(int index=endcol;index>=startcol && count<total;index--){
            ans[count]=matrix[endrow][index];
            count++;
        }
        endrow--;
        for(int index=endrow;index>=startrow && count<total;index--){
            ans[count]=matrix[index][startcol];
            count++;
        }
        startcol++;
    }
    return ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix;
    for(int i=0;i<n;++i){
        vector<int>temp(m);
        for(int j=0;j<m;j++){
            cin>>temp[j];            
        }
        matrix.push_back(temp);
    }
    vector<int> ans = spiral(matrix);
    for(auto it:ans){
        cout<<it;
    }
    return 0;
}
