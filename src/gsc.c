#include "gsc.h"
#include <math.h>
// default object


//******************************************************************************
// Local Functions *************************************************************
//******************************************************************************

// if the workspace requested is NULL (0), set work to the default workspace.
static void check_dflt_workspace(struct gsc_vars_t** work)
{
    if(0 == *work)
    {
        // use the default structure
        *work = &dflt_workspace;
    }
}

//******************************************************************************
// Default Object **************************************************************
//******************************************************************************
// the default object is used if a NULL "work" pointer is passed into the api.

struct gsc_vars_t dflt_workspace = 
{
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};


//******************************************************************************
// Base Functionality **********************************************************
//******************************************************************************
// This is the basic functionality of this feature. Everything else is a wrapper.

// calculate the F_extraction
double gscCalculate(struct gsc_vars_t* work)
{
    // check to use the default structure
    check_dflt_workspace(&work);
    
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
    // check to use the default structure
    check_dflt_workspace(&work);
    
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
    // check to use the default structure
    check_dflt_workspace(&work);
    
    // set inputs to 0
    gscSetInputs(work, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}


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
void gscSetInputs_w00(struct gsc_vars_t* work, double i_W, double i_w, double i_R, double i_A_tsa, double i_S, double i_k, double i_u, double i_o, double i_h, double i_d)
{
    // check to use the default structure
    check_dflt_workspace(&work);
    
    work->W = i_W;
    work->w = i_w;
    work->R = i_R;
    work->A_tsa = i_A_tsa;
    work->S = i_S;
    work->k = i_k;
    work->u = i_u;
    work->o = i_o;
    work->y1 = i_h;
    work->y2 = i_d;
    work->y3 = i_h + i_d;
}