#include<iostream>
using namespace std;
int main()
{
    int key=625;
    int l=1,h=625;
    while(l!=h)
    {
        int mid=(l+h)/2;
        if((mid*mid)==key) {cout<<mid;break;}
        else if((mid*mid)<key) {h=mid-1;}
        else {l-mid+1;}
    }
    cout<<"not found";
}