#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int h)
{
    int pivot = a[l];
    int i=l;
    int j=h;
    while (i<j)
    {
        while(i<=h && a[i]<=pivot)
        {
            i++;
        }
        while(j>=l && a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[l],a[j]);
    return j;

}
void QuickSort(int a[],int l,int h)
{
    if(l<h){
        int j=partition(a,l,h);
        QuickSort(a,l,j-1);
        QuickSort(a,j+1,h);

    }
}
int main()
{
    int a[10] = {3,7,2,5,1,6};
    int n= 6;
    QuickSort(a,0,n-1);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

}
}
