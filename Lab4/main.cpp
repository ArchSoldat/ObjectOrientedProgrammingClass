// CS311Fall2025Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "employee.h"

int main()
{
    Employee emp1;

    emp1.setSalary(50000);
    emp1.setHourRate(20);
    emp1.setExtra(10);

    
    std::cout << "Employee 1 Wage: " << emp1.CalculateWage() << std::endl;
    
    return 0;
}


