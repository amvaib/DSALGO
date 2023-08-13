#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ;
    cout << "ENTER A NUMBER : ";
    cin>>n;

        int a = 0;
        int b = 1;


        cout << a << " " << b;

    for(int i = 1 ; i<=n-2 ; i++){

        int nextTerm = a+b;
        cout << " " << nextTerm ;
        a = b;
        b = nextTerm;




    }
}