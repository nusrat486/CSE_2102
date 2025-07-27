#include<bits/stdc++.h>
using namespace std;
 int n=5;
int q[5];
int rear=0;
int front =0;
void enqueue(int data)
{
    if( rear==n)
    {
        cout<<"Overflow"<<endl;
    }
    if( front == 0)
    {

        front=1;
        rear=1;
        q[rear-1]=data;
    }
    else{

        q[rear]=data;
        rear=rear+1;
    }
}
void display()
{
    if(front==0 && front > rear)
    {
        cout<<"Empty"<<endl;
        return;
    }
    cout<<"Queue:"<<endl;
    for(int i=front;i<=rear;i++)
    {
        cout<<q[i]<<" ";
    }
}
int main()
{

    enqueue(30);
    enqueue(20);
    enqueue(10);
    enqueue(15);
    enqueue(7);
    display();
}
