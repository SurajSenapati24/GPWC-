#include <iostream>
using namespace std;

class Employee {
private:
    string name, designation, address, PAN;
    int age;
    double grossSalary, taxableIncome, incomeTax, cess, totalTax;
    const double standardDeduction = 75000.00;

public:
    //default constructor
    Employee(){
        name=designation=address=PAN="";
        age=0;
        grossSalary=taxableIncome=incomeTax=cess=totalTax=0.0;
    }
    // Parameterized constructor
    Employee(string n, int a, string d, double salary, string addr, string pan) {
        name = n;
        age = a;
        designation = d;
        grossSalary = salary;
        address = addr;
        PAN = pan;
        incomeTax = cess = totalTax = 0.0;
    }

    void calculateTax() {
        taxableIncome = grossSalary - standardDeduction;

        // Calculate income tax based on slabs
        if (taxableIncome <= 300000) {
            incomeTax = 0;
        } else if (taxableIncome <= 700000) {
            incomeTax = (taxableIncome - 300000) * 0.05;
        } else if (taxableIncome <= 1000000) {
            incomeTax = 20000 + (taxableIncome - 700000) * 0.10;
        } else if (taxableIncome <= 1200000) {
            incomeTax = 50000 + (taxableIncome - 1000000) * 0.15;
        } else if (taxableIncome <= 1500000) {
            incomeTax = 80000 + (taxableIncome - 1200000) * 0.20;
        } else {
            incomeTax = 140000 + (taxableIncome - 1500000) * 0.30;
        }

        //Education and Health Cess
        cess = incomeTax * 0.04;

        //Total Tax Payable
        totalTax = incomeTax + cess;
    }

    void printTaxSheet() {

        cout << "\nName in Full : " << name << endl;
        cout << "Designation  : " << designation << endl;
        cout << "Office address : " <<address<< endl;
        cout << "AGE: " << age << endl;
        cout << "PAN: " << PAN << endl;

        cout << "----------------------------------------------------------------------------------------------------\n";
        cout << "                            For the Financial Year 2024-25 (A.Y. 2025-26)         \n";
        cout << "----------------------------------------------------------------------------------------------------\n";

        cout << "|Gross Salary (Pay +GP+DA+HRA+ALLOWANCES) :                           | Rs. " << grossSalary << "|\n";
        cout << "|Less:Standard Deduction u/s 16(ia) :                                 | -Rs. " <<  standardDeduction << "|\n";
        cout << "|Total Income / Taxable income :                                      | Rs. " <<  taxableIncome << "|\n";

        cout << "----------------------------------------------------------------------------------------------------\n";
        cout << "|Calculation of Income Tax                                                                          |\n";
        cout << "|  Income <= 300000.00                         : NIL                                                |\n";
        cout << "|  300000.00 <= Income < 700000.00             : 5% of income that exceed 300000.00                 |\n";
        cout << "|  700000.00 <= Income < 1000000.00            : 20000.00 + 10% of income above 700000              |\n";
        cout << "| 1000000.00 <= Income < 1200000.00            : 50000.00 + 15% of income above 1000000             |\n";
        cout << "| 1200000.00 <= Income < 1500000.00            : 80000.00 + 20% of income above 1200000             |\n";
        cout << "| Income >= 1500000.00                          : 140000.00 + 30% of income above 1500000           |\n";
        cout << "|                                                                                                   |\n";
        cout << "|Rebate Total Income less than Rs. 7 Lakhs.                                                         |\n";
        cout << "|                                                                                                   |\n";
        cout << "|Total Tax                                :                                    | Rs. " << incomeTax << "|\n";
        cout << "|Education & Health Cess @ 4% on Income Tax: | Rs. "  << cess << "|\n";
        cout << "|Add: Surcharge @ 10% (if income > 50 Lakhs): | NA                                     |\n";
        cout << "|Add: Surcharge @ 15% (if income > 1 Crore)  : | NA                                     |\n";
        cout << "-------------------------------------------------------------------------------\n";
        cout << "|Total tax payable                         : | Rs. "  << totalTax << "|\n";
        cout << "-------------------------------------------------------------------------------\n";
    }
};

// Example usage
int main() {
    string name, designation, address, pan;
    int age;
    double salary;

    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter Designation: ";
    getline(cin, designation);
    cout << "Enter Gross Salary: ";
    cin >> salary;
    cin.ignore();
    cout << "Enter Office Address: ";
    getline(cin, address);
    cout << "Enter PAN Number: ";
    getline(cin, pan);

    Employee emp(name, age, designation, salary, address, pan);
    emp.calculateTax();
    emp.printTaxSheet();

    return 0;
}
