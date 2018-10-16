//Luis Ignacio Acosta Zamoar A01411895
/*
 * Write a program that allows the user to obtain the perimeter, area (surface) or volume of several shapes and bodies.
 * The program should show a menu where the user decides which type of operation to perform:
 * A. Perimeter.
 * B. Surface.
 * C. Volume.
 * X. Exit.
    * This menu should present itself to the user when the program starts and every time it finishes some calculations.
    * If the user enters a non-valid character, the program should inform them so and present the menu again.
    * The program should end when the user picks the Exit option.
    * As stated above, the user should enter alphabetic characters to select the desired option.
* For each type of operation, the program should present at least three (3) shapes (or bodies in the case of volume), in a menu and such submenus should behave in the same way as the main menu:
    * They should show their options until the user picks to exit the submenu or the figure's operation is performed.
    * If the user enters a non-valid option, the program should inform them so and present the menu again.
 */

#include <stdio.h>

double squarePerimeter(double sideA) {
    sideA *= 4;
    printf("The perimeter of your square is %lf cm.\n\n", sideA);
    return 0;
}

double trianglePerimeter(double sideA, double sideB, double sideC) {
    double answer= sideA + sideB + sideC;
    printf("The perimeter of your triangle is %lf cm.\n\n", answer);
    return 0;
}

double rectanglePerimeter(double sideA, double sideB) {
    sideA*= 2;
    sideB*= 2;
    double answer= sideA + sideB;
    printf("The perimeter of your rectangle is %lf cm.\n\n", answer);
    return 0;
}

double squareArea(double sideA){
    double answer= sideA * sideA;
    printf("The area of your square is %lf cm^2.\n\n", answer);
    return 0;
}

double triangleArea(double base, double height) {
    double answer = base * height;
    answer = answer / 2;
    printf("The area of your square is %lf cm^2.\n\n", answer);
    return 0;
}

double rectangleArea(double base, double height) {
    double answer = base * height;
    printf("The area of your square is %lf cm^2.\n\n", answer);
    return 0;
}

double cubeVolume(double sideA){
    double answer= sideA * sideA * sideA;
    printf("The volume of your cube is %lf cm^3.\n\n", answer);
    return 0;
}

double pyramidVolume(double base, double width, double height){
    double answer= 0.333333 * base * width * height;
    printf("The volume of your pyramid is %lf cm^3.\n\n", answer);
    return 0;
}

double sphereVolume(double radius){
    double answer= 1.333333 * 3.14159 * radius * radius * radius;
    printf("The volume of the sphere is %lf cm^2.\n\n", answer);
    return 0;
}

int main() {
    char option;
    char optionTwo;
    double sideA;
    double sideB;
    double sideC;
    double base;
    double width;
    double height;
    double radius;

    do {
        printf("This program will help you calculate the perimeter, surface, or volume of a specific object.\n\n");
        printf("a. Perimeter\n");
        printf("b. Surface Area\n");
        printf("c. Volume\n");
        printf("x. Exit\n");

        printf("Enter the letter of the option you want to choose: \n\n");
        scanf(" %c",&option);


        switch(option){
            case 'A':
            case 'a':
                do {
                    printf("Perimeter!\n\n");
                    printf("a. Square?\n");
                    printf("b. Triangle?\n");
                    printf("c. Rectangle?\n");
                    printf("x. Return to previous menu.\n\n");
                    printf("Enter the letter of the figure you want to obtain the perimeter: \n\n");
                    scanf(" %c", &optionTwo);

                    switch(optionTwo){
                        case 'A':
                        case 'a':
                            printf("Give me one side of the square in cm: \n");
                            scanf(" %lf", &sideA);
                            squarePerimeter(sideA);
                            break;
                        case 'B':
                        case 'b':
                            printf("Give me the 3 sides of your triangle in cm: \n");
                            scanf("%lf %lf %lf", &sideA, &sideB, &sideC);
                            trianglePerimeter(sideA, sideB, sideC);
                            break;
                        case 'C':
                        case 'c':
                            printf("Give me the base and length of the rectangle in cm: \n");
                            scanf(" %lf %lf", &sideA, &sideB);
                            rectanglePerimeter(sideA, sideB);
                            break;
                        case 'x':
                            break;
                        default:
                            printf("That's not a valid option! Lets start again.\n\n");
                            break;
                    }
                }while(optionTwo != 'x');
                break;

            case 'B':
            case 'b':
                do{
                    printf("Surface area!\n");
                    printf("a. Square?\n");
                    printf("b. Triangle?\n");
                    printf("c. Rectangle?\n");
                    printf("x. Return to previous menu.\n\n");
                    printf("Enter the letter of the figure you want to obtain the surface area: \n\n");
                    scanf(" %c",&optionTwo);

                    switch(optionTwo){
                        case 'A':
                        case 'a':
                            printf("Give me one side of the square in cm: \n");
                            scanf(" %lf", &sideA);
                            squareArea(sideA);
                            break;
                        case 'B':
                        case 'b':
                            printf("Give me the base and height of the triangle in cm: \n");
                            scanf("%lf %lf", &base, &height);
                            triangleArea(base, height);
                            break;
                        case 'C':
                        case 'c':
                            printf("Give me the base and height of the rectangle in cm: \n");
                            scanf(" %lf %lf", &base, &height);
                            rectangleArea(base, height);
                            break;
                        case 'x':
                            break;
                        default:
                            printf("That's not a valid option! Lets start again.\n\n");
                            break;
                    }
                }while(optionTwo != 'x');

                break;
            case 'C':
            case 'c':
                do{
                    printf("Volume!\n");
                    printf("a. Cube?\n");
                    printf("b. Pyramid?\n");
                    printf("c. Sphere?\n");
                    printf("x. Return to previous menu.\n\n");
                    printf("Enter the letter of the figure you want to obtain the volume: \n\n");
                    scanf(" %c",&optionTwo);

                    switch(optionTwo){
                        case 'A':
                        case 'a':
                            printf("Give me one side of the cube in cm: \n");
                            scanf(" %lf", &sideA);
                            squareArea(sideA);
                            break;
                        case 'B':
                        case 'b':
                            printf("Give me the base, width and height of the pyramid in cm: \n");
                            scanf("%lf %lf %lf", &base, &width, &height);
                            pyramidVolume(base, width, height);
                            break;
                        case 'C':
                        case 'c':
                            printf("Give me the radius of the sphere in cm: \n");
                            scanf(" %lf", &radius);
                            sphereVolume(radius);
                            break;
                        default:
                            printf("That's not a valid option! Lets start again.\n\n");
                            break;
                    }
                }while(optionTwo != 'x');

                break;
            case 'x':
                break;
            default:
                printf("That's not a valid option! Lets start again.\n\n");
                break;

        }
    }while(option != 'x');

    return 0;
}