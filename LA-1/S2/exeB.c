#include <stdio.h>

int main(){
    int inicio=0;
    int andares=0;
    int comandos=0;
    int pos=0;

    if(scanf("%d",&inicio) == 1){
        if(scanf("%d",&andares)== 1){
            if(scanf("%d",&comandos) == 1){
                for (int i = 0; i < comandos; i++)
                {
                    if(scanf("%d",&pos) == 1 && (pos == 1 || pos == -1)){
                        if((inicio + pos) <= andares && (inicio + pos) >= 0){
                            inicio += pos;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",inicio);

    return 0;
}