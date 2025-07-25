#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[100];
    while(i<=mid && j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }

    }
while(i<=mid)
{
    b[k]=a[i];
    i++;
    k++;
}
while(j<=ub)
{
    b[k]=a[j];
    j++;
    k++;
}

    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];
    }
}
     void mergeSort(int a[],int lb,int ub)
     {
       if(lb<ub)
       {
           int mid = (lb+ub)/2;
           mergeSort(a,lb,mid);
           mergeSort(a,mid+1,ub);
           merge(a,lb,mid,ub);
       }
     }
     int main()
     {
         int a[100],n;
         cin>>n;
         cout<<"Enter elements"<<endl;
         for(int i=0;i<n;i++)
         {
             cin>>a[i];
         }
         mergeSort(a,0,n-1);
         cout<<"Sorted Array"<<endl;
         for(int i=0;i<n;i++)
         {
             cout<<a[i]<<" "<<endl;
         }

     }



