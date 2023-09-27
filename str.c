#include<stdio.h>
#include<string.h>
void strpattern(char str[]);
void oddoreven(int *p);
void primeornot(int *p);
int main(){
    char str[] = "welcome";
    // strpattern(str);
    // int a = 9;
    // int *p = &a;
    // primeornot(p);
    char name[] = "Tushar";
    char name2[] = "Tushar";
   if(strcmp(name,name2) == 0){
    printf("String are equal");
   }else{
    printf("String are not equal");
   }
}
void strpattern(char str[]){
    for(int i = 0;i<strlen(str);i++){
        for(int j = 0;j<=i;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
void oddoreven(int *p){
    if(*p%2==0){
        printf("even");
    }else{
        printf("odd");
    }
}
void primeornot(int *p){
    for(int i = 2;i<*p;i++){
        if(*p % i == 0){
            printf("composite number");
            return;
        }
    }
    printf("prime number");
}