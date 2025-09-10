#include<bits/stdc++.h>
using namespace std;
// void print(vector<vector<int>>& matrix, int row,int col){
//     for(int i=row;i>=0;--i){
//         cout<<matrix[col][i];
//     }
// }
void wave(vector<vector<int>>& matrix,int& n,int& m){
    int cols=0;
    while(cols<m){
        if(cols%2==0){
            for(int rows=0;rows<n;++rows){
                cout<<matrix[rows][cols];
            }
        }else{
            for(int rows=n-1;rows>-1;--rows){
                cout<<matrix[rows][cols];
            }
        }
        cols++;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix;
    for(int i=0;i<n;++i){
        vector<int>temp;
        for(int j=0;j<m;++j){
            int inp;
            cin>>inp;
            temp.push_back(inp);
        }
        matrix.push_back(temp);
    }
    wave(matrix,n,m);
    return 0;
}