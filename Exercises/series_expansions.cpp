#include <iostream>
#include <cmath>

int main(void)
{
	int studentNo = 210205061;
	int firstTwoNum = ((studentNo / 10000000) * 100 + studentNo % 100);
	double x = double(firstTwoNum) * 0.0001;
	int b = studentNo % 10;
	printf("Series Expansion Results of 1/(1-x)^2 for x = %.4f", x);
	printf("\n\n\tk\tExpansion Result\t\tError\n");
	double expansionResult = 0.0, error = 0.0;
	double flag = 0.0, less;
	for (double k = 2; k <= 40 + b; k += 2)
	{
		for (double l = 1; l <= k; l++)
		{
			expansionResult += l * pow(x, l - 1);
		}
		error = pow(1 / pow(1 - x, 2) - expansionResult, 2);
		if (k == 40 + b) printf("\n      Inf %22.8f %20.8f\n", expansionResult, error);
		else printf("%9.0f %22.8f %20.8f\n", k, expansionResult, error);
		if (flag == 0.0 && error <= x * 0.0001)
		{
			less = k;
			flag++;
		}
		expansionResult = 0.0, error = 0.0;
	}
	x = x * 0.0001;
	printf("\nSquared error is less than %.8f for k >= %.0f", x, less);
	return 0;
}
