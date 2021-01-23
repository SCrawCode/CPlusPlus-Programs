// Comments

#include <stdio.h>  
#include <cstdlib>  // C Standard Library
#include <iostream> // Allows reading and writing data
#include <string>   // String Work
#include <limits>   // Function that shows min and max values for variables
#include <vector>  // Vector Work
#include <sstream>  // Work with string streams 
#include <numeric>  // Allows work with sequences of values
#include <ctime>    // Allows work with time
#include <cmath>    // Common math functions

using namespace std; // Standard namespace wrapper


int imGlobal = 0; // Global variable (Accessable by entirty of program)
const double PI = 3.141; // Double (Decimal) variable that cannot be changed

int main(int argc, char** argv) {
// argc: Number of arguments passed in function
// argv: Array of pointers to strings 	
	
	bool binary = true;      // True/False variables
	char letter = 'C';       // Single Character variable
	short int smallNum = 10; // Low data int value
	float f1 = 1.1111111;   // Decimal value accurate to 6 digits
	float f2 = 1.1111111;	 
	printf("Sum = %.7f", (f1 + f2));   // Note: "double" increases accuracy from 6 to 15 decimal places
					     /* Print formatting function
				                \n = endl;
			                       %.nf = Lists float value w/ n decimal precision
                                             */
       // auto whatAmI = true;	//Compiler automatically determines variable (SPECIFY C++17 in COMPILATION)
	
	cout << "int Byte: " << sizeof(int) << endl;  // Displays byte size of int variable 
	
//<<<<<<<<<<<<<<<<< Printing Different Data Types >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//

	printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");                             
	/*
	%c = char
	%nd = int (n = rightward justification)
	%.nf = float (n = decimal precision)
	%s = string
	*/

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< String I/O >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
	string q1 = "Enter a Number: ";
	string num1, num2;
	cout << q1;
	cin >> num1;
	cout << "Enter Another Number: ";
	cin >> num2;
	int nNum1 = stoi(num1);		// stoi converts strings to floats
	int nNum2 = stoi(num2);
	printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));


//<<<<<<<<<<<<<<<<<<< Conditional and Logical Operators >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
	
// <<<<<<<<<<<< If/Else Statements >>>>>>>>>>>>>>> //
	string sAge;
	cout << "Enter Your Age: ";
	cin >> sAge;
	int nAge = stoi(sAge);

	if ((nAge >= 1) && (nAge <= 18)) {
		cout << "Important Birthday" << endl;
	}
	else if ((nAge == 21) || (nAge == 50)) {
		cout << "Important Birthday" << endl;
	}
	else if (nAge >= 65) {
		cout << "Important Birthday" << endl;
	}
	else {
		cout << "Not an Important Birthday" << endl;
	}


// <<<<<<<<<<< Ternary Operators >>>>>>>>>>>>>> //
	int age43 = 43;
	bool canIVote = (age43 >= 18) ? true : false;   // Operator is essentially a quick if/else statement

	cout.setf(ios::boolalpha);   // Prints trues and falses from bools instead of 1s or 0s
	cout << "Can Derek Vote: " << canIVote << endl;
	

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Arrays >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
// Collection of data of the same type

	int arrnNums[10] = {1};
	int arrnNums2 [] = {1, 2, 3};  // Size defined by number of elements
	int arrnNums3[5] = {8, 9};

	cout << "1st Value: " << arrnNums3[0] << endl;
	arrnNums3[0] = 7;              // Changes indexed value
	cout << "1st Value Now: " << arrnNums3[0] << endl;

	int arrnNums4[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};  // Multi-Dimensional array (Matrix) 
	cout << arrnNums4[0][1][1] << endl;


//<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Vectors >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
// Used when array size is unknown

	vector<int> vNums(2);
	vNums[0] = 1;
	vNums[1] = 2;
	vNums.push_back(3);   // Adds value to end of vector 
	cout << "Vector Size: " << vNums.size() << endl;
 


//<<<<<<<<<<<<<<<<<<<<<<<<<<< While Loops >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//

	int i = 1;
	while (i <= 20){
		if((i % 2) == 0) {
		i += 1;
		continue;          // Stops execution after if condition and returns to while
		}
		if (i == 15) break;  // Breaks completly out of while loop
		cout << i << endl;
		i += 1;
	}

//<<<<<<<<<<< While Loop Used w/ String Streams >>>>>>>>>>>>>>>>>>>>>>>>>>>//

	vector<string> words;
	stringstream ss("Some Random Words"); 		/*StringStream object recieves strings separated by a space  
							 which are spat out one-at-a-time where we will put them in the vector*/
 	string word;	//Holds each of the words as they are spat out
	
	while(getline(ss, word, ' ')){		//Cycle through SS, assign word variable, look for spaces
		words.push_back(word);		//Throw each word onto vector
	}

	for(int i = 0; i < words.size(); ++i){  //Increments by 1 through value of vector size
		cout << words[i] << endl;
	}
	
	int arr3[] = {1, 2, 3};
	for(auto x: arr3) cout << x << endl; 	//Abbreviated for loop using an array

	
//<<<<<<<<<<<<<<<<<<<< Do While Loops >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//
// Basically granted to excute at least once 
// Creating a numerical guessing game to illustrate idea

	srand(time(NULL)); 		//Creates a random number 
	int secretNum = rand() % 11;    //Random variable up to modulus eleven (Up to 10) 
	int guess = 0;

	do{
		cout << "Guess the Number: ";
		cin >> guess;
		if(guess > secretNum) cout << "To Big\n";
		if(guess < secretNum) cout << "To Small\n";
	}
	while(secretNum != guess);				//After Do has run once
	cout << "You Guessed it!" << endl;


return 0;
} 


