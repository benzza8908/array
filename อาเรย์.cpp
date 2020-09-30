#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()

{	int stu;
	int quiz [10];
	int midterm[10];
	int final[10];
	int menu;
	do{
	cout<<"=============================="<<endl;
	cout<<"              menu            "<<endl;
	cout<<"=============================="<<endl;
	cout<<"1.input student records"<<endl;
	cout<<"2.view all student records"<<endl;
	cout<<"3.Exit"<<endl;
	
	
	cout<<"Select menu :";
	cin>>menu;
		if(menu==1)
		{
			cout<<"Input number of student :";
			cin>>stu;
			
			for(int i=0;i<stu;i++){
				cout<<"Number"<<i+1<<endl;
				cout<<"Input quiz :";
				cin>>quiz[i];
				cout<<"Input Midterm :";
				cin>>midterm[i];
				cout<<"Input Final :";
				cin>>final[i];
			}
		}
		 if(menu==2)
		 {
			cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
			cout<<"StdID"<<setw(10)<<setfill(' ')<<"Quiz"<<setw(10)<<setfill(' ')<<"Midterm"<<setw(10)<<setfill(' ')<<"Final"<<endl;
			cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
			for(int i=0;i<stu;i++)
			{
				cout<<i+1<<"\t"<<quiz[i]<<"\t"<<midterm[i]<<"\t"<<final[i]<<endl;
			}cout<<"---------------------------------------------------------------------------------------------------------"<<endl;
		 }
	}while(menu!=3);
		
	cout<<"Exit"<<endl;
	return(0);
}