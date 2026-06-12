//False point Method
#include<stdio.h>
#include <math.h>

float f(float x)
{
    return 2 - log(x);
}

int main()
{
    float a = 7, b = 8, E = 1e-10;
    float c;
    while(fabs(f(c) > E))
    {
        c = (a* f(b) - b * f(a))/f(b) - f(b);
        printf("%f<n", c);
        if(f(a) * f(c) < 0)
        {

        }
        else a = c;

    }
    return 0;
}