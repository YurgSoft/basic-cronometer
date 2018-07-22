#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tempo.h"

enum{
	ZERO = 0, UM, DOIS,
	TREZ, QUATRO, CINCO,
	SEIS, SETE, OITO, NOVE,
	PONTO
};

char *path[] = {
	(char *)"data/_0.txt",
	(char *)"data/_1.txt",
	(char *)"data/_2.txt",
	(char *)"data/_3.txt",
	(char *)"data/_4.txt",
	(char *)"data/_5.txt",
	(char *)"data/_6.txt",
	(char *)"data/_7.txt",
	(char *)"data/_8.txt",
	(char *)"data/_9.txt",
	(char *)"data/_ponto.txt"
};

// declaracao dos prototipos
char *zero(int);
char *um(int);
char *dois(int);
char *trez(int);
char *quatro(int);
char *cinco(int);
char *seis(int);
char *sete(int);
char *oito(int);
char *nove(int);
char *ponto(int);
void emprime(t_tempo);


// definicao das funcoes

char *zero(int linha){
	char *re = (char *)calloc(7,sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[ZERO],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[ZERO]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}

char *um(int linha){
	char *re = (char *)calloc(4, sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[UM],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[UM]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}

char *dois(int linha){
	char *re = (char *)calloc(5,sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[DOIS],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[DOIS]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}

char *trez(int linha){
	char *re = (char *)calloc(5,sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[TREZ],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[TREZ]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}

char *quatro(int linha){
	char *re = (char *)calloc(6,sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[QUATRO],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[QUATRO]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}

char *cinco(int linha){
	char *re = (char *)calloc(5,sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[CINCO],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[CINCO]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}

char *seis(int linha){
	char *re = (char *)calloc(5,sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[SEIS],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[SEIS]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}

char *sete(int linha){
	char *re = (char *)calloc(5,sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[SETE],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[SETE]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}

char *oito(int linha){
	char *re = (char *)calloc(5,sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[OITO],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[OITO]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}

char *nove(int linha){
	char *re = (char *)calloc(5,sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[NOVE],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[NOVE]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}

char *ponto(int linha){
	char *re = (char *)calloc(2,sizeof(char)); 
	linha--;
	register int i=0, c_linha = 0;
	
	FILE *f = fopen(path[PONTO],"r");
	if(f == NULL){
		printf("Erro ao abrir o arquivo => %s",path[PONTO]);
		return NULL;
	}
	
	while(!feof(f)){
		if(linha == c_linha){
			char c = fgetc(f);
			if(c == '\n'){
				c_linha++;
				break;
			}
			if(c!= EOF)re[i++] = c;
		}else{
			char c = fgetc(f);
			if(c == '\n') c_linha++;
		}
	}
	re[i] = '\0';
	fclose(f);
	return re;
}


void emprime(t_tempo t){
	
	int dig1, dig2, dig3, dig4, dig5, dig6;
	
	if(t.hora<10) dig1 = 0, dig2 = t.hora;
	else dig1 = t.hora/10 , dig2 = t.hora%10;
	
	if(t.minuto<10) dig3 = 0, dig4 = t.minuto;
	else dig3 = t.minuto/10 , dig4 = t.minuto%10;
	
	if(t.segundo<10) dig5 = 0, dig6 = t.segundo;
	else dig5 = t.segundo/10 , dig6 = t.segundo%10;
	
	int linha;
	printf("\n\n");
	
	if(tempo_segundo(t)<10) system("color 4");
	
	// controle para a linha
	for(linha = 1; linha<=5; linha++){
		printf("\t\t");
		// empressao do primeiro digito
		if(dig1 == 0)printf("%s  ",zero(linha));
		if(dig1 == 1) printf("%s  ",um(linha));
		if(dig1 == 2) printf("%s  ",dois(linha));
		if(dig1 == 3) printf("%s  ",trez(linha));
		if(dig1 == 4) printf("%s  ",quatro(linha));
		if(dig1 == 5) printf("%s  ",cinco(linha));
		if(dig1 == 6) printf("%s  ",seis(linha));
		if(dig1 == 7) printf("%s  ",sete(linha));
		if(dig1 == 8) printf("%s  ",oito(linha));
		if(dig1 == 9) printf("%s  ",nove(linha));
		
		// empressao do segundo digito
		if(dig2 == 0)printf("%s  ",zero(linha));
		if(dig2 == 1) printf("%s  ",um(linha));
		if(dig2 == 2) printf("%s  ",dois(linha));
		if(dig2 == 3) printf("%s  ",trez(linha));
		if(dig2 == 4) printf("%s  ",quatro(linha));
		if(dig2 == 5) printf("%s  ",cinco(linha));
		if(dig2 == 6) printf("%s  ",seis(linha));
		if(dig2 == 7) printf("%s  ",sete(linha));
		if(dig2 == 8) printf("%s  ",oito(linha));
		if(dig2 == 9) printf("%s  ",nove(linha));
		
		// empressao dos pontos
		printf("%s  ",ponto(linha));
		
		// empressao do terceiro digito
		if(dig3 == 0)printf("%s  ",zero(linha));
		if(dig3 == 1) printf("%s  ",um(linha));
		if(dig3 == 2) printf("%s  ",dois(linha));
		if(dig3 == 3) printf("%s  ",trez(linha));
		if(dig3 == 4) printf("%s  ",quatro(linha));
		if(dig3 == 5) printf("%s  ",cinco(linha));
		if(dig3 == 6) printf("%s  ",seis(linha));
		if(dig3 == 7) printf("%s  ",sete(linha));
		if(dig3 == 8) printf("%s  ",oito(linha));
		if(dig3 == 9) printf("%s  ",nove(linha));
		
		// empressao do quarto digito
		if(dig4 == 0)printf("%s  ",zero(linha));
		if(dig4 == 1) printf("%s  ",um(linha));
		if(dig4 == 2) printf("%s  ",dois(linha));
		if(dig4 == 3) printf("%s  ",trez(linha));
		if(dig4 == 4) printf("%s  ",quatro(linha));
		if(dig4 == 5) printf("%s  ",cinco(linha));
		if(dig4 == 6) printf("%s  ",seis(linha));
		if(dig4 == 7) printf("%s  ",sete(linha));
		if(dig4 == 8) printf("%s  ",oito(linha));
		if(dig4 == 9) printf("%s  ",nove(linha));
		
		// empressao dos pontos
		printf("%s  ",ponto(linha));
		
		// empressao do quinto digito
		if(dig5 == 0)printf("%s  ",zero(linha));
		if(dig5 == 1) printf("%s  ",um(linha));
		if(dig5 == 2) printf("%s  ",dois(linha));
		if(dig5 == 3) printf("%s  ",trez(linha));
		if(dig5 == 4) printf("%s  ",quatro(linha));
		if(dig5 == 5) printf("%s  ",cinco(linha));
		if(dig5 == 6) printf("%s  ",seis(linha));
		if(dig5 == 7) printf("%s  ",sete(linha));
		if(dig5 == 8) printf("%s  ",oito(linha));
		if(dig5 == 9) printf("%s  ",nove(linha));
		
		// empressao do seisto digito
		if(dig6 == 0)printf("%s  ",zero(linha));
		if(dig6 == 1) printf("%s  ",um(linha));
		if(dig6 == 2) printf("%s  ",dois(linha));
		if(dig6 == 3) printf("%s  ",trez(linha));
		if(dig6 == 4) printf("%s  ",quatro(linha));
		if(dig6 == 5) printf("%s  ",cinco(linha));
		if(dig6 == 6) printf("%s  ",seis(linha));
		if(dig6 == 7) printf("%s  ",sete(linha));
		if(dig6 == 8) printf("%s  ",oito(linha));
		if(dig6 == 9) printf("%s  ",nove(linha));
		
		putchar('\n');
	}
	
}

