#include <iostream>
using namespace std;



int main(){
    int len = 5;
    int arr [len] = {1,2,3,4,5};

    // insertion at last;
    
    // len = len + 1;
    // // arr[len-1] = 6;
    // cin >> arr[len-1];

    // printing array
    for(int i=0; i<len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // // insertion at beginning
    // len = len + 1;
    // for(int i=len-1; i>0; i--){ // shifting elements to right
    //     arr[i] = arr[i-1];
    // }
    // arr[0] = 6; // inserting at beginning

    // // printing array
    // for(int i=0; i<len; i++){
    //     cout << arr[i] << " ";
    // }

    // insertion at any position
    int pos = 2;
    len = len + 1;
    for(int i=len-1; i>pos; i--){ // shifting elements to right
        arr[i] = arr[i-1];
    }
    arr[pos] = 7; // inserting at pos
    for(int i=0; i<len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}