#include <stdio.h>

int main() {
	
	double n;
	int notes_100, notes_50, notes_20, notes_10, notes_5, notes_2;
	int coins_1, coins_50, coins_25, coins_10, coins_5, coins_01;
	
	scanf("%lf", &n);
	n = n * 100;
	
	notes_100 = (int) n / 10000;
	notes_50 = (int) n % 10000 / 5000;
	notes_20 = ((int) n % 10000 % 5000) / 2000;
	notes_10 = (((int) n % 10000 % 5000) % 2000) / 1000;
	notes_5 = ((((int) n % 10000 % 5000) % 2000) % 1000) / 500;
	notes_2 = (((((int) n % 10000 % 5000) % 2000) % 1000) % 500) / 200;
	
	coins_1 = ((((((int) n % 10000 % 5000) % 2000) % 1000) % 500) % 200) / 100;
	coins_50 = (((((((int) n % 10000 % 5000) % 2000) % 1000) % 500) % 200) % 100) / 50;
	coins_25 = ((((((((int) n % 10000 % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) / 25;
	coins_10 = (((((((((int) n % 10000 % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) / 10;
	coins_5 = ((((((((((int) n % 10000 % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) % 10) / 5;
	coins_01 = (((((((((((int) n % 10000 % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) % 10) % 5) / 1;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", notes_100);
	printf("%d nota(s) de R$ 50.00\n", notes_50);
	printf("%d nota(s) de R$ 20.00\n", notes_20);
	printf("%d nota(s) de R$ 10.00\n", notes_10);
	printf("%d nota(s) de R$ 5.00\n", notes_5);
	printf("%d nota(s) de R$ 2.00\n", notes_2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", coins_1);
	printf("%d moeda(s) de R$ 0.50\n", coins_50);
	printf("%d moeda(s) de R$ 0.25\n", coins_25);
	printf("%d moeda(s) de R$ 0.10\n", coins_10);
	printf("%d moeda(s) de R$ 0.05\n", coins_5);
	printf("%d moeda(s) de R$ 0.01\n", coins_01);
	return 0;
}
