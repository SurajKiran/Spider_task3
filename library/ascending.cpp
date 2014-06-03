#include<iostream>
using namespace std;

void ascending_natural(int n)
{
	/* The function has a base case when n=1. The function prints 1 and terminates.
		Recurrence Relation:
			print_ascending(n terms) = print_ascending(n-1 terms) + print nth term
		The function works by the same logic. It checks if n is 1. If n is 1 it prints 1 and terminates.
		If n is not 1 it prints n-1 terms and then prints nth number. 	
	*/
	if(n==1)
		cout<<" "<<1;
	else
	{
		ascending_natural(n-1);
		cout<<" "<<n;
	}
}
int main()
{
	int n;
	cout<<"\n Enter a number ";
	cin>>n;
	cout<<"\n First "<<n<<" numbers in ascending order ";
	ascending_natural(n);
}
