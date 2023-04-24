// Copyright (c) 2022 Nina Mathew All rights reserved
//
// Created by: Nina Mathew
// Created on: Mar 29, 2023
// This program guesses a number

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    // this function allows the user to guess a number
    // and the program decides if the user is correct


    unsigned int seed = time(NULL);
    int randomNumber = rand_r(&seed) % 10;
    int NumberGuessed;


    // input

    int total_Guesses = 0;


    // process & output
    for (total_Guesses = 0; total_Guesses < 5; total_Guesses++) {
        printf(" Guess a number between 0 and 10 : \n");
        scanf("%d", &NumberGuessed);
        if (NumberGuessed == randomNumber) {
            printf("Correct 😊 ");
        }
        else if (NumberGuessed > randomNumber) 
        {
            printf("Too high, try again: \n");
            total_Guesses++;
        }
        else if (NumberGuessed < 0 || NumberGuessed > 10) 
        {
            printf("Invalid input, try again: ");
            total_Guesses++;
        }
        else if (NumberGuessed < randomNumber) 
        {
            printf("Too low, try again: ");
            total_Guesses++;
            break;
        }

        } while (NumberGuessed != randomNumber);
            printf("Incorrect 🙃. The number was %d", randomNumber);

        printf("\nDone.\n");
        return 0;
}