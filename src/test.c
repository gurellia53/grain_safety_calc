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
    double F_extraction[10] = {0,0,0,0,0,0,0,0,0,0};
    
    printf("test_0\n");
    
    // 0
    gscClearInputs(&test_0_vals);
    gscSetInputs(&test_0_vals, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
    F_extraction[0] = gscCalculate(&test_0_vals);
    
    // 1
    gscClearDfltInputs();
    gscSetDfltInputs(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11);
    F_extraction[1] = gscDfltCalculate();
    
    if(F_extraction[0] != F_extraction[1])
    {
        printf("ERROR a\n");
    }
    else
    {
        printf("F_extraction = %lf\n", F_extraction[0]);
        printf("SUCCESS a\n");
    }
    
    // 2
    gscClearInputs(&test_0_vals);
    gscSetInputs(&test_0_vals, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    F_extraction[2] = gscCalculate(&test_0_vals);
    
    // 3
    gscClearDfltInputs();
    gscSetDfltInputs(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    F_extraction[3] = gscDfltCalculate();
    
    if(F_extraction[2] != F_extraction[3])
        printf("ERROR b\n");
    else
    {
        printf("F_extraction = %lf\n",  F_extraction[2]);
        printf("SUCCESS b\n");
    }
    
    
    
    
    return;
}



// main
int main (void)
{
    test_0();
    printf("tests completed\n");
    return 0;
}