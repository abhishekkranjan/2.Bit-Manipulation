//Unique Number
#include<iostream>
using namespace std;
int unique_number(int *arr,int n)
{
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans=ans^arr[i];
	}
	return ans;
}
int main()
{
	int arr[]={2,1,3,1,4,3,4,5,6,6,5};
	int n=sizeof(arr)/sizeof(int);
	cout<<unique_number(arr,n)<<endl;
	return 0;
}