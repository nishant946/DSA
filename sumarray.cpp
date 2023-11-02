#include <iostream>
using namespace std;
int main(){
int sum=0;
int size;
cout<<"enter the number of input"<<endl;
cin>>size;
int array[size];
for(int i=0;i<size;i++){
    cin>>array[i];
}
for(int j=0;j<size;j++){
    sum+= array[j];
}
cout<<"sum of inputs"<<sum<<endl;

    return 0;
}