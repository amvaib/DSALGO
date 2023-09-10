
#include<bits/stdc++.h>
using namespace std;

int bitcount(int num){

    int count = 0;
        while(num!=0){
            if(num&1){
                count ++;
            }
            num = num>>1;
        }
       return count;


}
int main(){


    int n;
    cout << "ENTER THE NUMBER : ";
    cin>> n;

    int ans = bitcount(n);
    cout << "THE NUMBER OF SET BITS ARE "<< ans << endl;

}