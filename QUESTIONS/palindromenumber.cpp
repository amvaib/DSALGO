//PALINDROME

#include<bits/stdc++.h>
using namespace std;
int main(){

    int x;
    cout << "ENTER A NUMBER : ";
    cin>>x;
    if(x<0){
        return false;
    }
    int og = x;
    int rev = 0;
    while(x!=0){
        int digit = x%10;
         if(rev > INT_MAX/10 || rev < INT_MIN/10){
            return false;
        }
        rev = (rev *10)+digit;
        x = x/10;
  }
  if(og == rev){
    return true;
  }
  else{
    return false;
  }

}