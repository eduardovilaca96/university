#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int casos;
    int anoes;
    int altura;
    int maisalto;

    int count=0;


    if (scanf("%d", &casos) == 1){

    int visiveis[casos];
        for (int i = 0; i < casos; i++)
        {
            count=0;
            maisalto=0;
            if(scanf("%d",&anoes)==1){
                for (int k = 0; k < anoes; k++)
                {
                    if(scanf("%d",&altura)==1&&altura > maisalto){
                        count++;
                        maisalto = altura;
                    }
                }
                
            }
            visiveis[i] = count;
        }
        
        
    for (int s = 0; s < casos; s++)
    {
        printf("%d\n",visiveis[s]);
    }
    }


    

    return 0;
}