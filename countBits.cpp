#include<iostream>
using namespace std;
int countBits(int n)
{
	int ans=0;
	while(n>0)
	{
	 ans=ans+(n&1);
	 n=n>>1;
	}
	return ans;
}
int fastCountBits(int n)
{
	int ans=0;
	while(n>0)
	{
	 ans++;
	 n=n&(n-1);
	}
	return ans;
}
int main()
{
	int n=15;
	cout<<countBits(n)<<endl;
	cout<<fastCountBits(n)<<endl;
	cout<<__builtin_popcount(n)<<endl;
}