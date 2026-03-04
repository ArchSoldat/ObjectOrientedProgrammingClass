#include <iostream>
//baseSalary + hourlyRate * extraHours

class Employee {
    private:
    double baseSal;
    double hourlyRate;
    double extrahours;

    public:
        Employee(){
            std::cout << "Employee created" << std::endl;
        }

        ~Employee(){
            std::cout << "Employee removed" << std::endl;
        }

        void setSalary(double sal){
            baseSal = sal;
            std::cout << "Salary set to " << sal << std::endl;
        }

        void setHourRate(double rate){
            hourlyRate = rate;
            std::cout << "Rate set to " << rate << std::endl;
        }

        void setExtra(double hours){
            extrahours = hours;
            std::cout << "Hours set to " << hours << std::endl;
        }

        double getSal(){
            return baseSal;
        }

        double getRate(){
            return hourlyRate;
        }

        double getHours(){
            return extrahours;
        }

        double CalculateWage(){
            return (baseSal + hourlyRate * extrahours);
        }


};