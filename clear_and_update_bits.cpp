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
int main()
{
  int n=5;
  clearBit(n,2);
  cout<<n<<endl;
  return 0;
}