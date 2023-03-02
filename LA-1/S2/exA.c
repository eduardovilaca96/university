#include <stdio.h>


int main(){

    int num=0;
    int input=0;
    int x=0,y=0;
    if(scanf("%d",&num) == 1){

        int cartas[num];
        for (int i = 0; i < num; i++)
        {
            if((scanf("%d",&input) == 1))
            cartas[i] = input;
        }

        for (int i = 0; i < num; i++)
        {
            if(cartas[i] % 4 == 0){
                // printf("0\n");
                x+=1;
            }
            else if(cartas[i] % 4 == 1 || cartas[i] ==1 ){
                // printf("1\n");
                y-=1;
            }
            else if(cartas[i] % 4 == 2 || cartas[i] ==2 ){
                // printf("2\n");
                y+=1;
            }
            else if(cartas[i] % 4 == 3 || cartas[i] ==3 ){
                // printf("3\n");
                x-=1;
            }
        }
        
    }

    printf("%d %d\n",x,y);

    return 0;
}