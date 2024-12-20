/*
  Roll No.:09
  UIN.: 241P077
  Student Name:Jaiswar Priyanshu Durgvijay
  Program Title: Unit Converter Calculator 

  Task Given By:
    - Roll No. of Assignee:12
    - Assignee Name:Piyush chande 
*/

#include <stdio.h>

int main() {
    int option;
        printf("\t\t\t**Unit Converter Calculator**\n\n\n");
    do {
        // Taking User Input
        printf("\n**Unit Converter Menu:**\n");
        printf("1. Distance\n");
        printf("2. Weight\n");
        printf("3. Temperature\n");
        printf("4. Exit\n");
        printf("Enter your choice\t: ");
        scanf("%d", &option);

        if (option == 1) { 
            // Distance Conversion
            float value;
            int choice;
            printf("\n**Distance Converter:**\n");
            printf("1. Kilometers to Miles\n");
            printf("2. Miles to Kilometers\n");
            printf("Enter your choice\t: ");
            scanf("%d", &choice);
            printf("Enter the distance\t: ");
            scanf("%f", &value);

            if (value < 0) {
                // Checking for negative distance
                printf("Distance cannot be negative. Please enter a valid value.\n\n");
            } else if (choice == 1) {
                printf("%.2f Kilometers is equal to %.2f Miles\n\n", value, value * 0.621371);
            } else if (choice == 2) {
                printf("%.2f Miles is equal to %.2f Kilometers\n\n", value, value / 0.621371);
            } else {
                printf("Invalid choice.Please try again.\n");
            }
        } else if (option == 2) { 
            // Weight Conversion
            float value;
            int choice;
            printf("\n**Weight Converter:**\n");
            printf("1. Kilograms to Pounds\n");
            printf("2. Pounds to Kilograms\n");
            printf("Enter your choice\t: ");
            scanf("%d", &choice);
            printf("Enter the weight\t: ");
            scanf("%f", &value);

            if (value < 0) { 
                // Checking for negative weight
                printf("Weight cannot be negative. Please enter a valid value.\n\n");
            } else if (choice == 1) {
                printf("%.2f Kilograms is equal to %.2f Pounds\n\n", value, value * 2.20462);
            } else if (choice == 2) {
                printf("%.2f Pounds is equal to %.2f Kilograms\n\n", value, value / 2.20462);
            } else {
                printf("Invalid choice.Please try again.\n");
            }
        } else if (option == 3) { 
            // Temperature Conversion
            float value;
            int choice;
            printf("\n**Temperature Converter:**\n");
            printf("1. Celsius to Fahrenheit\n");
            printf("2. Fahrenheit to Celsius\n");
            printf("Enter your choice\t: ");
            scanf("%d", &choice);
            printf("Enter the temperature\t: ");
            scanf("%f", &value);

            if (choice == 1) {
                printf("%.2f Celsius is equal to %.2f Fahrenheit\n\n", value, (value * 9 / 5) + 32);
            } else if (choice == 2) {
                printf("%.2f Fahrenheit is equal to %.2f Celsius\n\n", value, (value - 32) * 5 / 9);
            } else {
                printf("Invalid choice.Please try again.\n");
            }
        } else if (option == 4) {
            // Exiting the program 
            printf("Thank you for using Unit Converter Calculator.\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    } while (option != 4);

    return 0;
}

/* OUTPUT 

            **Unit Converter Calculator**
            

**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 1

**Distance Converter:**
1. Kilometers to Miles
2. Miles to Kilometers
Enter your choice       : 1
Enter the distance      : 30
30.00 Kilometers is equal to 18.64 Miles


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 1

**Distance Converter:**
1. Kilometers to Miles
2. Miles to Kilometers
Enter your choice       : 2
Enter the distance      : 18.6433
18.64 Miles is equal to 30.00 Kilometers


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 1

**Distance Converter:**
1. Kilometers to Miles
2. Miles to Kilometers
Enter your choice       : 1
Enter the distance      : -20
Distance cannot be negative. Please enter a valid value.

**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 1

**Distance Converter:**
1. Kilometers to Miles
2. Miles to Kilometers
Enter your choice       : 5
Enter the distance      : 30
Invalid choice.Please try again.


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 2

**Weight Converter:**
1. Kilograms to Pounds
2. Pounds to Kilograms
Enter your choice       : 1
Enter the weight        : 50
50.00 Kilograms is equal to 110.23 Pounds


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 2

**Weight Converter:**
1. Kilograms to Pounds
2. Pounds to Kilograms
Enter your choice       : 2
Enter the weight        : 110.2355
110.24 Pounds is equal to 50.00 Kilograms


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 2

**Weight Converter:**
1. Kilograms to Pounds
2. Pounds to Kilograms
Enter your choice       : 2
Enter the weight        : -20
Weight cannot be negative. Please enter a valid value.


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 2

**Weight Converter:**
1. Kilograms to Pounds
2. Pounds to Kilograms
Enter your choice       : 6
Enter the weight        : 40
Invalid choice.Please try again.


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 3

**Temperature Converter:**
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
Enter your choice       : 1
Enter the temperature   : 25
25.00 Celsius is equal to 77.00 Fahrenheit


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 3

**Temperature Converter:**
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
Enter your choice       : 2
Enter the temperature   : -23.82
-23.82 Fahrenheit is equal to -31.01 Celsius


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 3

**Temperature Converter:**
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
Enter your choice       : 1
Enter the temperature   : 0
0.00 Celsius is equal to 32.00 Fahrenheit


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 3

**Temperature Converter:**
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
Enter your choice       : 7
Enter the temperature   : 200
Invalid choice.Please try again.


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 9
Invalid choice. Please try again.


**Unit Converter Menu:**
1. Distance
2. Weight
3. Temperature
4. Exit
Enter your choice       : 4
Thank you for using Unit Converter Calculator.
 
*/
