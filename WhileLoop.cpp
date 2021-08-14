// WhileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//NOTEPAD

/*
    while (expression)
        statement; 

    while (expression) {
        statement (s);
    }

*/

/*
    EXAMPLES
    int i {1};

    while (i <= 5) {
        cout << i << endl; 
        ++i;
    }

    int i {1};

    while (i <= 10) {
        if (i % 2 == 0){
            cout << i << endl; 
        ++i;
        }
    }


    EXAMPLE WITH AN ARRAY

    int scores [] {100, 90, 87}; 

    int i {0};

    while (i < 3) {
        cout << scores[i] << endl;
        ++i;
    }

    //INPUT VALIDATION

    int number {};

    cout << "Enter an integer less than 100 : " << endl;
    cin >> number; 

    while (number >= 100) {
        cout << "Enter an integer less than 100 : " << endl;
        cin >> number; 
    }

    cout << "Thanks" << endl; 

    //BOOLEAN FLAG

    bool done {false}; 

    int number {0};

    while (!done) {
        cout << "Enter an integer between 1 and 5, don't include either : " << endl;
        cin >> number; 

    if (number <= 1 || number >= 5){
        cout << "Out of range, try again" << endl;   
       
       }else {
        cout << "Thanks" << endl;
        done = true;
       }
    } 

*/

int main()
{
    
    /*int num{};
    cout << "Enter a positive integer - start the countdown : " << endl; 
    cin >> num;

    while (num > 0) {
        cout << num << endl; 
        --num;
    }

    cout << "Happy Birthday!!!" << endl;*/

    //int num{};
    //cout << "Enter a positive integer to count up to : "; //we would use the increment operator (++)
    //cin >> num; 

    //int i{ 1 };

    //while (num >= i) {
    //    cout << i << endl;
    //    ++i;
    //}


    //INPUT VALIDATION EXAMPLE OF LIVE CODE 

    int number{};

    cout << "Enter an integer less than 100: ";
    cin >> number; 

    while (number >= 100) { //another convention can be !(number < 100);
        cout << "Enter an integer less than 100: ";
        cin >> number; 
    }

    cout << "Thanks!" << endl;


    //BOOLEAN FLAG FOR INPUT VALIDATION

    bool complete{ false };
    int number1{ 0 };

    while (!complete) {
        cout << "Enter an integer between 1 and 5: ";
        cin >> number1; 

        if (number1 <= 1 || number1 >= 5) {
            cout << "Number chosen is out of range, try again" << endl;
        }
        else {
            cout << "Thanks!" << endl;
            complete = true;
        }
    }










}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
