/**
 * @file department_main.h
 * @author Navin
 * @brief Header files for Department c program to calculate bill
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __DEPARTMENT_MAIN_H__
#define __DEPARTMENT_MAIN_H__

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * @brief Depend on department type it calculates the bill
 * @param[in] Number of items
 * @param[in] item numbers
 * @param[in] quantity of item
 * @return Result of calculated bill
 */
float department_type(int dtypeno[],int n);
/**
 * @brief Checks for mobile number matches to provide discount for existing customer
 * @return 1 or 0
 */
int customer_data();
#endif  /* #define __DEPARTMENT_MAIN_H__ */