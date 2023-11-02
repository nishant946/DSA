#include <iostream>;
using namespace std;
int main(){
    int sum=0;
    int num;
    cin>>num;
    int number = num;
    while(num>0){
        int variable =num%10;
        sum+= (variable*variable*variable);
        num/= 10;}
        if(sum==number){
            cout<<"given number is armstrong"<<endl;
        }
        else{
            cout<<"given number is not an armstrong";
        }
return 0;
}