#include<iostream>
using namespace std;
int main()
{
    int x[2]={0,1};
    for(int i=2; i<=8; i++)
    {
        x[i]=x[i-1] + x[i-2];
        cout<<x[i]<<endl;
    }
}