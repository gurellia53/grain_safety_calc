#ifndef _GSC_H_
#define _GSC_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "G:\grain_safety_calc\src\gsc_secret.h"

// typedef of input variable structure
struct gsc_vars_t
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
};


// calculate the F_extraction
extern double gscCalculate(struct gsc_vars_t* work);

// set input structure
extern void gscSetInputs(struct gsc_vars_t* work, double i_W, double i_w, double i_R, double i_A_tsa, double i_S, double i_k, double i_u, double i_o, double i_y1, double i_y2, double i_y3);

// clear input structure
extern void gscClearInputs(struct gsc_vars_t* work);


// the default object can be used if re-entrance isn't necessary

// default object
extern struct gsc_vars_t dflt_struct;

// set default input structure
extern void gscSetDfltInputs(double i_W, double i_w, double i_R, double i_A_tsa, double i_S, double i_k, double i_u, double i_o, double i_y1, double i_y2, double i_y3);

// clear default input structure
extern void gscClearDfltInputs();

// calculate the F_extraction for the default structure
extern double gscDfltCalculate();



#ifdef __cplusplus
}
#endif

#endif /* _GSC_H_ */ 