#!/usr/bin/env python3
"""
Created by: Nina Mathew
Created on: March 21 2023
This program is the number guessing game
"""


import random


def main() -> None:
    random_number = random.randint(1, 10)
    total_guesses = 0
    number_guessed_string = input("Guess the number between 0 and 10 : ")
    try:
        number_guessed = int(number_guessed_string)
        for total_guesses in range(5):
            number_guessed_string = input("Guess the number between 0 and 10 : ")
            if number_guessed < random_number:
                print("Your guess is below the number, please guess again")
            elif number_guessed > random_number:
                print("Your guess is above the number, please guess again")
            else:
                break

        if number_guessed == random_number:
            total_guesses = str(total_guesses + 1)
            print("CORRECT 😊")
            if number_guessed != random_number:
                random_number = str(random_number)
                print("Incorrect 😔, Please Try Again")
    except ValueError:
        print("Invalid input, try again.")


if __name__ == "__main__":
    main()
