#include "calculator.h"

void Calculator::addition(long long a,long long b)
{
    cout<<"The addition of the the two numbers is: "<<a+b<<endl;
}

void Calculator::multiplication(long long a,long long b)
{
    cout<<"The product of the two entered numbers is: "<<a*b<<endl;
}

void Calculator::division(long long a,long long b)
{
    if(b==0)
    {
        cout<<"Division by zero not possible"<<endl;

    }
    else
    {
        cout<<"The division results in: "<<a/b<<" and the remainder is: "<<a%b<<endl;

    }
}

void Calculator::subtraction(long long a,long long b)
{
    cout<<"The subtraction of the two numbers results in: "<<a-b<<endl;
}



int main()
{
    Calculator c;
    char ch;
    cin>>ch;
    long long inp1;
    long long inp2;

    switch(ch)
    {
        case '+':
            cin>>inp1>>inp2;
            c.addition(inp1,inp2);
            break;
        
        case '-':
            cin>>inp1>>inp2;
            c.addition(inp1,inp2);
            break;
        
        case 'x':
            cin>>inp1>>inp2;
            c.addition(inp1,inp2);
            break;

        case '/':
            cin>>inp1>>inp2;
            c.addition(inp1,inp2);
            break;
        
        default:
            cout<<"Please enter a valid choice"<<endl;
            break;

    }
}