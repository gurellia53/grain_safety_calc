#include "gsc.h"
#include <stdio.h>

// test values
gsc_vars_t test_0_vals = 
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

// test case
void test_0 (void)
{
    double F_extraction = 0;
    
    printf ("test_0\n");
    
    F_extraction = gsc(test_0_vals);
    
    printf ("F_extraction = %lf\n", F_extraction);
    
    return;
}

// main
int main (void)
{
    test_0();
    return 0;
}