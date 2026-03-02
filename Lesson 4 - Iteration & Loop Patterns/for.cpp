/*
        Name: Nancy Lian
        Course: CSCI 271
        Lesson: Lesson 4 - Iteration & Loop Patterns
        Program: For Loop Number Counter and Countdown
        Description: Counts down to zero given a starting number or counts up to a given number from zero
*/



#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int answer;
    

    // asks user if they want to count up or down
    cout << "Do you want to count to (1) zero or count from (2) zero? ";
    cin >> answer;

    // input validation for answer --> neither 1 or 2 (slide 29):
    while (answer != 1 && answer != 2) {
        cout << "Invalid. Please enter 1 or 2: ";
        cin >> answer;
    }
    


    // asks user for a number depending on the previous answer
    cout << "Number to start from (if 1) or end to (if 2): ";
    cin >> num;

    // input validation for num (slide 29)
    while (num <= 0) {
        cout << "Invalid. Please enter a positive number greater than 0: ";
        cin >> num;
    }



    // using for-loops (slides 18 and 22)
    if (answer == 1) {                                 // counting down to zero (slide 22)
        for (int i = num; i >= 0; --i) {
            cout << i << " ";
        }
    } else {                                           // counting from zero to num (slide 18)
        for (int i = 0; i <= num; ++i) {
        cout << i << " ";
        }
    }


    return 0;
}

/*
Reflection:

1. What I understood from this program:
   Using for-loops allows you to put your initialization, condition, and increment all together, so you don't have to keep writing separate lines to start the loop, check when condition is False, and update the counter.
   You use this when you know how many times you need it to repeat, and when you known when something starts and ends. For example, in this program, the start can either be zero or the number the user picks, and vice versa.

2. Difficulties I faced:
   For line 21, I used || instead of && and was confused about why it kept repeating the invalid message.
   When I changed the || to && and then changed to back to || to test again, I was also confused about why it didn't repeat the invalid message endlessly like before.
   

3. What I needed to search or review:
   I needed to review the logical operators, as well as the format for the foor-loops. 
   I also reviewed my discrete mathematics notes about the term you use when you want "neither a nor b," which was what I needed for line 21.
   I reviewed what "unsigned" does.

4. AI Usage:
   I used ChatGPT to help answer the second part of the difficulties I faced. 
   I mentioned using Visual Studio Code and asked it why the program repeated the invalid message when I first did ||, but didn't repeat when I changed it to && and back to ||.
   AI taught me that IDEs sometimes don't completely clear the previous input and output. The integrated terminal keeps the previous session alive by default, and that if I just click the run button again, the program uses that leftover input.
   I tested what I learned by clicking the trash button (I learned that the trash button is what resets the terminal).


5. What I learned:
   From the mistake in line 21, I learned not to think about the logical operator as if I was reading it, but to think about it using the truth table.
   If I put ||, the condition statement would have been true no matter what, so the program would just repeating the invalid messgae.
*/