#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

//main class to store the personal details of the student
class Student
{
    private:
    string first_name;
    string last_name;
    string division;
    string standard;
    string roll_no;
    map<string,vector<string>> student_details;

    public:
    //constructor when called clears all the data stored in the variables
    Student()
    {
        first_name.clear();
        last_name.clear();
        division.clear();
        standard.clear();
    }

    //function to store the details entered in the terminal in the student database
    void set_student_details(vector<string>& studentInformation,string& first_name)
    {
        student_details[first_name] = studentInformation;

        cout<<"STUDENT ADDED SUCCESSFULLY"<<endl;
    }

    //function that will be used to return the details of a student when the search query is issued
    void get_student_details(string& key)
    {
        if(student_details.find(key)!=student_details.end())
        {
            string StudentDetails = "";
            for(auto student_contents:student_details[key])
            {
                StudentDetails = StudentDetails + student_contents + " ";
            }
            
            cout<<"Search Successfull!"<<endl;
            cout<<StudentDetails<<endl;
        }

        else
        {
            cout<<"ERROR! STUDENT DOES NOT EXIST"<<endl;
        }
            


    }

};

//child class that will be used to add new students to the database
class AddStudent: public Student
{
    public:
    vector<string> studentInformation;

    AddStudent()
    {
        studentInformation.clear();
    }
    void add_student_details(string& first_name, string& last_name, string& standard, string& divison, string& roll_no);

};

//child class that will be used to search for the details of any student stored in the database
class SearchStudent: public Student
{
    public:

    void search_for_student(string& first_name);
};

