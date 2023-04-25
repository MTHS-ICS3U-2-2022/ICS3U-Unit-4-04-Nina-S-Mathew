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
    int NumberGuessed = 0;


    // input

    int total_Guesses = 0;
    int scanfErrorCode = 0;


    // process & output
    while (1) {
    printf(" Guess a number between 0 and 10 : ");
    scanfErrorCode = scanf("%d", &NumberGuessed);

    if (scanfErrorCode == 1 && NumberGuessed >= 0 && NumberGuessed <= 10) {
        if (NumberGuessed > randomNumber) {
            printf("Too high, try again \n");
        } else if (NumberGuessed < randomNumber) {
            printf("Too low, try again \n");
        } else {
            printf("Correct 😊 \n");
            break;
        }
    } else {
        printf("Invalid input, try again \n");
            break;
        }
    }
    printf("\nDone.\n");
    return 0;
}
