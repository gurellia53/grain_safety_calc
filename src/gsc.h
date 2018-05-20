#include "gsc_secret.h"

// typedef of input variable structure
typedef struct
{
    double W;
    double w;
    double R;
    double A_tsa;
    double S;
    double k;
    double u;
    double o;
    double y1;
    double y2;
    double y3;
} gsc_vars_t;

// public function to calculate the 
extern double gsc(gsc_vars_t work);