#include <iostream>
using namespace std;

int main()
{
	int t,sum=0,flag=0;
	cout<<"Enter number of test cases : ";
	cin>>t;
	while(t--)
	{
		int n,i;
		flag=0,sum=0;
		cout<<"\nEnter the number : ";
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(sum>n)
			{
				flag = 0;
				break;
			}
			if(sum==n)
			{
				flag = 1;
				break;
			}
			sum+=i;
		}
		
		if(flag==1)
			cout<<"It is a triangular number"<<endl;
		else
			cout<<"Not a triangular number"<<endl;
	}
	return 0;
}
