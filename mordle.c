#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<conio.h>
/////////////////////////////
char put[5] = "hello";
char input[5];

void check(){
    for(int i = 0; i <= 5; i++){
        if(input[i] == put[i]){
            printf("GREEN\n");
        }
        else{
            printf("RED\n");
        }
    }
}

int main(){
    int index = 5;
    printf("Mordle Guess The Word Game\n");
    printf("Clue: Its a 5 letter word\n");
    while(1){
    printf("Guess:");
fgets(input,6,stdin);
if(input[index] == '\n'){
    input[index] = '\0';
}
if(strcmp(input,put) == 0){
    system("color 2");
    printf("GREEN GREEN GREEN GREEN GREEN\n");
    printf("Congrats You win the game!!!");
    return 0;
}
///////////////////////////////////////
system("cls");
check();
    }
}