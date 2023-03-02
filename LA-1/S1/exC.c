#include <stdio.h>

int main(){
    
    int num[3];
    int input;
    int temp;

    for (int i = 0; i < 3; i++)
    {
        if((scanf("%d",&input) == 1))
        num[i] = input;
    }

    for (int i = 0; i < 3; i++) {     
        for (int j = i+1; j < 3; j++) {     
           if(num[i] > num[j]) {    
               temp = num[i];    
               num[i] = num[j];    
               num[j] = temp;    
           }     
        }     
    }

        printf("%d %d %d\n",num[0],num[1],num[2]);

    
    

}