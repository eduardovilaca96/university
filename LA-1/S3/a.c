#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char ordem[9];
    char mensagem[1000];

    if(scanf("%s",ordem) == 1){
        if(scanf("%s",mensagem) == 1){
            for(int i = 0; (size_t)i < strlen(ordem);i++){
                int ord = ordem[i] -'1';
                for (int k = 0; (size_t)(k+ord) < strlen(mensagem); k+=strlen(ordem)){
                    printf("%c",mensagem[k+ord]);
                }
            }
        }
    }
    printf("\n");

}
