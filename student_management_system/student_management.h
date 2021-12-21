#include <vector>
#include <string>
#include <map>

using namespace std;

//a base class to store the personal details of the student
class Student
{
    private:
    string first_name;
    string last_name;
    string division;
    string standard;
    string roll_no;
    vector<vector<string>> student_information;
    map<string,vector<vector<string>>> student_details;

    public:

    Student()
    {
        first_name.clear();
        last_name.clear();
        division.clear();
        standard.clear();
        student_information.clear();
    }

    void set_student_details(string first_name, string last_name, string division, string standard,string roll_no)
    {
        first_name = first_name;
        last_name = last_name;
        standard = standard;
        division = division;
        roll_no = roll_no;
        student_information.push_back({first_name,last_name,standard,division,roll_no});
        student_details[first_name] = student_information;

    }

    string get_student_name(char key, string value)
    {
        if(key=='f'||key=="F")
            return student_details[]
    }
    string get_student_division()
    {
        return division;
    }
    string get_student_standard()
    {
        return standard;
    }

};

//child class that will be used to add new students to the database
class AddStudent: public Student
{
    public:

    void add_student_details();

};

//child class that will be used to search for the details of any student stored in the database
class SearchStudent: public Student
{
    public:

    string get_student_details();
};

