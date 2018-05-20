#include "gsc.h"
#include <math.h>

double gsc(struct gsc_vars_t work)
{
    // output
    double F_extraction = 0;
    
    //inputs
    double W = work.W;
    double w = work.w;
    double R = work.R;
    double A_tsa = work.A_tsa;
    double S = work.S;
    double k = work.k;
    double u = work.u;
    double o = work.o;
    double y1 = work.y1;
    double y2 = work.y2;
    double y3 = work.y3;
    
    F_extraction = GSC_EQUATION;
    
    return F_extraction;
}
