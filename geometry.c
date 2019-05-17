#include <stdio.h>
#define PI 3.14159265

struct pnt{
    float x;
    float y;
};

struct crl{
    struct pnt o;
    int r;
};


int Per(int r){
return r*2*PI;
}

int s(int r){
return PI*r*r
}
