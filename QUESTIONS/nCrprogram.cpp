#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
        
    }
    return fact;

}

int nCr(int n , int r){
    int num = factorial(n);
    int den = factorial(r) * factorial(n-r);
    int ans = num/den;

    return ans;

}

int main(){

    int n, r;
    cout << "ENTER N : ";
    cin>> n;

    cout << "ENTER R : ";
    cin >> r;

    int answer = nCr(n,r);
    cout << "THE ANSWER IS : "<< answer << endl;


}