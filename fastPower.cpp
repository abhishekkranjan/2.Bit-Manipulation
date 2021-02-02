#include<iostream>
using namespace std;
int fast_power(int a,int b)
{
	int ans=1;
	while(b>0)
	{
		if(b&1)
		{
			ans*=a;
		}
		b=b>>1;
		a=a*a;
	}
	return ans;
}
int main()
{
	int a=2,b=5;
	cout<<fast_power(a,b)<<endl;
	return 0;
}