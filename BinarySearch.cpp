#include<bits/stdc++.h>
using namespace std;
void Insertionsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int binarySearch(int a[],int n,int data)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(data  == a[mid])
            return mid;
        else if(data>a[mid])
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Number of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Insertionsort(a,n);
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    int result=binarySearch(a,n,data);
    if(result!=-1)
    {
        cout<<"Data found at"<<result<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}
