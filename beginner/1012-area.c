#include <stdio.h>

int main() {
	
	double a, b, c, triangle_area, circle_area, trapezium_area, square_area, rectangle_area;
	const float PI = 3.14159;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	triangle_area = (a * c) / 2.0;
	circle_area = PI * (c * c);
	trapezium_area = ((a + b)/ 2.0) * c;
	square_area = b * b;
	rectangle_area = a * b;
	
	printf("TRIANGULO: %.3lf\n", triangle_area); 
	printf("CIRCULO: %.3lf\n", circle_area); 
	printf("TRAPEZIO: %.3lf\n", trapezium_area); 
	printf("QUADRADO: %.3lf\n", square_area); 
	printf("RETANGULO: %.3lf\n", rectangle_area); 
	return 0;
}

