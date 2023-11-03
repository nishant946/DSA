#include<iostream>
using namespace std;
//function to print an array
void print(int arr[] , int n){
    for(int j= 0;j<n;j++){
        cout<<arr[j]<<"  ";
    }
    cout<<endl;
}
int main(){
    int n ;
    cout<<"enter the the no input : \n";
    cin>>n;
    int arr[n];
    cout<<"enter the numbers : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int k =1;k<n;k++){
        if(arr[k]<min){
            min = arr[k];
        }
    }
    //printing the array
    cout<<"the entered array is : ";
    print(arr , n);
    cout<<"manimum of the array is : "<<min<<endl;
    return 0;
}
