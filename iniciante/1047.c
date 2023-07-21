#include <stdio.h>
int main()
{
    int initialHour, finalHour, initialMinute, finalMinute;
    int dif;
    scanf("%d %d %d %d", &initialHour, &initialMinute, &finalHour, &finalMinute);
    dif = ((finalHour*60)+finalMinute) - ((initialHour*60)+initialMinute);
    if(dif<=0) dif += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
    return 0;
}
