#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    unsigned int i= 1;
    char *c = (char*)&i;
    if(*c != 0){
        cout<<"little endian\n";
    }
    else{
        cout<<"big endian\n";
    }
    return 0;
}
//aise 