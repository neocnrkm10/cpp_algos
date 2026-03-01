#include<iostream>
using namespace std;

void next_g(int arr[], int len){

    int new_arr[len];

    for(int i = 0; i < len; i++){
        new_arr[i] = -1;   // assume no greater element

        for(int j = i + 1; j < len; j++){
            if(arr[j] > arr[i]){
                new_arr[i] = arr[j];
                break;     // stop once found
            }
        }
    }

    for(int i = 0; i < len; i++){
        cout << new_arr[i] << " ";
    }
}

int main(){

    int arr[] = {2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    next_g(arr, len);

    return 0;
}