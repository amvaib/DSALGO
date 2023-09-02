#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int n;
    cin >> n;

    //1ST APPROACH

    for(int i= 0; i <=30; i++){
        int ans = pow(2,i);
        if(ans == n){
            return true;
            
        }



    }
    return false;



    //2ND APPROACH

    // if(n<1)
    // return false;
    // else{
    //     if((n&(n-1))==0)
    //     return true;
    //     else
    //     return false;
    // }

}