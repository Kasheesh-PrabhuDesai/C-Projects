#include <iostream>

using namespace std;

template <typename T>
class Calculator
{
    public:
        Calculator()
        {
            cout<<"Welcome to the calculator world! Please choose your operation"<<endl;
            cout<<"Press + for addition, - for subtraction , x for multiplication and / for division"<<endl;
        }
        void addition(T a,T b);

        void subtraction(T a,T b);

        void division(T a,T b);

        void multiplication(T a,T b);

        
    
};