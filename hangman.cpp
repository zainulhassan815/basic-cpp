/*
Hangman in C++ : Create a program that chooses a random word and asks the user to guess letters one at a time. The user can only make a certain number of incorrect guesses before losing the game.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Maximum number of incorrect guesses allowed
const int MAX_TRIES = 5;

int main()
{
    // Array of words to choose from
    string words[] = {"apple", "banana", "cherry", "orange", "pineapple", "strawberry"};

    // Randomly choose a word from the array
    srand(time(NULL));
    int index = rand() % 6;
    string word = words[index];

    // Hide the word with asterisks
    string hidden_word(word.length(), '*');

    // Keep track of guessed letters and number of incorrect tries
    string guessed_letters = "";
    int num_tries = 0;

    // Main game loop
    while (num_tries < MAX_TRIES)
    {
        // Print the hidden word and prompt the user to guess a letter
        cout << "Word: " << hidden_word << endl;
        cout << "Guess a letter: ";
        char letter;
        cin >> letter;

        // Check if the letter has already been guessed
        if (guessed_letters.find(letter) != string::npos)
        {
            cout << "You already guessed that letter. Try again." << endl;
            continue;
        }

        // Add the guessed letter to the list of guessed letters
        guessed_letters += letter;

        // Check if the letter is in the word
        bool found_letter = false;
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == letter)
            {
                hidden_word[i] = letter;
                found_letter = true;
            }
        }

        // Check if the letter was not found in the word
        if (!found_letter)
        {
            num_tries++;
            cout << "Incorrect guess. You have " << MAX_TRIES - num_tries << " tries left." << endl;
        }

        // Check if the word has been fully guessed
        if (hidden_word == word)
        {
            cout << "Congratulations! You guessed the word \"" << word << "\"." << endl;
            return 0;
        }
    }

    // Ran out of tries
    cout << "Sorry, you ran out of tries. The word was \"" << word << "\"." << endl;
    return 0;
}
