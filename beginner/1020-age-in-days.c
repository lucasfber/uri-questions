#include <stdio.h>

int main() {
	
	const int DAYS_PER_YEAR = 365;
	const int DAYS_PER_MONTH = 30;
	int age, years, months,days;
	
	scanf("%d", &age);
	
	years = age / DAYS_PER_YEAR;
	months = (age % DAYS_PER_YEAR) / DAYS_PER_MONTH;
	days = (age % DAYS_PER_YEAR) % DAYS_PER_MONTH;
	printf("%d ano(s)\n", years);
	printf("%d mes(es)\n", months);
	printf("%d dia(s)\n", days);
	
	return 0;
}
