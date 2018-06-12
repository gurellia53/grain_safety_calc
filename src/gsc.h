#ifndef _GSC_H_
#define _GSC_H_

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _WIN32
#include "G:\grain_safety_calc\src\gsc_secret.h"
#endif
#ifdef __linux__
#include "/media/andrew/1694AE9994AE7B3F/view/grain_safety_calc/src/gsc_secret.h"
#endif

//******************************************************************************
// typedefs ********************************************************************
//******************************************************************************

// typedef of input variable structure
struct gsc_vars_t
{
    double W;       //  (lb)        weight of the victim
    double w;       //  (lbs/ft^3)  bulk weight of the granular material
    double R;       //  (ft)        hydraulic radius of the cylinder
    double A_tsa;   //  (ft^2)      top surface area of the victim
    double S;       //  (ft^2)      surface area of the victim
    double k;       //  (dl)        ratio of vertical to lateral pressure
    double u;       //  (dl)        coefficient of friction of grain on grain
    double o;       //  (dl)        coefficient of friction of grain on victim's surface
    double y1;      //  (ft)        distance from top of victim head to bottom of feet
    double y2;      //  (ft)        distance from top of victim head to surface of grain
    double y3;      //  (ft)        distance from bottom of victim feet to top surface of grain
};


//******************************************************************************
// Default Object **************************************************************
//******************************************************************************
// the default object is used if a NULL "work" pointer is passed into the api.

// default object
extern struct gsc_vars_t dflt_workspace;


//******************************************************************************
// Base Functionality **********************************************************
//******************************************************************************
// This is the basic functionality of this feature. Everything else is a wrapper.

// calculate the F_extraction
extern double gscCalculate(struct gsc_vars_t* work);

// set input structure
extern void gscSetInputs(struct gsc_vars_t* work, double i_W, double i_w, double i_R, double i_A_tsa, double i_S, double i_k, double i_u, double i_o, double i_y1, double i_y2, double i_y3);

// clear input structure
extern void gscClearInputs(struct gsc_vars_t* work);



//******************************************************************************
// Wrap Functionality **********************************************************
//******************************************************************************
// This functionality builds upon the base functionality

//
//  gscWrapSetInputs_00
//
//  This wrapper function simply calculates y3 from the victim's height and depth below surface
//
//  i_h (ft) distance from top of victim head to bottom of feet
//  i_d (ft) distance from top of victim head to surface of grain
extern void gscSetInputs_w00(struct gsc_vars_t* work, double i_W, double i_w, double i_R, double i_A_tsa, double i_S, double i_k, double i_u, double i_o, double i_h, double i_d);



#ifdef __cplusplus
}
#endif

#endif /* _GSC_H_ */ 