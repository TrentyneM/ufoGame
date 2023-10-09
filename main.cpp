// C++ UFO Game
// Written By: Trentyne Morgan

#include <iostream>				// Standard C++ Input/Ouput Library
#include "ufo_functions.hpp"	// UFO Game Functions Header File (look in ufo_function.hpp)

int main(){

	std::vector<char> incorrect;			// Vector that stores incorrect characters
	bool guess = false;						// Did the player guess correctly?
	int misses = 0;							// Incorrect Guesses
	std::string codeword = "codecademy";	// Codeword the player has to guess
	std::string answer = "__________";		// The player's current guesses
	char letter;							// Player's Input
	int rounds;								// How many rounds to play?
	
	// Title Message
	greet();
	
	// This while loop will repeat as long as answer is not equal to codeword
	// and misses is less than 7 (at 7 the UFO makes an abduction)
	while (answer != codeword && misses < 7){
		
		// Code for each turn goes here
	
		// Show the corresponding UFO art for the amount of misses
		display_misses(misses);
		
		// Show the player's correct and incorrect guesses
		display_status(incorrect, answer);
		
		// Ask the user what letter they want to guess
		std::cout << "\n\nGuess a letter:> ";
		std::cin >> letter;
		
		// Loop through each character in codeword to see if the length was correct.
		// If i is less than the length of the codeword string, increment our loop counter.
		for (int i = 0; i < codeword.length(); i++){
		
			// If the letter in codeword[index] matches user input,
			// add the answer letter to our vector
			if (letter == codeword[i]){
			
				answer[i] = letter;
				
				// Set the guess variable to true,
				// since we guessed correctly.
				guess = true;
			}
		}
		
		// If the player guessed correctly,
		if (guess){
		
			// Tell the player they are getting closer
			std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
			
		} else {
		
		
			// Otherwise, the tractor beam power increases and so does our misses counter.
			// We add the incorrect letter to our vector.
			std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
			incorrect.push_back(letter);
			
			misses++;
		}
		
		// Reset guess to false on every loop
		guess = false;
	}
	
	// End the game if while loop breaks
	end_game(answer, codeword);
}