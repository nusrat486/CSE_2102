#include<bits/stdc++.h>
using  namespace std;
void insertionSort(int a[],int n)
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
    insertionSort(a,n);
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }

}

