//
//  main.cpp
//  akingston_Pr1.cpp
//  Project #1
//  /*
//* Class: CMSC140 CRN
//Instructor:
//* Project<number>
//* Description: (Give a brief description for Project)
//* Due Date:
//* //I pledge that I have completed the programming assignment independently.
 // I have not copied the code from a student or any source.
//  I have not given my code to any student.
  //Print your Name here: Aaron Kingston 
//*/

//  Project #1 Psuedo Code

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    
    //my variables &
    // constants for fixed values
    string playername;
    const double TWO = 2.0;
    int number1, number2;
    double favNUMBER;
    
    //welcome to the event top display with the stars :)
    cout << "********** Welcome to Programming Event **********" << endl;
    //players name
    cout << "Hello whats your name !?";
    getline(cin, playername);
    cout << "Nice gto meet you, " << playername << "!!" << endl;
    //program will now ask for the player favourite number for the game
    // -------------//
    cout << "Tell me " << playername << ", what is your favourtie number ?";
    cin >> favNUMBER;
    //do the math on the favourite number
    cout << "Great choice! Here are some fun facts about the number " << favNUMBER << ":" << endl;
    cout << "- Double of " << favNUMBER << " is " << favNUMBER * TWO << "." << endl;
    cout << "- Half of " << favNUMBER << " is " << favNUMBER / TWO << "." << endl;
    cout << "- " << favNUMBER << " squared is " << pow(favNUMBER, 2) << "." << endl;
    cout << "- Square root of " << favNUMBER << " is approximately " << sqrt(favNUMBER) << "." << endl;
    //system will asask the player for the numbers to divide
    cout << "\nNow " << playername << ", let's explore division." << endl;
    cout << "Give me a whole number: ";
    cin >> number1;
    cout << "Now give me another whole number: ";
    cin >> number2;
    //diplay the interger result
    cout  << "Using interger division, " << number1 << " divided by " << number2 << " is "  << number1/number2 << "." <<endl;
    cout << "Using floating-point division, " << number1 << " divided by " << number2 << " is approximately " << static_cast<double>(number1) / number2 << "." << endl;

    // End of program
    cout << "\nThank you for participating, " << playername << "!!!" << endl;
    cout << "PROGRAMMER: [Aaron Kingston]" << endl;
    cout << "CMSC140 Project 1" << endl;
    cout << "Due Date: [9/30/2024]" << endl;
    return 0;


}
