#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Please enter a number : ";
	cin>>n;
	cout<<n<<"\n";
	while(n!=1)
	{
		if((n%2)==1)
		{
			n=3*n+1;
		}
		else
		{
			n=n/2;
		}
		cout<<n<<"\n";
	}
	return 0;
}
