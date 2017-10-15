#include <iostream>
#include <string>
#include "recursion.hpp"

using namespace std;

void menu();

int main() {
    
    menu();
    
    
    return 0;
}

void menu() {
    
    int choice;
    
    // prompt user to choose a function to run
    cout << ":: What would you like to do? ::" << endl << endl;
    
    while (true) {
        cout << "1) Print a word in reverse" << endl ;
        cout << "2) Get the sum of a series of numbers" << endl;
        cout << "3) Get the triangular number of a triangle" << endl;
        cout << "4) Exit the program" << endl;
        
        cin >> choice;
        
        if (choice == 4) {
            break;
        }
        else if (choice == 1) {
            string word;
            
            cout << "Enter a word to reverse." << endl;
            
            cin.ignore(256, '\n');
            getline(cin, word);
            
            cout << word << " reversed is: ";
            reverse(word);
        }
        else if (choice == 2) {
            int size;
            
            cout << "How many numbers are there in the series?" << endl;
            cin >> size;
            
            // input validation to catch special characters and negative numbers
            while (cin.fail() || size <= 0) {
                cin.clear();
                cin.ignore(256, '\n');
                
                cout << "Input must be an integer greater than 0. How many numbers are there in the series?" << endl;
                cin >> size;
            }
            
            // dynamically create an array of ints
            int *listNumbers= new int[size];
            
            cout << "Enter the integers to sum below:" << endl;
            
            // fill array with ints using user input
            for (int i = 0; i < size; i++) {
                cin >> listNumbers[i];
                
                // input validation to catch non-integer input
                while (cin.fail()) {
                    cin.clear();
                    cin.ignore(256, '\n');
                    
                    cout << "Invalid input. Must be an integer. Please enter number again." << endl;
                    cin >> listNumbers[i];
                }
                
            }
            
            cout << "The sum of all the numbers in the series is " << sumOfArray(listNumbers, size) << endl;
            
            // free memory used by array of ints
            delete [] listNumbers;
        }
        else if (choice == 3) {
            int rows;
            
            cout << "Enter number of rows in the triangle:" << endl;
            cin >> rows;
           
            while (cin.fail() || rows < 0) {
                cin.clear();
                cin.ignore(256, '\n');
                
                cout << "Invalid input. Please enter a whole number." << endl;
                cin >> rows;
            }
            
            cout << "The triangular number for a triangle with " << rows << " rows is " << triangularNumber(rows) << endl;
        }
        else {			// input validation
            cout << "'" << choice << "'" << " is not an option. Please enter a number from the menu." << endl;
            
            cin.clear();
            cin.ignore(256, '\n');
        }
    } 
}   

/*
int triangularNumber(int n) {
    
    if (n == 0) {
        return 0;
    }
    
    if (n > 0) {
        return triangularNumber(n - 1) + n; 
    }
}

void reverse(string word) {
    
    cout << word[word.length() - 1];
    
    if (word.length() - 1 == 0) {
        cout << endl;
    }
    
    if (word.length() - 1 > 0) {
        word.erase(word.length() - 1);
        reverse(word);
    }
}

int sumOfArray(int* array, int size) {
    
    if (size == 0) {
        return 0;
    }
    
    if (size > 0) {
        return sumOfArray(array, size - 1) + array[size - 1];
    }
}
*/
    
    


