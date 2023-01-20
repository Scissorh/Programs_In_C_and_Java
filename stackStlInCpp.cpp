
#include<iostream>
#include<stack> 
using namespace std;

int main()
{
    // create a stack of strings
    stack<string> lang;
    
    //add elements in stack
    lang.push("java");
    lang.push("Hindi");
    lang.push("Japanese");
    cout<<"Stack is:"<<endl;
    while(!lang.empty())
    {
        cout<<lang.top()<<endl;
        lang.pop();
    }
    
    return 0;
}
