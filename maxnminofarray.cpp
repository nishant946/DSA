#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[5]={5 , 4 , 2 ,7 , 8};
    int minAns = INT_MAX;
    int maxAns = INT_MIN;
    for(int i = 0; i<5;i++ ){
        if(arr[i]<minAns){
            minAns = arr[i];
        }
        if(arr[i]>maxAns){
            maxAns = arr[i];
        }
    }
    cout<<minAns<<endl;
    cout<<maxAns<<endl;


    return 0;
}