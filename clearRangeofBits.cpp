#include<iostream>
using namespace std;
int getBit(int n,int i)
{
	//Find ith bit
    int mask=(1<<i);
    int bit=(n&mask)>0 ? 1:0;
    return bit;
}
void setBit(int &n,int i)
{
  int mask=(1<<i);
  n= n|mask;
}
void clearBit(int &n,int i)
{
	int mask=(1<<i);
	n=n&(~mask);
}
void updateBit(int &n,int i,int v)
{
	clearBit(n,i);
	n=n|(v<<i);
}
int clearLastIBits(int n,int i)
{
	int mask=(-1<<i);
	return n&mask;
}
int clearRangeformItoJ(int n,int i,int j)
{
	int ones=(~0);
	int a=ones<<(j+1);
	int b=(1<<i)-1;
	int mask=a|b;
	int ans=n&mask;
	return ans;
}
int replaceBits(int n,int m,int i,int j)
{
	int n_=clearRangeformItoJ(n,i,j);
	int ans=n_ | (m<<i);
	return ans;
}
int main()
{
	int n=15;
	int i=3;
	cout<<clearLastIBits(n,i)<<endl;
	n=31;
	cout<<clearRangeformItoJ(n,1,3)<<endl;
	cout<<replaceBits(15,2,1,3)<<endl;
	return 0;
}