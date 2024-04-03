#include<stdlib.h>
#include<stdio.h>

int suma_n(int n,int k, int suma) {
	if (k == n) {
		return suma;
	}
	else {
		k++;
		suma += k;
		return suma_n(n, k,suma);
	}
}

int factorial(int n) {
	if (n == 1)
		return 1;
	else return n * factorial(n - 1);
}

int suma_cifre(int n, int suma) {
	if (n == 1)
		return 1;
	else return n % 10 + suma_cifre(n/10, suma);
}

int manna_pnueli(int n) {
	if (n >= 12)
		return n - 1;
	else return manna_pnueli(manna_pnueli(n + 2));
}

int cmmdc(int a,int b) {
	if (b == 0)
		return a;
	else
		return cmmdc(b, a % b);
}

int fibonacci(int n) {
	if (n > 2)
		return fibonacci(n - 1) + fibonacci(n - 2);
	else return n;
}

int inversul(int n,int inv) {
	if (n == 0)
		return inv;
	else
	{
		inv = inv * 10 + n % 10;
		return inversul(n / 10, inv);
	}
}

int main()
{
	int op;

	printf("|1| Suma primelor n numere naturale\n");
	printf("|2| Calcul Factorial (n!)\n");
	printf("|3| Calcul suma cifrelor numarului\n");
	printf("|4| Manna-Pnueli\n");
	printf("|5| c.m.m.d.c.\n");
	printf("|6| Fibonacci\n");
	printf("|7| Inversul unui numar\n");
	printf("|0| Exit");

	while (1)
	{
		int n; // nr folosit in fiecare case
		printf("\nOptiune:");
		scanf("%d", &op);
		switch (op)
		{
		default:
			printf("Optiune:");
			scanf("%d", &op);
			break;
		case 0:exit(2);
		case 1:
			printf("\nAlegeti un nr: ");
			scanf("%d", &n);
			int s = 0, k = 0;
			printf("%d\n", suma_n(n,k,s));
			break;
		case 2:
			printf("\nAlegeti un nr: ");
			scanf("%d", &n);
			printf("%d\n", factorial(n));
			break;
		case 3:
			printf("\nAlegeti un nr: ");
			scanf("%d", &n);
			int sumacifre = 0;
			printf("%d", suma_cifre(n, sumacifre));
			break;
		case 4:
			printf("\nAlegeti un nr: ");
			scanf("%d", &n);
			printf("%d", manna_pnueli(n));
			break;
		case 5:
			printf("\nAlegeti doua nr\na= ");
			int a,b;
			scanf("%d", &a);
			printf("\nb=");
			scanf("%d", &b);
			printf("%dCel mai mare divizor comun: ", cmmdc(a, b));
			break;
		case 6:
			printf("\nAlegeti un nr: ");
			scanf("%d", &n);
			printf("%d", fibonacci(n));
			break;
		case 7:
			printf("\nAlegeti un nr: ");
			scanf("%d", &n);
			int inv = 0;
			printf("%d", inversul(n,inv));
			break;
		}
	}
	
	return 1;
}