//5. Assume that the test results of a batch of students are stored in three different classes.
// Class Students are storing the roll number. 
// Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. 
// The class result can inherit the details of the marks obtained in the test and roll number of students.(Multilevel Inheritance)

#include<iostream>
using namespace std;
class Students
{
	protected:
		int roll_num;
		
	public:
		void get_roll()
		{
			cout<<" Enter the Roll Number : ";
			cin>>roll_num;
		}
};
class Test : public Students
{
	protected:
		float hindi,english;
	
	public:
		void get_marks()
		{
			cout<<" Enter the Marks of Hindi : ";
			cin>>hindi;
		
			cout<<" Enter the Marks of English : ";
			cin>>english;
		}
};
class Result : public Test
{
	protected:
		float Total;
	
	public:
		void get_total()
		{
			Total=hindi+english;
		}
		
		void display_data()
		{
			cout<<"\nStudent Roll Number is : "<<roll_num<<endl;
			cout<<"\n\n -----> Test Marks of 2 Subjects <-----"<<endl1;
			cout<<" Marks of Hindi is : "<<hindi<<endl;
			cout<<" Marks of English is : "<<english<<endl;
			cout<<" Total Marks of 2 Subjects :"<<Total<<endl;
		}
};
int main()
{
	Result re;
	re.get_roll();
	re.get_marks();
	re.get_total();
	re.display_data();
}
