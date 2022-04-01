#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int snakeWaterGun(char you,char comp){
    if(you==comp){
        return 0;
    }
    else{
        if(you=='s'&&comp=='w'){
            return 1;
        }else if(you=='w'&&comp=='g'){
            return 1;
        }else if(you=='g'&&comp=='s'){
            return 1;
        }else{
            return -1;
        }
    }
}
int main(){
    while(1){
        char you, comp;
        printf("'s' for Snake,'w' for Water Or 'g' for Gun: \n");
        scanf("%c",&you);
        srand(time(0));
        int number=rand()%100 + 1;
        if(number<=33){
            comp='s';
        }else if(number>33 && number<=66){
            comp='w';
        }else if(number>66){
            comp='g';
        }
        int res = snakeWaterGun(you,comp);
        printf("You chose %c and the computer chose %c.So,\n",you,comp);
        if(res==1){
            printf("You won!!!\n");
        }else if(res==-1){
            printf("You lost!!!\n");
        }else{
            printf("Draw!!!\n");
        }
    }
    return 0;
}