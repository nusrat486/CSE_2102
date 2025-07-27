#include<bits/stdc++.h>
using namespace std;

int Max=5;
int Stack[5];
int top=-1;

void push(int data)
{
   if(top==Max-1)
   {
       cout<<"Overflow"<<endl;
       return;
   }

   top++;
   Stack[top]=data;
}
void pop()
{
    if(top==-1)
    {
        cout<<"Underflow"<<endl;
        return;
    }
    cout<<"Popped "<<Stack[top]<<endl;
    top--;

}
void display()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    cout<<"stack"<<endl;
    for(int i=top;i>=0;i--)
    {
        cout<<Stack[i]<<" ";
    }
}
int main()
{
    push(30);
    push(15);
    push(20);
    display();
    pop();
    display();
}
