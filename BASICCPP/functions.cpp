#include<bits/stdc++.h>
using namespace std;
//function
int power(int num1 , int num2){
    int ans = 1;
    for(int i = 1; i<=num2; i++){
        ans = ans * num1;


    }

    return ans;


}

int main(){

    int a , b;
    cout << "ENTER THE BASE NUMBER : ";
    cin>>a;

    cout << "ENTER THE POWER NUMBER : ";
    cin>>b;

    int answer = power(a,b);

    cout << "THE ANSWER IS : "<< answer << endl;

}