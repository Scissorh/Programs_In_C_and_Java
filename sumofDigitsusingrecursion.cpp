#include<iostream>
using namespace std;
int sod(int n)
{
if(n<=9 and n>=0) return n;
return sod(n/10) + (n%10);
}
int main()
{
	int res=sod(56234);
	cout<<res;
	return 0;
}
