#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[4][4];
    int key;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>mat[i][j];
        }
    }
    cin>>key;
    int i=0,j=4;
    pair<int,int> index;
    while(i<5 and j>-1)
    {
        if(mat[i][j]==key) {index.first=i;index.second=j; break;}
        else if(mat[i][j]>key) i++;
        else j--;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;i<4;j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    cout<<index.first<<" "<<index.second;
}