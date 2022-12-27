#include<iostream>
using namespace std;

int main()
{
	int n,rem,rev=0;               
	cout<<"Enter a number:";      // assume n=1357
	cin>>n;
	while(n!=0)  // 1357 is not equal to 0 yes condition is true                 
	{
		rem=n%10;        //rem=1357%10  rem=7
		rev=rev*10+rem;  // rev=0*10+7 || rev=7
		n=n/10;           // n=1357/10  || n135
	}
	cout<<"reversed number is="<<rev;
	return 0;
}
