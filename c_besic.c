========================================================================================================
Control Flow
========================================================================================================
________________________________________________________________________________________________________
if / else-if / else
________________________________________________________________________________________________________
#include <stdio.h>

int main() {
    int temperature = 28;

    if (temperature > 35) {
        printf("Weather is hot.\n");
    } 
    else if (temperature >= 20) {
        printf("Weather is warm.\n"); // This evaluates to true; executes and exits ladder
    } 
    else if (temperature >= 10) {
        printf("Weather is cool.\n"); // Skipped entirely
    } 
    else {
        printf("Weather is cold.\n"); // Skipped entirely
    }

    return 0;
}
________________________________________________________________________________________________________
Nested if-else
________________________________________________________________________________________________________
#include <stdio.h>

int main() {
    int age = 22;
    int weight = 45;

    // Outer Primary Condition
    if (age >= 18) {
        printf("Primary Check Passed: You are an adult.\n");

        // Inner Nested Condition
        if (weight >= 50) {
            printf("Success: You are eligible to donate blood.\n");
        } 
        else {
            printf("Rejected: You meet the age limit, but your weight is too low.\n");
        }
    } 
    else {
        printf("Rejected: You must be at least 18 years old.\n");
    }

    return 0;
}
________________________________________________________________________________________________________
switch statement
________________________________________________________________________________________________________
#include <stdio.h>

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent performance!\n");
            break; // Exits the switch block immediately
            
        case 'B':
            printf("Good job!\n");
            break; // Matches here, executes, and exits
            
        case 'C':
            printf("You passed.\n");
            break;
            
        default:
            printf("Invalid grade entered.\n");
            // No break needed for the final default case
    }

    return 0;
}
________________________________________________________________________________________________________
for loop
________________________________________________________________________________________________________
#include <stdio.h>

int main() {
    // Structure: for (initialization; condition; increment/decrement)
    for (int i = 1; i <= 5; i++) {
        printf("Iteration Number: %d\n", i);
    }
    
    printf("Loop complete!\n");
    return 0;
}

________________________________________________________________________________________________________
while loop
________________________________________________________________________________________________________
#include <stdio.h>

int main() {
    int i = 1; // 1. Initialization

    // 2. Check Condition
    while (i <= 5) {
        printf("Count: %d\n", i); // 3. Loop Body

        i++; // 4. Update Variable (Crucial to prevent infinite loop)
    }

    printf("Loop complete!\n");
    return 0;
}

________________________________________________________________________________________________________
do-while loop
________________________________________________________________________________________________________
#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &num); // 2. Loop Body (Runs at least once)
        
        printf("You entered: %d\n", num);
        
    } while (num != 0); // 4. Check Condition (Note the trailing semicolon)

    printf("Loop complete!\n");
    return 0;
}
________________________________________________________________________________________________________
Break
________________________________________________________________________________________________________
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break; // Exits the loop entirely when i equals 3
        }
        printf("%d ", i);
    }
    // Output: 1 2
    return 0;
}
________________________________________________________________________________________________________
continue
________________________________________________________________________________________________________
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skips printing 3 and jumps straight to i++
        }
        printf("%d ", i);
    }
    // Output: 1 2 4 5
    return 0;
}
________________________________________________________________________________________________________
goto statement
________________________________________________________________________________________________________
#include <stdio.h>

int main() {
    // [A] Start Function
    int skip = 1; 

    // [B] Execute Statement 1
    printf("Step B: Initializing program.\n"); 

    // [C] Check Condition for Jump
    if (skip == 1) {
        // [D] Execute goto
        goto MY_LABEL; 
    }

    // [E] Execute Statement 2 (This gets completely bypassed)
    printf("Step E: This line will NOT print because of the jump.\n");

    // [F] Named Label marker
    MY_LABEL: 
    printf("Step F: Jump successful! Arrived at MY_LABEL.\n");

    // [G] End Function
    printf("Step G: Program finished.\n");
    return 0;
}
========================================================================================================
3.Function
========================================================================================================
________________________________________________________________________________________________________
Function declaration & definition
________________________________________________________________________________________________________
#include <stdio.h>

// Function Declaration (Prototype)
int multiply(int a, int b);

int main() {
    int result = multiply(4, 5); // Function Call
    printf("Result: %d\n", result);
    return 0;
}

// FUNCTION DEFINITION
// Memory is allocated for 'a' and 'b' when this executes
int multiply(int a, int b) {
    int product = a * b; // Logic execution
    return product;      // Sends value back to main()
}
________________________________________________________________________________________________________
________________________________________________________________________________________________________
________________________________________________________________________________________________________
