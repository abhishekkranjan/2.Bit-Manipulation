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
int main()
{
	//cout<<"Hello World"<<endl;
	int n=5;
	clearBit(n,0);
	cout<<n<<endl;
	n=5;
	updateBit(n,1,1);
	cout<<n<<endl;
	return 0;
}