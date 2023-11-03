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
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //copying array to another so that we can differentiate between th two 
    int orgarr[n];
    for(int i=0;i<n;i++){
        orgarr[i] = arr[i];
    }
    for(int j=0;j<n/2;j++){
        swap(arr[j],arr[n-1-j]);
    }
    cout<<"printing original array : ";
    print(orgarr , n);
    cout<<"\nprinting reversed array : ";
    print(arr , n);
    return 0;
}