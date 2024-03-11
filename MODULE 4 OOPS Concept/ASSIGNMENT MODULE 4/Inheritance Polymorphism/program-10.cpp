//10.Write a program to concatenate the two strings using Operator Overloading

#include<iostream>
#include<string.h>
using namespace std;
class merge_string
{
	char name1[50],name2[50];
	public:
		merge_string(char s1[50],char s2[50])
		{
			strcpy(name1,s1);
			strcpy(name2,s2);
		}
		merge_string operator + ()
		{
			strcat(name1," ");
			cout<<"Merged Stirng : "<<strcat(name1,name2);
		}
};
int main()
{
	char n1[50],n2[50];
	cout<<"Enter 2 String : ";
	cin>>n1>>n2;
	merge_string obj(n1,n2);
	+obj;
	return 0;
}
