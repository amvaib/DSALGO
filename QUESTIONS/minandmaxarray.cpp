#include<bits/stdc++.h>
using namespace std;

int maxArray(int num[], int size){

    int maxvalue = INT_MIN;
    for(int i = 0 ; i<size ; i++){
        if(num[i]>maxvalue){
            maxvalue = num[i];
        }
    }

    return maxvalue;
}

int minArray(int num[], int size){

    int minvalue = INT_MAX;
    for(int i = 0 ; i<size ; i++){

        // minvalue = min(minvalue , num[i]);
        if(num[i]<minvalue){
            minvalue = num[i];
        }
    }
    return minvalue;
}
int main(){

    int size;
    cout << "ENTER THE SIZE OF ARRAY : ";
    cin >> size;
    
    int num[100];

    //for taking input in array

    for(int i = 0; i<size ; i++){

        cin>>num[i];


    }

    cout << "THE MAXIMUM VALUE IS " << maxArray(num , size) << endl;
    cout << "THE MINIMUM VALUE IS " << minArray(num , size) << endl;





}