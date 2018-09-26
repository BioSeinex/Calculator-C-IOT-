#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
int num1; //to declare num1
int num2; //to declare num2
char opr; //to declare opr


cout<<"This is a Calculator"<<endl;//Describes to user what the program does

cout<<"Input the first number"<<endl;//Inputs the first number
cin>> num1;


cout<<"Input the Operator...eg, (+)addition,(*)Multiplication,(-)Subtraction,(/)Division"<<endl;//Input the operator to be used
cin>> opr;
cout<<endl;

cout<<"Input the Second number"<<endl;//Inputs the second number
cin>> num2;
cout<<endl;

cout<< num1 <<" "<< opr <<" "<< num2 <<endl;



switch(opr)//the brains of what will happen when user chooses an operator
{
    case '+':
        cout<<num1 + num2<<endl;
    break;

    case '-':
        cout<<num1 - num2<<endl;
    break;

    case '*':
        cout<<num1 * num2<<endl;
    break;

    case '/':

    if (num2 != 0)
        cout<<num1 / num2<<endl;//If num2 is not 0
    else
        cout<<"Cannot be divided by zero (0), please change"<<endl;
    break;

        cout<<"Wrong operation"<<endl;



}




 return 0;
}


