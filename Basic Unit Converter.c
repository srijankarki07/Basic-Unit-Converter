#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main() {
    char category;
    int choice;

    // Temperature variables
    int fahrenheit, celsius;

    // Currency variables
    float usd, euro, jpy, rmb;

    // Mass variables
    int ounces, grams;
    float poundsOunces, poundsGrams;

    // Length variables
    int inches;
    float feet;

    // Speed variables
    int mph;
    float kmph;

    printf("Welcome to Unit Converter! \n");
    printf("Choose a category: \n");
    printf("1. Temperature\n");
    printf("2. Currency\n");
    printf("3. Mass\n");
    printf("4. Length\n");
    printf("5. Speed\n");

    printf("Enter the number of the category you want to convert: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Temperature
            printf("Temperature Converter\n");
            printf("1. Fahrenheit to Celsius\n");
            printf("2. Celsius to Fahrenheit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Enter temperature in Fahrenheit: ");
                scanf("%d", &fahrenheit);
                celsius = (int)((fahrenheit - 32) * (5.0 / 9.0));
                printf("Temperature in Celsius: %d\n", celsius);
            } else if (choice == 2) {
                printf("Enter temperature in Celsius: ");
                scanf("%d", &celsius);
                fahrenheit = (int)((celsius * 9.0 / 5.0) + 32);
                printf("Temperature in Fahrenheit: %d\n", fahrenheit);
            } else {
                printf("Invalid choice\n");
            }
            break;

        case 2: // Currency
            printf("Currency Converter\n");
            printf("1. USD to Euro\n");
            printf("2. USD to JPY\n");
            printf("3. USD to NRP\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice >= 1 && choice <= 3) {
                printf("Enter amount in USD: ");
                scanf("%f", &usd);

                switch (choice) {
                    case 1:
                        euro = usd * 0.87;
                        printf("Amount in Euro: %.2f\n", euro);
                        break;
                    case 2:
                        jpy = usd * 111.09;
                        printf("Amount in JPY: %.2f\n", jpy);
                        break;
                    case 3:
                        rmb = usd * 100;
                        printf("Amount in NRP: %.2f\n", rmb);
                        break;
                }
            } else {
                printf("Invalid choice\n");
            }
            break;

        case 3: // Mass
            printf("Mass Converter\n");
            printf("1. Ounces to Pounds\n");
            printf("2. Grams to Pounds\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Enter weight in ounces: ");
                scanf("%d", &ounces);
                poundsOunces = ounces * 0.0625;
                printf("Weight in Pounds: %.2f\n", poundsOunces);
            } else if (choice == 2) {
                printf("Enter weight in grams: ");
                scanf("%d", &grams);
                poundsGrams = grams * 0.00220462;
                printf("Weight in Pounds: %.2f\n", poundsGrams);
            } else {
                printf("Invalid choice\n");
            }
            break;

        case 4: // Length
            printf("Length Converter\n");
            printf("1. Inches to Feet\n");
            // Add more length conversion options as needed
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Enter length in inches: ");
                scanf("%d", &inches);
                feet = inches / 12.0;
                printf("Length in Feet: %.2f\n", feet);
            } else {
                printf("Invalid choice\n");
            }
            break;

        case 5: // Speed
            printf("Speed Converter\n");
            printf("1. Miles per hour to Kilometers per hour\n");
            // Add more speed conversion options as needed
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if (choice == 1) {
                printf("Enter speed in miles per hour: ");
                scanf("%d", &mph);
                kmph = mph * 1.60934;
                printf("Speed in Kilometers per hour: %.2f\n", kmph);
            } else {
                printf("Invalid choice\n");
            }
            break;

        default:
            printf("Invalid category choice\n");
            break;
    }

    return 0;
}
