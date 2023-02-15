#include <stdio.h>

void quadrado(int tamanho);
void xadrez(int size);
void trianguloH(int size);
void trianguloV(int size);


int main(){
	quadrado(5);
	xadrez(5);
	trianguloH(5);
	trianguloV(5);
	return 0;
}

void quadrado(int size){
	int i; int k;

	for (i = 0; i < size; ++i) {

		for (k = 0; k < size; ++k) {
				printf("#");
		}
	printf("\n");
	}
}

void xadrez(int size){
	int i;

	for (i = 0; i < size; ++i) {

		if (i % 2 == 0) {
			printf("#_#_#");
		}else{
			printf("_#_#_");
		}

	printf("\n");
	}

}

void trianguloH(int size){
	int i;
	int k;
	int f = 1;
	int f2 = size -1;

	for (i = 0; i < size; ++i) {
		for (k = 0; k < f; ++k) {
			printf("#");
		}
		printf("\n");
		f++;
	}

	for (i = 0; i < size; ++i) {
		for (k = 0; k < f2; ++k) {
			printf("#");
		}
		printf("\n");
		f2--;
	}



}

void trianguloV(int size){
	int i;
	int k;
	int f = 1;
	int f2 = size -1;

	for (i = 0; i < size; ++i) {
		for (k = 0; k < f; ++k) {
			printf("#");
		}
		printf("\n");
		f++;
	}

	for (i = 0; i < size; ++i) {
		for (k = 0; k < f2; ++k) {
			printf("#");
		}
		printf("\n");
		f2--;
	}



}





