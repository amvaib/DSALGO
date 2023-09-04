#include<bits/stdc++.h>
using namespace std;

bool prime(int n){

    for(int i = 2; i<=n; i++){
        if(n%i == 0){
            return false;
        }
        else{
            return true;
        }
    }
}

int main(){

    int n;
    cout << "ENTER A NUMBER : ";
    cin>>n;

    if(prime(n)){
        cout << "THE NUMBER IS PRIME";

    } else{
        cout << "THE NUMBER IS NOT A PRIME";

    }

}