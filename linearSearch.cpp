#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int data;
    cin>>data;
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            cout<<"Element is found at "<<i<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"element not found"<<endl;
    }


}
