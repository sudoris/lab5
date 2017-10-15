#include "recursion.hpp"

// returns int representing triangular nubmer of triangle with n rows
int triangularNumber(int n) {
    
    if (n == 0) {
        return 0;
    }
    
    if (n > 0) {
        return triangularNumber(n - 1) + n; 
    }
}

// prints out the reverse of string passed to the function
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

// returns the sum of an int of arrays
int sumOfArray(int* array, int size) {
    
    if (size == 0) {
        return 0;
    }
    
    if (size > 0) {
        return sumOfArray(array, size - 1) + array[size - 1];
    }
}