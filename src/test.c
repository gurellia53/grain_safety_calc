#include "gsc.h"
#include <stdio.h>

// test values
struct gsc_vars_t test_0_vals = 
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

// test case 0
void test_0 (void)
{
    double F_extraction = 0;
    
    printf ("test_0\n");
    
    gscClearInputs(&test_0_vals);
    gscSetInputs(&test_0_vals, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
    F_extraction = gscCalculate(&test_0_vals);
    
    printf ("F_extraction = %lf\n", F_extraction);
    
    return;
}

// test case 1
void test_1 (void)
{
    double F_extraction = 0;
    
    printf ("test_1\n");
    
    gscClearDfltInputs();
    gscSetDfltInputs(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
    F_extraction = gscDfltCalculate();
    
    printf ("F_extraction = %lf\n", F_extraction);
    
    return;
}

// main
int main (void)
{
    test_0();
    test_1();
    return 0;
}