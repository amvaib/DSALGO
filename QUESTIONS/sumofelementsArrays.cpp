#include<bits/stdc++.h>
using namespace std;
int sumArray(int arr[] , int sizearr){
    int sum = 0;
    for(int i = 0 ; i<sizearr ; i++){
        sum = arr[i] + sum;

    }
    return sum;
}
int main(){

    int sample[100];
    int size ;
    cout << "ENTER THE SIZE OF ARRAY : ";
    cin>> size;

    for(int i =0; i<size ; i++){

        cin >> sample[i] ;




    }

    cout << "THE SUM OF ALL ELEMENTS OF THIS ARRAY IS : " << sumArray(sample , size);

}