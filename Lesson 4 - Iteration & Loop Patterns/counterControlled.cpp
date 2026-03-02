/*
        Name: Nancy Lian
        Course: CSCI 271
        Lesson: Lesson 4 - Iteration & Loop Patterns
        Program: Counter-Controlled Class Average
        Description: Calculates the average grade given ten grade to input.
*/



#include <iostream>
using namespace std;

int main(){
    int total = 0;
    int counter = 1;

    while (counter <= 10) {
        int grade;
        cout << "Enter grade " << counter << ": ";
        cin >> grade;
        total += grade;
        counter ++;
    }

    double average = static_cast<double>(total) / 10;
    cout << "Class average: " << average;


    return 0;
}



/*
Reflection:

1. What I understood from this program:

   The while loop repeats actions in the block for as long as the condition is True, and ends when the condition is False. 
   In this case, as long as the counter is less than or equal to 10, the program will keep asking the user to input a grade, add the grade to accumlate the total grade before moving to the next grade.
   The 10 (for 10 grades) is hard coded into the program. Static_cast makes sure that total, an int, becomes a decimal.


2. Difficulties I faced:
   Sometimes, I keep forgetting that dividing two integers truncates the result even if the math results in a decimal. 
   For me, it doesn't feel natural than when dividing two integers that you know will not lead to a decimal.


3. What I needed to search or review:
   I needed to review how dividing by integers work in coding.


4. AI Usage:
   I did not use AI.


5. What I learned:
   You use counter-controlled iteration when you know when the iteration is going to end.
   "counter++"" increments by 1 and is the same as doing "counter = counter + 1". 
   In this program, the variable "grade" is a local scope that exists only in the while block. If "grade" was declared outside the block, it doesn't change the output, and you can still use the grade variable outside the block, but it would store the last grade input.

*/