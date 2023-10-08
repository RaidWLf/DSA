#include <iostream>
using namespace std;


int main(){
    int len = 6;

    int arr[len] = {1,2,3,4,5,6};

    // int pos = 0;
    for (int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < len; i++){
        arr[i] = arr[i+1];
    }

    len = len - 1;
    for (int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }


}