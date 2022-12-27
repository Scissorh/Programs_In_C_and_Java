#include<iostream>
using namespace std;
int fact(int n)
{
if(n==0) return 1;
else
return(n*fact(n-1));
}
int main()
{
	int num;
	long f;
	cout<<"Enter a number:";
	cin>>num;
	f=fact(num);
	cout<<"the factorial of a number "<<f;
	return 0;
}
