#include<iostream>
using namespace std;
bool isprime(int n, int i)
{
	/*
		Base Relation:
			If i is less than 2 it means n is not divisible by all numbers from 2 to n/2 i.e is n is prime.
		Recurrence Relation:
			if n is divisible by i, n is not prime.
			N is prime if N is not divisible by any number from 2 to n/2.
	The program checks to see if n is divisible by any number between n/2 to 2 starting from n.
	If any number in this range divides n function returns fasle, else it keeps on checking till it reaches 2.
	If 2 also does not divide n the function returns true
	*/	
	if(i<2 && n>1) return true;
	return ((n%i==0))?false:isprime(n,(i-1));
}
int main()
{
	int n;
	cout<<"\n Enter a number ";
	cin>>n;
	if(isprime(n,n/2))
		cout<<"\n "<<n<<" is prime";
	else
		cout<<"\n "<<n<<" is not prime";
}
