//SHIFTING ARRAY ELEMENTS ON LEFT SIDE............

#include <iostream>
using namespace std;
#define n 5
int main()
{
	// shift array elements to left side...
	int arr[n],i;
	int temp;
	cout<<"ENTER AN ARRAY..."<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	
	temp=arr[0];
   	for(i=0;i<5;i++)
	{
	arr[i]=arr[i+1];
	arr[n-1]=temp;
	}
	
	cout<<" ARRAY AFTER LEFT SHIFT..."<<endl;
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
