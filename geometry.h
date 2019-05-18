#ifdef GEOMETRY_H
#define GEOMETRY_H
#include <stdio.h>

typedef struct {
    float x, y;
} point;

typedef struct {
    point o;
    int r
} circle;

circle test;
point z;

int Per(int r);
int Plo(int r);

#endif