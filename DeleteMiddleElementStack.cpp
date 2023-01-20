//Delete a middle element in a stack using stack stl library in cpp

#include <iostream>
#include <stack>
using namespace std;

void display(stack<int>* ss)
{
   
    while(!ss->empty())
    {
        cout<<" "<<endl<<ss->top();
        ss->pop();
    }
   
    
}
void solve(stack<int>* ins,int count,int size)
{
 //base case
 if(count == size/2)
 {
     ins->pop();
     return;
 }
 int num=ins->top();
 ins->pop();
 //recursive call
 solve(ins,count+1,size);
 
 ins->push(num);
 display(ins);
}

void deleteMiddle(stack<int>* str,int n)
{
    int count=0;
    solve(str,count,n);
}

int main()
{
   stack<int> str;
   str.push(1);
   str.push(9);
   str.push(2);
   str.push(5);
   str.push(4);
   
   int size=str.size();
   deleteMiddle(&str,size);
  
   return 0;
}
