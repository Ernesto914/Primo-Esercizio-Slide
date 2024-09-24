#include <stdio.h>

int main(void) {
    int secondi1, ore2, minuti2, secondi2;
    printf("Inserisci il primo numero di secondi: ");
    scanf("%d", &secondi1);
    ore2 = secondi1 /3600;
    minuti2 = secondi1 / 60;
    secondi2 = secondi1 % 60;
    printf("I secondi inseriti equivalgono a %d ore, %d minuti e %d secondi \n", ore2, minuti2, secondi2);
    return 0;

}
