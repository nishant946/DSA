#include<iostream>
using namespace std;
int main(){
    int n , unique = 0;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        unique = unique ^arr[i];
    }
    cout<<"the unique element of the array is : "<<unique<<endl;
    return 0;
}