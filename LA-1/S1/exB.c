#include <stdio.h>

int main(){

    int fst, snd, trd;


    if(scanf("%d %d %d", &fst, &snd, &trd)){
        if(fst == snd && snd == trd) printf("OK\n");
        else if(fst >= snd && fst >= trd && snd >= trd) printf("OK\n");
        else if (fst <= snd && fst <= trd && snd <= trd) printf("OK\n");
        else printf("NAO\n");
    }else printf("NAO\n");

    return 0;
}