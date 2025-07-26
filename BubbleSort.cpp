#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n){
    for(int i=0;i<=n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]){
                    int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag++;


            }
        }
        if(flag==0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements:"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
