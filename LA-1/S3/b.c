#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int linhas;
    char input[20];
    
    int pos = 5;

    if (scanf("%d", &linhas) == 1)
    {
        int code[linhas];
        for (int i = 0; i < linhas; i++)
        {
            
            if (scanf("%20s", input) == 1)
            {
                for (int k = 0; (size_t)k < strlen(input); k++)
                {
                    switch (input[k])
                    {
                    case 'C':
                        if (pos == 1)
                            pos = 4;
                        else if (pos == 2)
                            pos = 5;
                        else if (pos == 3)
                            pos = 6;
                        else if (pos == 4)
                            pos = 7;
                        else if (pos == 5)
                            pos = 8;
                        else if (pos == 6)
                            pos = 9;
                        break;
                    case 'B':
                        if (pos == 4)
                            pos = 1;
                        else if (pos == 5)
                            pos = 2;
                        else if (pos == 6)
                            pos = 3;
                        else if (pos == 7)
                            pos = 4;
                        else if (pos == 8)
                            pos = 5;
                        else if (pos == 9)
                            pos = 6;
                        break;
                    case 'E':
                        if (pos == 8)
                            pos = 7;
                        else if (pos == 5)
                            pos = 4;
                        else if (pos == 2)
                            pos = 1;
                        else if (pos == 9)
                            pos = 8;
                        else if (pos == 6)
                            pos = 5;
                        else if (pos == 3)
                            pos = 2;
                        break;
                    case 'D':
                        if (pos == 7)
                            pos = 8;
                        else if (pos == 4)
                            pos = 5;
                        else if (pos == 1)
                            pos = 2;
                        else if (pos == 8)
                            pos = 9;
                        else if (pos == 5)
                            pos = 6;
                        else if (pos == 2)
                            pos = 3;
                        break;
                    default:
                        break;
                    }
                }
            }
            code[i]= pos;
        }
        for (int i = 0; i < linhas; i++)
        {
            printf("%d",code[i]);
        }
        printf("\n");
    }
    return 0;
}
