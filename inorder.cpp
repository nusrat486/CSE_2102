#include<bits/stdc++.h>
using namespace std;
void inorder(int i,int n,int tree[])
{
    if(i<n && tree[i]!=-1)
    {
        cout<<tree[i]<<" ";
        inorder(2*i+1,n,tree);
        inorder(2*i+2,n,tree);

    }
}
int main()
{
    int tree[]={48,31,64,20,40,56,89,-1,28,33,-1,47,59,-1,-1};
    inorder(0,15,tree);
}
