#include <stdio.h>

int main(){

    int jogadas;
    char inzel;
    char cmd;
    int win=0;
    int loss=0;
    int tie=0;


    if(scanf("%d",&jogadas)==1){
        for (int i = 0; i < jogadas; i++)
        {
            if(scanf(" %c%c",&inzel,&cmd)==2){

                switch (inzel)
                {
                case '@':
                    if(cmd=='*')tie++;
                    else if(cmd=='-')loss++;
                    else win++;
                    break;
                case '|':
                    if(cmd=='*')win++;
                    else if(cmd=='-')tie++;
                    else loss++;
                    break;
                case 'X':
                    if(cmd=='*')loss++;
                    else if(cmd=='-')win++;
                    else tie++;
                    break;
                default:
                    break;
                }    
            
            }
        }
        
    }

    printf("%d %d %d\n",win,loss,tie);

    return 0;
}