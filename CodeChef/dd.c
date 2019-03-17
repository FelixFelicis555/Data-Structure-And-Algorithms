#include<stdio.h>
#include<string.h>


//printf("Hell0");
/*int a =-5;
int k=(a++,++a);*/

int main(){
    char *arr[4]={"c","c++","java","sql"};
    char *(*ptr)[4]=&arr;
    printf("%s",++(*ptr)[2]);
return 0;
}
