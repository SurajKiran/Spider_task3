#include<iostream>
using namespace std;
int sum(int n)
{
	/*
	Base Condition :
		When n=0 sum of digits is 0
	Recurrence Relation:
		Sum of Digits (n)= Sum of Digits( gretest integer of(n/10))	 + unit place of n
	As integer division truncates the decimal part, we get a the greatest integer of n/10
	The unit place is found by the modulus function
	*/
	return n==0?n:n%10+sum(n/10);
}
int sum_extnd(int n, int sum)
{
	/*
	Logic is same as above.
	Only Sum at every function call is also an argument.
	*/
	sum+=n%10;
	n=n/10;
	return (n==0)?sum:sum_extnd(n,sum);
}
int main()
{
	int n;
	cout<<"\n Enter a number ";
	cin>>n;
	cout<<"\n Sum of digits of "<<n<<":"<<sum(n);
	cout<<"\n Sum of digits of "<<n<<":"<<sum_extnd(n,0);

}
