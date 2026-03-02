/*
        Name: Nancy Lian
        Course: CSCI 271
        Lesson: Lesson 4 - Iteration & Loop Patterns
        Program: Counting By Multiples Using Do-While Loops
        Description: This program prints every mulitples of a given number and stops at the first even or odd number (until the end of the number that the user chooses)
*/



#include <iostream>
using namespace std;

int main(){

    // gets input and checks for validation
    int num;
    cout << "Enter a positive maximum number: ";
    cin >> num;
    while (num <= 0) {
        cout << "Number cannot be zero or negative. Pick another: ";
        cin >> num;
    }

    int mulitple;
    cout << "Enter the positive number you want to count in multiples of: ";
    cin >> mulitple;
    while (mulitple <= 0) {
        cout << "Number cannot be zero or negative. Pick another: ";
        cin >> mulitple;
    }

    int even_odd;
    cout << "Do you want the program to stop at the first odd (1) or even (2) number? ";
    cin >> even_odd;
    while (even_odd != 1 && even_odd != 2) {
        cout << "Invalid. Enter 1 or 2: ";
        cin >> even_odd;
    }
    

    int x = 0;   // current number

    do {

        // skips 0, so it doesnt print
        if (x == 0) {
            x++;
            continue;
        }
        

        //if current number is not a mulitple of the user's input, skip the number and goes on to the next number
        if (x % mulitple != 0) {
            x++;
            continue;
        }
        

        cout << x << " ";


        // stops at the first odd number   /   stops at the first even number
        if ((even_odd == 1 && x % 2 != 0) || (even_odd == 2 && x % 2 == 0)) {
            break;
        }

        x++;

    } while (x <= num);


    return 0;
}


/*
Reflection:

1. What I understood from this program:
   The do-while prints the first number no matter what (even if it is greater than the maximum number that the user entered), but for this program, the initial value for x, 0, is intentionally coded to be skipped.
   "break" stops the loop completely while "continue" skips the current iteration but does not stop everything.


2. Difficulties I faced:
   Before I included line 48, the program wouldn't continue after the user inputs all the information. I realized that without "x++", x doesn't get changed so there will be an infinite loop where the program will keep checking if x is 0. 
   

3. What I needed to search or review:
   I had to review the difference between repetition (word for repeating over and over again) and iteration (one cycle of a loop).
   

4. AI Usage:
   I did not use AI.
   

5. What I learned:
   I learned that the break and continue statements can be used with any loops, and not just the for-loop example in slide 28. 
   I also learned that you can also use a for-loop instead of do-while for this program by using the incrementing by a number other than 1 method (slide 23).
*/


