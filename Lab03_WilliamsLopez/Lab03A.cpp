///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: Lab03A.cpp
// Date: October 10, 2019
// Programmer: Samir Williams            
//
// Description:
//    Calculate the net income and determine if it's sufficient
//    to pay the living expenses.
//                                                                  
///////////////////////////////////////////////////////////////////////

#include<iostream>
#include<string>

using namespace std;

///////////////////////////////////////////////////////////////////////
//
// Function: getIncomeneeded()                                          
//                                                                   
// Description:
//    a value-returning function that asks for the income needed to 
//	  pay the monthly living expenses.             
//                                                       
// Returns:  
//    livingExpenses : user inputed data                 
//                                            
///////////////////////////////////////////////////////////////////////

double getIncomeNeeded() {
	double incomeNeeded = 0;
	cout << "Enter Income Needed to pay Monthly Living Expenses: ";
	cin >> incomeNeeded;
	return incomeNeeded;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getRentalIncome()                                          
//                                                                   
// Description:
//    a value-returning function that asks for the rental income received monthly.             
//                                                       
// Returns:  
//    rentalIncome : user inputed data                 
//                                            
///////////////////////////////////////////////////////////////////////

double getRentalIncome() {
	double rentalIncome = 0;

	cout << "Enter Monthly Rental Income: ";
	cin >> rentalIncome;
	return rentalIncome;
}

///////////////////////////////////////////////////////////////////////
//
// Function: getRentalExpenses()                                          
//                                                                   
// Description:
//     a value-returning function that asks for all the expense amounts 
//	   and returns the total expense.              
//                                                       
// Returns:  
//    totalExpenses : a total of all the user inputed data                
//                                            
///////////////////////////////////////////////////////////////////////

double getRentalExpenses() {
	double landlordInsurance = 0;
	double propertyTaxes = 0;
	double repairCost = 0;
	double managementFees = 0;
	double totalExpenses = 0;

	cout << "Enter Landlord Insurance: ";
	cin >> landlordInsurance;
	cout << "Enter Property Taxes: ";
	cin >> propertyTaxes;
	cout << "Enter Repair Cost: ";
	cin >> repairCost;
	cout << "Enter Management Fees: ";
	cin >> managementFees;

	totalExpenses = landlordInsurance + propertyTaxes + repairCost + managementFees;
	return totalExpenses;
}

///////////////////////////////////////////////////////////////////////
//
// Function: calculateCashFlow()                                          
//                                                                   
// Description:
//    a value-returning function that calculates the cash flow (net income) to main().
//
// Parameters:  
//    double rentalIncome  : data from the rentalIncome variable in main()          
//    double totalExpenses : data from the totalExpenses variable in main()               
//                                                       
// Returns:  
//    netIncome : returns the value calculated            
//                                            
///////////////////////////////////////////////////////////////////////

double calculateCashFlow(double rentalIncome, double rentalExpenses) {
	double netIncome = 0;

	netIncome = rentalIncome - rentalExpenses;

	return netIncome;
}

///////////////////////////////////////////////////////////////////////
//
// Function: canPayLivingExpenses()                                          
//                                                                   
// Description:
//    a value-returning function that returns true or false 
//
// Parameters:  
//    double netIncome  : data from the netIncome variable in main()                        
//                                                       
// Returns:  
//    true : returns true if netIncome is greater than 0
//	  false : returns false if netIncome is less then or equal to 0
//                                            
///////////////////////////////////////////////////////////////////////

bool canPayLivingExpenses(double netIncome, double incomeNeeded) {
	if (netIncome >= incomeNeeded) {
		return true;
	}else {
		return false;
	}
}

int main() {

	cout.precision(2);//sets output precision ex: 20.00

	double incomeNeeded = 0;
	double rentalIncome = 0;
	double rentalExpenses = 0;
	double netIncome = 0;

	incomeNeeded = getIncomeNeeded(); 
	rentalIncome = getRentalIncome();
	rentalExpenses = getRentalExpenses();
	netIncome = calculateCashFlow(rentalIncome, rentalExpenses);
	
	//checks to see if netIncome is positive or negative
	if (canPayLivingExpenses(netIncome, incomeNeeded)) {
		cout << "You can pay your monthly living expenses.\n";
	}else {
		cout << "You cannot pay your monthly living expenses.\n";
	}

	cout << "Your Net Income is $" << fixed << netIncome << endl;
	
	system("pause");
	return 0;
}