#pragma once
#include<iostream>
#include<string>
using namespace std;
namespace inputOpLib{
	
	string ReadName()
{
    string Name;  // Declare a string variable to store the user's name.

    // Prompt the user to enter their name.
    cout << "Please enter your name? " << endl;

    // Use getline to read the full name, including spaces.
    getline(cin, Name);

    return Name;  // Return the entered name.
}

int ReadNumber()
{
    int Num;  // Variable to store the user's input.

    // Prompt the user to enter a number.
    cout << "Please enter a number? " << endl;

    cin >> Num;  // Read the number entered by the user.

    return Num;  // Return the entered number.
}

struct stInfo 
{
    int Age;                  // Stores the candidate's age.
    bool HasDrivingLicense;   // Stores whether the candidate has a driving license (true/false).
    bool HasRecommendation;   // Stores whether the candidate has a recommendation (true/false).
};

// Function: ReadInfo
// Purpose: Prompts the user to enter their age, driving license status, and recommendation status.
// Returns: A struct containing the entered candidate information.
stInfo ReadInfo()
{
    stInfo Info;  // Declare a variable of type stInfo to store user input.

    // Prompt the user to enter their age and store it in the struct.
    cout << "Please Enter Your Age?" << endl;
    cin >> Info.Age;

    // Prompt the user to enter whether they have a driver's license (expects 1 for true, 0 for false).
    cout << "Do you have a driver’s license? (1 for Yes, 0 for No)" << endl;
    cin >> Info.HasDrivingLicense;

    // Prompt the user to enter whether they have a recommendation (expects 1 for true, 0 for false).
    cout << "Do you have a recommendation? (1 for Yes, 0 for No)" << endl;
    cin >> Info.HasRecommendation;

    return Info;  // Return the filled struct.
}

void ReadNumbersArray(string masage,int num[100])

{
	char yN='y';

   for(int c=1;1==1;c++){
   	 if(yN=='y'){
			cout << masage<< " "<<c<<"\n";
			cin >> num[c-1];
			cout<<"you want contnuo ? y / n"<<endl;
			cin >> yN;
		}else{
			break;
		}
   }
}

	

int ReadAge()
{
    int Age;  // Variable to store the user's input.

    // Prompt the user to enter their age.
    cout << "Please enter your Age ? " << endl;
    cin >> Age;

    return Age;  // Return the entered age.
}

int ReadIntPositiveNumber(string Message)
{
    int Number;  // Variable to store the user's input.

    // Keep prompting the user until a positive number (>= 0) is entered.
    do
    {
        cout << Message << endl;  // Display the provided message.
        cin >> Number;  // Read the number entered by the user.

    } while (Number < 0);  // Repeat if the number is negative.

    return Number;  // Return the validated positive number.
}

float ReadFloatPositiveNumber(string Message)
{
    float Number = 0;  // Variable to store the user's input.

    // Keep prompting the user until a positive number (> 0) is entered.
    do
    {
        cout << Message << endl;  // Display the provided message.
        cin >> Number;  // Read the number entered by the user.
    } while (Number <= 0);  // Repeat if the number is non-positive.

    return Number;  // Return the validated positive number.
}

int ReadIntNumberInRange(string Message, int From, int To)
{
    int Number = 0;  // Variable to store the user's input.

    // Keep prompting the user until a valid number within the specified range is entered.
    do
    {
        cout << Message << endl;  // Display the provided message.
        cin >> Number;  // Read the number entered by the user.
    } while (Number < From || Number > To);  // Repeat if the input is out of range.

    return Number;  // Return the validated number.
}

	
}