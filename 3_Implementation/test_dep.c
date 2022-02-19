#include "department.h"
#include "unity.h"



#define PROJECT_NAME    "Department billing"
float department_type(int dtypeno[],int n);
int customer_data();

void setUp(){}

void tearDown(){}


int main()
{

  UNITY_BEGIN();


  RUN_TEST(department_type);
  RUN_TEST(customer_data);
  RUN_TEST(main);

  return UNITY_END();
}

int main()
{

TEST_ASSERT_EQUAL_STRING("Navin","Navin");
TEST_ASSERT_EQUAL_INT(9748777348, 9748777348);
TEST_ASSERT_EQUAL_INT8('M','M');
TEST_ASSERT_EQUAL_INT(2, 2);
TEST_ASSERT_EACH_EQUAL_INT(1, 1, 1);
TEST_ASSERT_EACH_EQUAL_INT(3, 3, 1);
TEST_ASSERT_EQUAL(2900.000000,department_type(1,1));
TEST_ASSERT_EQUAL_INT(2,2);
TEST_ASSERT_EACH_EQUAL_INT(1, 1, 1);
TEST_ASSERT_EACH_EQUAL_INT(2, 2, 1);
TEST_ASSERT_EACH_EQUAL_INT(3, 3, 1);
TEST_ASSERT_EACH_EQUAL_INT(4, 4, 1);
TEST_ASSERT_EQUAL(5100.000000,department_type(3,1));
TEST_ASSERT_EQUAL_INT(2,2);
TEST_ASSERT_EACH_EQUAL_INT(1, 1, 1);
TEST_ASSERT_EACH_EQUAL_INT(2, 2, 1);
TEST_ASSERT_EACH_EQUAL_INT(3, 3, 1);
TEST_ASSERT_EACH_EQUAL_INT(4, 4, 1);
TEST_ASSERT_EQUAL(4845.000000,4845.000000);

}


