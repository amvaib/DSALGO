#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ;
    cout << "ENTER THE NUMBER : ";
    cin>>n;

    
    for(int i = 1 ; i <=n; i++){

        //space
        for (int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        

        //stars

        for (int j = 1; j <= 2*i-1; j++)
        {
            cout << "*";
        }
        

        //space

        for (int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        cout << endl;

    }

    for(int i = 1 ; i <=n; i++){

        //space
        for (int j = 1; j <= i-1; j++)
        {
            cout << " ";
        }
        

        //stars

        for (int j = 1; j <= 2*n-(2*i-1); j++)
        {
            cout << "*";
        }
        

        //space

        for (int j = 1; j <= i-1; j++)
        {
            cout << " ";
        }
        cout << endl;

    }

}