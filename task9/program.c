#include <stdio.h>

	float convert_temp(float C);

	int main() {
		float C = 0;

		printf("Write num for Celsiuse to Fahrenhite: ");
		scanf("%f", &C);

		float result = convert_temp(C);

		printf("Result is --> %.2f", result);

		return 0;
	}


	float convert_temp(float C) {
		float F = C * (9.0 / 5.0) + 32;

		return F;
	}
