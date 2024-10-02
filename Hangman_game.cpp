#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// Function to check if a character is present in the secret word
bool contains(char guess, const string& secretWord) {
    return secretWord.find(guess) != string::npos;
}

// Function to display the current state of the word
void displayWord(const string& secretWord, const vector<char>& guessedLetters) {
    for (char letter : secretWord) {
        if (find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end()) {
            cout << letter << " ";
        } else {
            cout << "_ ";
        }
    }
    cout << endl;
}

int main() {
    vector<string> words = {"hangman", "computer", "programming", "cplusplus", "openai", "challenge"};
    srand(time(0));
    string secretWord = words[rand() % words.size()]; // Randomly select a word from the vector
    int tries = 7;
    vector<char> guessedLetters;

    cout << "Welcome to Hangman!" << endl;

    while (tries > 0) {
        cout << "Tries left: " << tries << endl;
        displayWord(secretWord, guessedLetters);

        if (guessedLetters.size() > 0) {
            cout << "Guessed letters: ";
            for (char letter : guessedLetters) {
                cout << letter << " ";
            }
            cout << endl;
        }

        cout << "Guess a letter: ";
        char guess;
        cin >> guess;

        if (contains(guess, secretWord)) {
            cout << "Correct guess!" << endl;
        } else {
            cout << "Incorrect guess!" << endl;
            tries--;
        }

        guessedLetters.push_back(guess);

        bool foundAll = true;
        for (char letter : secretWord) {
            if (find(guessedLetters.begin(), guessedLetters.end(), letter) == guessedLetters.end()) {
                foundAll = false;
                break;
            }
        }

        if (foundAll) {
            cout << "Congratulations! You guessed the word: " << secretWord << endl;
            break;
        }
    }

    if (tries == 0) {
        cout << "You ran out of tries! The word was: " << secretWord << endl;
    }

    cout << "Thanks for playing Hangman!" << endl;

    return 0;
}
