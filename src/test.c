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
    
    printf("test_0 ");
    
    // 0 use our own test structure
    gscClearInputs(&test_0_vals);
    gscSetInputs(&test_0_vals, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 19);
    F_extraction[0] = gscCalculate(&test_0_vals);
    
    // 1 use the default test structure
    gscClearInputs(NULL);
    gscSetInputs(NULL, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 19);
    F_extraction[1] = gscCalculate(NULL);
    
    if(F_extraction[0] != F_extraction[1])
    {
        printf("ERROR\n");
    }
    else
    {
        printf("SUCCESS F_extraction = %lf\n", F_extraction[0]);
    }
    
    return;
}

// test case 1
void test_1 (void)
{
    double F_extraction[10] = {0,0,0,0,0,0,0,0,0,0};
    
    printf("test_1 ");
    
    // 0 use our own test structure
    gscClearInputs(&test_0_vals);
    gscSetInputs(&test_0_vals, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    F_extraction[0] = gscCalculate(&test_0_vals);
    
    // 1 use the default test structure
    gscClearInputs(NULL);
    gscSetInputs(NULL, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
    F_extraction[1] = gscCalculate(NULL);
    
    if(F_extraction[0] != F_extraction[1])
    {
        printf("ERROR\n");
    }
    else
    {
        printf("SUCCESS F_extraction = %lf\n", F_extraction[0]);
    }
    
    return;
}

// test case 2
void test_2 (void)
{
    double F_extraction[10] = {0,0,0,0,0,0,0,0,0,0};
    
    printf("test_2 ");
    
    // 0 use our own test structure
    gscClearInputs(NULL);
    gscSetInputs_w00(NULL, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    F_extraction[0] = gscCalculate(NULL);
    
    // 1 use the default test structure
    gscClearInputs(NULL);
    gscSetInputs(NULL, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 19);
    F_extraction[1] = gscCalculate(NULL);
    
    if(F_extraction[0] != F_extraction[1])
    {
        printf("ERROR\n");
    }
    else
    {
        printf("SUCCESS F_extraction = %lf\n", F_extraction[0]);
    }
    
    return;
}

// main
int main (void)
{
    test_0();
    test_1();
    test_2();
    printf("tests completed\n");
    return 0;
}