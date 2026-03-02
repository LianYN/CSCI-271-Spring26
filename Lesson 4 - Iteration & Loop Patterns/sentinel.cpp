/*
        Name: Nancy Lian
        Course: CSCI 271
        Lesson: Lesson 4 - Iteration & Loop Patterns
        Program: Sentinel-Controlled Class Average
        Description: Calculates the average grade given an indefinite number of grades to input.
*/


#include <iostream>
using namespace std;

int main() {
    int total = 0, counter = 0, grade;

    cout << "Enter grade or -1 to quit: ";
    cin >> grade;


    while (grade != -1) {
        total += grade;
        counter++;

        cout << "Enter next grade or -1 to quit: ";
        cin >> grade;
    }

    if (counter != 0) {
        double average = static_cast<double>(total) / counter;
        cout << "Class average is " << average;
    } else {
        cout << "No grades were entered.";
    }


    return 0;
}



/*
Reflection:

1. What I understood from this program:
   This program asks the user to enter a grade and uses "-1" to control when the loop ends. 
   As long as the user does not enter the sentinel value -1, the while loop block will keep executing.


2. Difficulties I faced:
   I accidently excluded lines 16 and 17 from the code and was confused about why the code wouldn't work. 
   

3. What I needed to search or review:
   I needed to review slide 14 to understand why the conditional statement for line 28 uses the variable "counter" again.


4. AI Usage:
   I did not use AI.


5. What I learned:
   From the mistake for lines 16 and 17, I learned that sentinel-controlled iteration depends a lot on user input to move forward or stop.
   I learned that you can declare multiple variables in one statement as long as they are all the same type. There will be an error if you try to put multiple types data on one statement; for example: "int total = 0, counter = 0, double grade;".

*/