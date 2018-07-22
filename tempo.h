#include <time.h>
#include <ctype.h>

// defenicao de dados
typedef struct{
	int hora, minuto, segundo;
}t_tempo;

// prototypes das funcoes
void delay(int milliseconds);
int verifyTempo(const char *);
t_tempo getFormated(const char *);
int tempo_segundo(t_tempo);
int decrementar(t_tempo *);
t_tempo getFromSegundo(long int);


// defenicao das funcoes
void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause ) now = clock();
}

int verifyTempo(const char *t){
	if(isdigit(t[0]))
	  if(isdigit(t[1]))
	  	if(!isdigit(t[2]))
	  		if(isdigit(t[3]))
	  			if(isdigit(t[4]))
	  				if(!isdigit(t[5]))
	  					if(isdigit(t[6]))
	  						if(isdigit(t[7])) return 1;
	return 0;
}

t_tempo getFormated(const char *tempo){
	t_tempo t;
	t.hora = (tempo[0]-'0')*10 + (tempo[1]-'0');
	t.minuto = (tempo[3]-'0')*10 + (tempo[4]-'0');
	t.segundo = (tempo[6]-'0')*10 + (tempo[7]-'0');
	return t;  
}

int tempo_segundo(t_tempo t){
	return (t.segundo+t.minuto*60+t.hora*3600);
}

int decrementar(t_tempo *t){
	long int i = tempo_segundo(*t);
	if(i== 0) return 0;
	*t = getFromSegundo(--i);
	return 1;
}

t_tempo getFromSegundo(long int seg){
	t_tempo t;
	t.hora = seg/360 , t.minuto = (seg%360)/60 , t.segundo = ((seg%360)%60);
	return t;
}
