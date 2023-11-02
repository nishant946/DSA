#include<stdio.h>
int main()
{
    int a = 400;
    char* p = (char*)&a;
    for(int i =0; i<sizeof(int);i++)
    {
        printf("%s--->%d\n",p,*p);
        p++;
    }
    return 0;
}//aise hi