#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1 , num2 ;
    cout << "ENTER FIRST NUMBER : ";
    cin>>num1;

    cout << "ENTER SECOND NUMBER : ";
    cin>> num2;

    char op;
    cout << "OPERATIONS -" << endl;
    cout << "TYPE '+' FOR ADDITION"<< endl;
    cout << "TYPE '-' FOR SUBTRACTION"<< endl;
    cout << "TYPE '/' FOR DIVISION"<< endl;
    cout << "TYPE '*' FOR MULTIPLICATION"<< endl;
    cout << "ENTER YOUR OPERATION : ";
    cin>>op;

    int sum = num1 + num2;
    int minus = num1 - num2;
    int multiplication = num1*num2;
    float division = num1 / num2;


    switch(op){
        case '+': cout << "THE SUM IS : " << sum << endl;
        break;

        case '-': cout << "THE SUBTRACTION IS : " << minus << endl;
        break;

        case '/': cout << "THE DVISION IS : " << division << endl;
        break;

        case '*': cout << "THE MULTIPLICATION IS : " << multiplication<< endl;
        break;

        default: cout << "THE INPUT IS INVALID!!" << endl;

    }



    

    
}