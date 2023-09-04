#include<bits/stdc++.h>
using namespace std;

bool oddEven(int a){
    if(a&1 == 1){
        return false;
    }
    else{
        return true;
    }

}

int main(){
    
    int num ;
    cout << "ENTER A NUMBER : ";
    cin>> num;

    if(oddEven(num)){
        cout << "THE NUMBER IS EVEN";

    }
    else{
        cout << "THE NUMBER IS ODD";

    }
}