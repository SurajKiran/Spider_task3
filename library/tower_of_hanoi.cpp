#include<iostream>
using namespace std;
/* The function prints the next move for completing the game*/
void print_move(int n ,char curr[20], char dest[20] , char med[20]) //n is number of disks, curr is the current position of disks , 
												//dest is the destination ring, med is the other ring
{
	if(n==1)
	{
		cout<<"\n Move "<<1<<"st disk from "<<curr<<" to "<<dest;
	}
	
	else
	{
		print_move(n-1,curr,med,dest);//move n-1 disks to middle ring
		cout<<"\n Move "<<n<<"th disk from "<<curr<<" to "<<dest;// move nth disk to destination ring
		print_move(n-1,med,dest,curr);//move n-1 dosks to destination ring from the midddle ring
	}
}
int main()
{
	int n;
	cout<<"\n Enter number of disks ";
	cin>>n;
	print_move(n,"Left Ring","Right Ring","Centre Ring");
}
