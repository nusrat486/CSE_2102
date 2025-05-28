#include<iostream>
using namespace std;

int partition(int arr[],int start,int end)
{
    int idx = start-1;
    int pivot = arr[end];
    for(int j=start;j<end;j++)
    {
        if(arr[j]<=pivot)
        {
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void quickSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int pI = partition(arr,start,end);
        quickSort(arr,start,pI-1);
        quickSort(arr,pI+1,end);


    }
}
int main()
{
    int arr[10] = {3,7,2,5,1,6};
    int n= 6;
    quickSort(arr,0,n-1);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

}
}
