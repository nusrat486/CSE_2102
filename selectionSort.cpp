#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
            if(min!= i){
                swap(a[i],a[min]);
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
    SelectionSort(a,n);
    cout<<"Sorted Array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "<<endl;
    }

}
