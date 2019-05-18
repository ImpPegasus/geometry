#include "geometry.h"
#include <stdio.h>
#define PI 3.14159265

int Per(unsigned int r){
return 2*PI*r;
}

int Plo (unsigned int r){
return PI*r*r;
}

int main(){
float o1,o2;
unsigned int o3;

printf ("Задайте необходимую фигуру \n");
scanf ("%f %f %d", &o1,&o2,&o3);

printf("Фигура: %f %f %d \n Периметр: %d \n Площадь: %d \n", o1, o2, o3, Per(o3), Plo(o3));

}