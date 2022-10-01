#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main(){
    int a,c;
    char g;
    int guess=0;
    srand(time(0));
    int n=rand()%10000 +1;
    for(int i=0;i<i+1;i++){
    printf("Guess the number:");
    scanf("%d",&a);
    guess++;
    if(a>n){
        printf("----> Guess lower.<-------\n");
    }
    else if(a<n){
        printf("-----> Guess higher.<-------\n");
    }
    else if(a==n){
        printf("BINGO, the number was %d\n",n);
        printf("You took %d tries to guess the number.",guess);
        break;
    }
    if(i%9==0&&i>=9){
    printf("Do you wanna continue, if yes please press 1:");
    scanf("%d",&c);
    if(c!=1){
        printf("Loserssss! You still took %d tries. The number was %d",guess,n);
        break;
    }
    else {
        continue;
    }
    }
    }
    
}
