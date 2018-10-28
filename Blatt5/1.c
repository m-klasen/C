#include <stdio.h>


void cbR(int *x) { 					// call by reference
printf("Ergebnis 1: %d.\n", *x); 	// dereferencing
(*x) += 12;							// wert des addresseninhalt auf den *x zeigt incremetiert
printf("Ergebnis 2: %d.\n", *x);	// 
}

void cbV(int x) {					// call by value
printf("Ergebnis 4: %d. \n", x);	// x wird incremetiert, aber nicht a, da x kein pointer ist
x += 12;
printf("Ergebnis 5: %d.\n", x);		
}

int main(int argc, char**argv) {
int a=10;
cbR(&a);
printf("Ergebnis 3: %d.\n", a);
a=10;
cbV(a);
printf("Ergebnis 6: %d.\n", a);
return 0;
}