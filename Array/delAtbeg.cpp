#include <iostream>
using namespace std;


int main(){
    int len = 6;

    int arr[len] = {1,2,3,4,5,6};

    for(int i = 0; i < len; i++){
        arr[i] = arr[i+1];
    }

    len = len - 1;


}