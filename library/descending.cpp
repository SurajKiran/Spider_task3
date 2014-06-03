#include<iostream>
using namespace std;
void decreasing_natural(int n)
{
	
	/* The function has a base case when n=1. The function prints 1 and terminates.
		Recurrence Relation:
			print_descending(n terms) = print n + print_descending(n-1 terms)
		The function works by the same logic. It checks if n is 1. If n is 1 it prints 1 and terminates.
		If n is not 1 it prints nth number and then prints n-1 terms. 	
	*/
	if(n==1)
		cout<<" "<<1;
	else
	{
		cout<<" "<<n;
		decreasing_natural(n-1);
	}
}
int main()
{
	int n;
	cout<<"\n Enter a number ";
	cin>>n;
	cout<<"\n First "<<n<<" numbers in descending order ";
	decreasing_natural(n);
}
