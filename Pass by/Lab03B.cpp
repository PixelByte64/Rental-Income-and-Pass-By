///////////////////////////////////////////////////////////////////////
//                                                                     
// Filename: Lab03B.cpp
// Date: October 10, 2019
// Programmer: Samir Williams             
//
// Description:
//    Prompts user to choose from the two alternative funtions 
//    specified below, each of which passes a random number 
//    between 1 and 4 and returns a random message.
//                                                                  
///////////////////////////////////////////////////////////////////////

#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

///////////////////////////////////////////////////////////////////////
//
// Function: messageByValue()                                          
//                                                                   
// Description:
//    passes a random value between 1 and 4 and returns the message by value
//
// Parameters:  
//    int randomInt  : Integer to check                                      
//                                            
///////////////////////////////////////////////////////////////////////

void messageByValue(int randomInt) {
	if (randomInt == 1) {
		cout << "Sorry. You're busted!\n";
	}
	else if (randomInt == 2) {
		cout << "Oh, you're going for broke, huh?\n";
	}
	else if (randomInt == 3) {
		cout << "Aw cmon, take a chance!\n";
	}
	else if (randomInt == 4) {
		cout << "You're up big. Now's the time to cash in your chips\n";
	}
	else {
		cout << "How did you get here?\n";
	}
}

///////////////////////////////////////////////////////////////////////
//
// Function: messageByReference()                                          
//                                                                   
// Description:
//    passes a random value between 1 and 4 and returns the message by reference
//
// Parameters:  
//    int& randomInt  : Interger to check                        
//                                                                                                           
///////////////////////////////////////////////////////////////////////

void messageByReference(int& randomInt) {
	if (randomInt == 1) {
		cout << "Sorry. You're busted!\n";
	}
	else if (randomInt == 2) {
		cout << "Oh, you're going for broke, huh?\n";
	}
	else if (randomInt == 3) {
		cout << "Aw cmon, take a chance!\n";
	}
	else if (randomInt == 4) {
		cout << "You're up big. Now's the time to cash in your chips\n";
	}
	else {
		cout << "How did you get here?\n";
	}
}

int main() {
	int inputControl = 0;
	int randomInt = 0;
	
	srand(time(0)); //randomizes rand();

	cout << "Enter [1] to pass by value:\n";
	cout << "Enter [2] to pass by reference:\n";
	cout << "Enter [-1] to exit the program:\n";
	cin >> inputControl;

	//loops until the user enters -1
	while (inputControl != -1) {
		randomInt = rand() % 4 + 1; //creates a random int between and including 1 and 4
		if (inputControl == 1) {
			messageByValue(randomInt);
		}
		else if (inputControl == 2) {
			messageByReference(randomInt);
		}
		else {
			cout << "Please enter [1], [2], or [-1]\n";
		}
		cout << "Enter [1] to pass by value:\n";
		cout << "Enter [2] to pass by reference:\n";
		cout << "Enter [-1] to exit the program:\n";
		cin >> inputControl;
	}

	system("pause");
	return 0;
}
