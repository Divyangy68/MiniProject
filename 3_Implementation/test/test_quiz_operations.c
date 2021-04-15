/* include Unity Test case Definition file & Header.h for defined function on which testing task performed  */
#include "unity.h"
#include <header.h>

/* Modify these two lines according to the project */
#include <header.h>
#define PROJECT_NAME    "Quiz"

/* Prototypes for all the test functions */
void test_main_menu(void);
void test_show_record(void);
void test_help(void);
void test_start_quiz(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_main_menu);
  RUN_TEST(test_show_record);
  RUN_TEST(test_help);
  RUN_TEST(test_start_quiz);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_main_menu(void) {
  TEST_ASSERT_EQUAL(0, main_menu());
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, main_menu());
}

void test_show_record(void) {
  TEST_ASSERT_EQUAL(0, show_record());
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, show_record());
}

void test_help(void) {
  TEST_ASSERT_EQUAL(0, help());
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, help());
}

void test_start_quiz(void) {
  TEST_ASSERT_EQUAL(0, start_quiz());
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, start_quiz());
}