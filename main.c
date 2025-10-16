#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    double temp_result;
    double x, sum = 0.0;

    printf("Введите натуральное число n: ");
    scanf("%d", &n);

    printf("Введите действительное число x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= n; i++)
    {
        temp_result = sin(pow(x, i));
        sum += temp_result;
    }

    printf("Результат: %g\n", sum);
    return 0;
}
