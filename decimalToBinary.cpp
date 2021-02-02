#include<iostream>
using namespace std;
void decimal_to_binary(int n)
{
	int ans=0;
	int p=1;
	while(n>0)
	{
		ans+=(n&1)*p;
		p*=10;
		n=n>>1;
	}
	cout<<ans<<endl;
}
int main()
{
    int n;
    n=15;
    decimal_to_binary(n);
   return 0;
}