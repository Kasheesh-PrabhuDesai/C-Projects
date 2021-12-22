#include "student_management.h"

//when a new student joins the school, his/her details are added to the database using this function
void AddStudent::add_student_details(string& first_name, string& last_name, string& standard, string& division, string& roll_no)
{
    studentInformation.push_back(first_name);
    studentInformation.push_back(last_name);
    studentInformation.push_back(standard);
    studentInformation.push_back(division);
    studentInformation.push_back(roll_no);
    set_student_details(studentInformation,first_name);
}


void SearchStudent::search_for_student(string& first_name)
{
    get_student_details(first_name);
}


int main()
{

    while(true)
    {
        cout<<"WELCOME TO THE STUDENT DATABASE MANAGEMENT SYSTEM."<<endl;
        cout<<"TO ADD A STUDENT, PRESS 1"<<endl;
        cout<<"TO SEARCH FOR A STUDENT, PRESS 2"<<endl;
        cout<<"TO EXIT, PRESS 3"<<endl;

        int choice = -1;

        cin>>choice;

        if(choice==1)
        {
            AddStudent as;

            string fn,ln,st,dv,rn;

            cout<<"Enter The Students First Name, Last Name, Standard, Division and Roll no separated by a space."<<endl;
            cin>>fn>>ln>>st>>dv>>rn;
            as.add_student_details(fn,ln,st,dv,rn);

        }

        else if(choice==2)
        {
            SearchStudent ss;

            cout<<"Enter the first name of the student you wish to search for."<<endl;

            string fn;

            cin>>fn;

            ss.search_for_student(fn);
        }

        else if(choice==3)
        {
            cout<<"GOODBYE AN HAVE A GREAT DAY"<<endl;
            break;
        }
    
    }
}

