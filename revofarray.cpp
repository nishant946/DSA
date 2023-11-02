#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5 , 6 , 7 ,9 ,3};
    for(int i = 0; i<(5/2) ; i++){
        swap(arr[i], arr[4-i]);
    }
    for(int j=0; j<5; j++){
        cout<<arr[j]<<" ";
    }

    return 0 ;
}