#include "gui.h"

int main(){
	char tempo[30];
	t_tempo t;
	do{
		printf("Insira a hora (hh:mm:ss) : ");
		fflush(stdin);
		gets(tempo);
		system("cls");
	}while(!verifyTempo(tempo));
	
	t = getFormated(tempo);
	
	do{
		emprime(t);
		int seg = tempo_segundo(t);
		if(seg <=4 && seg >= 1){
			int a;
			for(a=0;a<4;a++)delay(250),system("cls");
		}else delay(1000);
		system("cls");
	}while(decrementar(&t));
	emprime(t);
	
	int i;
	for(i=0;i<10;i++) printf("\7"),delay(200);

	
	return 0;
}
