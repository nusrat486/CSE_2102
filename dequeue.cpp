#include<bits/stdc++.h>
using namespace std;

int n=5;
int q[5];
int front=0;
int rear=0;

void enqueue(int data)
{
    if(rear==n)
    {
        cout<<"overflow"<<endl;
        return;
    }

        q[rear]=data;
        rear++;
    }

void dequeue()
{
    if(front==rear)
    {
        cout<<"Underflow"<<endl;
    }
    cout<<"deteted "<<q[front]<<endl;
    front++;
}
void display()
{
    if(front==rear)
    {
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"queue"<<endl;
    for(int i=front;i<rear;i++)
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
    display();
    dequeue();
    display();

}
