//4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;
class Student_Details 
{
	protected:
		string name;
		int roll_no;
	
	public:
		void get_data()
		{
			cout<<"Enter Your Name : ";
			cin>>name;
			
			cout<<"Enter Your Roll Number : ";
			cin>>roll_no;
		}
};
class Subjects
{
	protected:
		int math,sci,phy,chem,hindi;
		
	public:
		void subject()
		{
			cout<<"Enter the Marks of Maths : ";
			cin>>math;
			
			cout<<"Enter the Marks of Science : ";
			cin>>sci;
		
			cout<<"Enter the Marks of Physics : ";
			cin>>phy;
		
			cout<<"Enter the Marks of Chemistry : ";
			cin>>chem;
		
			cout<<"Enter the Marks of Hindi : ";
			cin>>hindi;			
		}

};
class Result : public Student_Details,public Subjects
{
		protected:
			float Total,pr;
			
		public:
			void result()
			{
				Total=math+sci+phy+chem+hindi;
				
				pr=Total*100/500;
				cout<<"\n The Percentage of given Subjects is : "<<pr;
				
				if(pr>80)
				{
					cout<<"\n Grade : A+";
				}
					
				else if(pr>65)
				{
					cout<<"\n Grade : B";
				}
				
		 		else if(pr>40)
				{
					cout<<"\n Grade : C (Passing Grade)";
				}
				else
				{
					cout<<"\n You are Fail ";
				}
			}
};
main()
{
	Result re;
	re.get_data();
	re.subject();
	re.result();
}
