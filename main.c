#include "geometry.h"
#include <stdio.h>
#define PI 3.14159265

int Per(unsigned int r)
{
    return 2 * PI * r;
}

int Plo(unsigned int r)
{
    return PI * r * r;
}

int main()
{
    float o1 = 0, o2;
    unsigned int o3;
    // char m[];

    printf("Задайте необходимую фигуру \n");
    scanf("%f %f %d", &o1, &o2, &o3);
    // scanf("%20s", &m);

    printf("Фигура: %f %f %d \n Периметр: %d \n Площадь: %d \n",
           o1,
           o2,
           o3,
           Per(o3),
           Plo(o3));

    return 0;
}
