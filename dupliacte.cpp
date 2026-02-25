#include<iostream>
using namespace std;

int main(){
    int arr[10] = {0,0,1,1,1,1,2,2,2,3};
    int n = 10;

    int i = 0;

    for(int j = 1; j < n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    for(int k = 0; k <= i; k++){
        cout << arr[k] << " ";
    }
}