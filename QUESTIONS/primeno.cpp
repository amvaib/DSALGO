#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout << "ENTER A NUMBER : ";
    cin>>n;
    int count = 0;

    for(int i =1 ; i<=n; i++){
        if(n%i == 0){
            count ++;

        }
        if(count ==2){
            cout << "THIS IS A PRIME NUMBER" << endl;


        }
        else{
            cout << "THIS IS NOT A PRIME NUMBER" << endl;
        }
    }

}