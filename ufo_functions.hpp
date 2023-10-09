// This is our header file where the games
// function definitions are

// The content of these functions is in ufo_functions.cpp

#include <vector>	// C++ Vectors Library

void titleScreenArt();													// Some UFO Art for Game Startup
void display_misses(int misses);						  				// Display the amount of incorrect guesses
void greet();											  				// Program Title Message
void end_game(std::string answer, std::string codeword);  				// Determines if the Player wins or loses
void display_status(std::vector<char> incorrect, std::string answer);	// Display player's correct and incorrect guesses
