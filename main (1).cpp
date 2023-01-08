#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the size of array";
	cin>>a;
	int arr[a];
	for(int i=0;i<a;i++)
	{
		cout<<"enter element"<<i+1<<"  ";
		cin>>arr[i];
	}
	for(int i=0;i<a-1;i++)
	{
		for(int j=0;j<a-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j]=arr[j]+arr[j+1];
				arr[j+1]= arr[j]-arr[j+1];
				arr[j]= arr[j] - arr[j+1];
			
		
		for(int k=0;k<a;k++)
		{
			cout<<arr[k]<<" |";
		}
		cout<<endl;
		
	}
}
		cout<<endl;
	}
		cout<<"the sorted arry  after working is "<<endl;
	for(int i=0; i<a; i++)
	{
       cout<<arr[i]<<", ";
}
	return 0;		
}
