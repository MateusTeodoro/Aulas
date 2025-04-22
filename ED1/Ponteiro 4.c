#include <stdio.h>
#include <math.h>

double fazCalculo(double raio, double *area, double *volume)
{
    *area = 4 * M_PI * raio * raio;
    *volume = (4.0 / 3.0) * M_PI * raio * raio * raio;
}

int main()
{
    double raio, area = 0.0, volume = 0.0;
    scanf("%lf", &raio);
    
    fazCalculo(raio, &area, &volume);
    
    printf("O valor da area e: %.3lf\n", area);
    printf("O valor do volume e: %.3lf\n", volume);
    return 0;
}