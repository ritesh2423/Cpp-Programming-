#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    cout<<"sum of all even number between 0 to n is"<<sum;
}