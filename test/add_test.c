Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@stepin104698 
Learn Git and GitHub without any code!
Using the Hello World guide, you’ll start a branch, write comments, and open a pull request.


stepin104680
/
step_exp
1
04
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
step_exp/test/add_test.c
@stepin104680
stepin104680 Create add_test.c
Latest commit 1befdc4 8 days ago
 History
 1 contributor
45 lines (33 sloc)  1.07 KB
  
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <adder.h>
#define PROJECT_NAME    "Addition"

/* Prototypes for all the test functions */
void test_add(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "adder", test_add);
 

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(30 == adder(5,5, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == adder(750, 400,7500));
}

© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
