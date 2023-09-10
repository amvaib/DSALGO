#include<bits/stdc++.h>
using namespace std;

bool search(int arr[] , int size , int key){

    for(int i = 0; i<size ; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

void inputArray(int arr[] , int size){

    for(int i = 0; i<size; i++){
        cout << "ENTER THE ELEMENTS FOR ARRAY : ";
        cin>>arr[i];


    }

}
int main(){

    int sample[100];
    int size ;
    cout << "ENTER THE SIZE OF THE ARRAY : ";
    cin >> size;

    inputArray(sample , size);
    int element;
    cout << "ENTER THE ELEMENT TO SEARCH : ";
    cin>> element;

    bool found = search(sample , size , element);

    if(found == true){
        cout << "THE ELEMENT IS FOUND!" << endl;
    } else {
        cout << "THE ELEMENT WAS NOT FOUND!" << endl;

    }



}