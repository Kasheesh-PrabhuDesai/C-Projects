#include <iostream>

using namespace std;

class Calculator
{
    public:
        Calculator()
        {
            cout<<"Welcome to the calculator world! Please choose your operation"<<endl;
            cout<<"Press + for addition, - for subtraction , x for multiplication and / for division"<<endl;
        }
        void addition(long long a,long long b);

        void subtraction(long long a,long long b);

        void division(long long a,long long b);

        void multiplication(long long a,long long b);

        
    
};