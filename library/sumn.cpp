#include<iostream>
using namespace std;
long sum1(int array[], int size)
{
	/* base case is the value of sum when size is 1 which is the first term itself. The function can be defined as
		f(array,size)= array[0], if size =1
					   array[size-1] +f(array, size-1), otherwise
		Recursive relation:
		sum(n terms) = nth term +sum(n-1 terms)
		The function works by the same logic  
	*/
	return (size==1)?array[0]:array[size-1]+sum1(array,size-1);	
}
long sum_extnd(int array[], int size ,long sum)
{
	/* The logic is same as first function with only difference being that sum is also passed as an argument*/
	
	sum+=array[size-1];
	return size==1?sum:sum_extnd(array,size-1,sum);
}

int main()
{
	int a[100],size;
	long sum=0;
	cout<<"\n Enter Size ";
	cin>>size;
	for(int i=0; i<size;i++)
	{
		cout<<"\n Enter number : ";
		cin>>a[i];
	}
	
	cout<<"\nSum of n terms is "<<sum1(a,size);
	cout<<"\nSum of n terms is "<<sum_extnd(a,size,0);
	
	
	return 0;
	
}
