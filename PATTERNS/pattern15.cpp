#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "ENTER A NUMBER : ";
    cin>>n;

    for(int i = 1; i<= n ; i++ ){
        for(char j = 'A' ; j<= 'A'+n -i; j++){
            cout << j<< " ";
        }
        cout << endl;
    }
}