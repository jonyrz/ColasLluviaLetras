#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include "cola_.h"

void gotoxy(int x,int y);
void main()
{
	int posx=10,posy;
	int limx,limy;
	int nivel,vidas,conta,score,i,s;
    char n,L;
    col c;
    s=200;
limy=24;
limx=60;
score=0;
vidas=3;
nivel=1;
srand(time(NULL));

do{ 
if (score>10){nivel=2;}				
if (score>15){nivel=3;}			
if (nivel==2){s=300;}  				
if (nivel==3){s=150;}				
if (score>20){						
printf("Saca las chelas yaxko| \n\n");
break;
system("pause");
}

n=(rand()%52)+65;
for (posy=4;posy<limy;posy++){
gotoxy(0,0);
printf("         Score:%d                    Vidas:%d                    Nivel:%d     \n",score,vidas,nivel);
gotoxy(posx,posy);
printf("%c",n);	
gotoxy(1,23);	
					
Sleep(s);
system("cls"); 
if (kbhit()==1)
{L=getch();

if (L==n){
if(nivel==1){score++;}
if(nivel==2){score=score+2;}
if(nivel==3){score=score+3;}
	
break;
	}
else 
	{
	vidas--;
		
	break;
	}
}
if (!kbhit()) {
	if (posy==23){
	vidas--;

}
printf("\n");
}


}													
	
}while(L!=27&&vidas>0&&vidas!=0);				
printf("¿Donde esta tu honor basura?");
}

void gotoxy(int x,int y){
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
 
 
 
