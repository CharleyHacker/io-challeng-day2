#include <iostream>
#include<fstream>
using namespace std;
int main()
{
 ofstream file("IO QUEST Q2.txt");
cout<<"enter the student id#, first name , last name, dob, address" <<endl;
cout<<"press ctrl+2 to quit"<<endl;
string student_name ,first_name  ,last_name;
int dob;
int address;
while(cin>>student_name >>first_name >>last_name >>dob>> address)
{
///	file<<cout<<"student id   first name secondname  dob  address city"<<endl;
file<<student_name<<"  ";
file<<first_name<<"  ";
file<<last_name<<"  ";
file<<dob<<"  ";

}
cout<<""<<endl;
}
