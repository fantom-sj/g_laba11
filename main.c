#include <stdio.h>
#include "calculate.h"

int main(void) //мдлповадлплдо
{
float Numeral;
char Operation[4];
float Result;
printf("Ввидите число: ");
scanf("%f",&Numeral);
printf("Арифметическое действие (+,-,*,/,pow,sqrt,sin,cos,tan): ");
scanf("%s", Operation);
Result = Calculate(Numeral, Operation);
printf("%6.2f\n",Result);
return 0;
}

