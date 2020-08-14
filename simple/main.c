/* MAIN.C */
/* Тема - Простые и составные числа */

/*******************************************************************************/
#include <stdio.h>

// разложение на простые множители
int simple_factorization(int var)
{
	int simple=2; // Простое число

	printf("Разложение: \n");
	for(; simple<=var; simple++)
	{
		for(; var%simple==0; var/=simple)
					printf("N=%d, var=%d \n", simple, var);
		printf("N=%d, var=%d \n", simple, var);
	}          
              
	return 0;
}
int main()
{
	int var=0;
	printf("Введите число: ");
	if(scanf("%d", &var))
		(var>0) ? 	simple_factorization(var) : perror("error (simple <= 0)");
	else perror("error scanf()");
	
	printf("\n");

	return 0;
}

/*******************************************************************************/
