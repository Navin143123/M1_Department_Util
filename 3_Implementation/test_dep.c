#include "department.h"
/*include"unity.h"*/



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

  return UNITY_END();
}

