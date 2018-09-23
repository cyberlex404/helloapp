#include <stdio.h> 
#include <conio.h> 
#include "simple.h"

void main()                  
{          
	int v = 3000;
	int a = 130, b = 160;
	int flag = 0;
	int ca = 0, cb =0;

	while (v > 0) {
		v = v - a;
		ca++;
		if (v%b == 0) {
			cb = v / b;
			flag = 1;
			break;
		}
	}

	if (flag) {
		printf("It's okay (a *%d) + (b * %d) == 3000", ca, cb);
	}
	else{
		printf("Big problem!");
	}
	
	//doSomething(); // use external file

	_getch();
}                               