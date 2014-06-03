#include<iostream>
using namespace std;
void reverse(char str[], char rev[], int size, int index)
{
	/*
	Base case is when index is itself equal to size of str. There reverse string must add NULL"
	Recurrence Relation:
	ith character of reverse string = size - ith character of main string
	The function assigns each character starting from end of str string to the beginning of reverse string
	After each assignment index is incremented.
	*/
	rev[index]=str[size-index-1];
	index++;
	if(index<=size-1)
		reverse(str,rev,size,index);
	
	rev[size]=NULL;
}
int main()
{
	char str[100],rev[100];
	int i;
	cout<<"\n Enter a string ";
	cin>>str;
	for(i=0;str[i]!='\0'; i++);
	reverse(str,rev,i,0);
	cout<<"\n Reverse is "<<rev;
}
