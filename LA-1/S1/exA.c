#include <stdio.h>

int main(){

    int input = 0;
    int max = 0;
    int index = 0;
    
    for (int i = 0; i < 5; i++)
    {
        if((scanf("%d",&input) == 1) && input > max){
            max = input;
            index = i+1;
        }
    }
    printf("%d\n",index);
    return 0;
}

