#!/usr/bin/env python3
"""
Created by: Nina Mathew
Created on: March 21 2023
This program is the number guessing game
"""


import random


def main() -> None:
    random_number = random.randint(1, 10)
    print(random_number)
    total_guesses = 0

    try:
        for total_guesses in range(5):
            number_guessed_string = input("Guess the number between 1 and 10 : ")
            number_guessed = int(number_guessed_string)

            if int(number_guessed) < 10:
                if int(number_guessed) > 0:
                    if number_guessed < random_number:
                        print("Your guess is below the number, please guess again")

                    elif number_guessed > random_number:
                        print("Your guess is above the number, please guess again")

                    elif number_guessed == random_number:
                        total_guesses = str(total_guesses + 1)
                        print("CORRECT 😊\nPlease play agian")
                        break

                    else:
                        print("Invalid input, try again.")
                else:
                    print("Invalid input, try again.")
            else:
                print("Invalid input, try again.")

        if number_guessed != random_number:
            print("Wrong, try again")

    except ValueError:
        print("Invalid input, try again.")


if __name__ == "__main__":
    main()
