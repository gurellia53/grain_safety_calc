#include "gsc.h"
#include <math.h>


// calculate the F_extraction
double gscCalculate(struct gsc_vars_t* work)
{
    // output
    double F_extraction = 0;
    
    //inputs
    double W = work->W;
    double w = work->w;
    double R = work->R;
    double A_tsa = work->A_tsa;
    double S = work->S;
    double k = work->k;
    double u = work->u;
    double o = work->o;
    double y1 = work->y1;
    double y2 = work->y2;
    double y3 = work->y3;
    
    F_extraction = GSC_EQUATION;
    
    return F_extraction;
}

// set input structure
void gscSetInputs(struct gsc_vars_t* work, double i_W, double i_w, double i_R, double i_A_tsa, double i_S, double i_k, double i_u, double i_o, double i_y1, double i_y2, double i_y3)
{
    if(0 == work)
    {
        // use the default structure
        work = &dflt_struct;
    }
    
    work->W = i_W;
    work->w = i_w;
    work->R = i_R;
    work->A_tsa = i_A_tsa;
    work->S = i_S;
    work->k = i_k;
    work->u = i_u;
    work->o = i_o;
    work->y1 = i_y1;
    work->y2 = i_y2;
    work->y3 = i_y3;
}

// clear input structure
void gscClearInputs(struct gsc_vars_t* work)
{
    gscSetInputs(work, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}


// the default object can be used if re-entrance isn't necessary

// default object
struct gsc_vars_t dflt_struct = 
{
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1
};

// set default input structure
void gscSetDfltInputs(double i_W, double i_w, double i_R, double i_A_tsa, double i_S, double i_k, double i_u, double i_o, double i_y1, double i_y2, double i_y3)
{
    gscSetInputs(0, i_W, i_w, i_R, i_A_tsa, i_S, i_k, i_u, i_o, i_y1, i_y2, i_y3);
}

// clear default input structure
void gscClearDfltInputs()
{
    gscSetDfltInputs(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

// calculate the F_extraction for the default structure
double gscDfltCalculate()
{
    return gscCalculate(&dflt_struct);
}

