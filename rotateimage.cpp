#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix){
    int size=matrix.size();
    for(int i=0;i<size;++i){
        for(int j=i;j<size;++j){
            
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<size;++i){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
void print(vector<vector<int>> &matrix){
    for(auto it:matrix){
        for(auto i:it){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> matrix;
    for(int i=0;i<n;++i)
    {
        vector<int>temp;
        int t;
        for(int j=0;j<n;++j){
            cin>>t;
            temp.push_back(t);
        }
        matrix.push_back(temp);
    }
    rotate(matrix);
    print(matrix);
    return 0;
}