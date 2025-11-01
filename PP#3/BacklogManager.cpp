#include "BacklogManager.h"
#include <fstream>

// Constructor for game object
Game::Game(string t, string g, string p)
    : title(t), genre(g), platform(p), completed(false) {}

// Method to mark game as completed
void Game::markCompleted() {
    cout << "[Stub] Game marked as completed (to be implemented)." << endl;
}

// Method to display entire game backlog
void Game::display() const {
    cout << "[Stub] Displaying game: "
         << title << " | " << genre << " | " << platform
         << " | " << (completed ? "Completed" : "Not Completed") << endl;
}

// Getter for title of game
string Game::getTitle() const {
    return title;
}

// Getter for game genre
string Game::getGenre() const {
    return genre;
}

// Getter for game console platform
string Game::getPlatform() const {
    return platform;
}

// Getter for completion status of game
bool Game::isCompleted() const {
    return completed;
}

// Adds a game to backlog
void BacklogManager::addGame(const Game& newGame) {
    cout << "[Stub] Adding game to backlog." << endl;
    
}

// Removes a game from the backlog
void BacklogManager::removeGame(int index) {
    cout << "[Stub] Removing game at index " << index << endl;
}

// Marks a game in backlog as completed
void BacklogManager::markGameCompleted(int index) {
    cout << "[Stub] Marking game at index " << index
         << " as completed." << endl;
}

// Displays game backlog as a list
void BacklogManager::displayGames() const {
    cout << "[Stub] Displaying all games in backlog..." << endl;
    if (backlog.empty()) {
        cout << "Backlog is currently empty." << endl;
    } else {
        for (size_t i = 0; i < backlog.size(); ++i) {
            cout << i << ": ";
            backlog.at(i).display();
        }
    }
}

void BacklogManager::saveToFile(const string& filename) {
    cout << "[Stub] Saving backlog " << filename << endl;
}

void BacklogManager::loadFromFile(const string& filename) {
    cout << "[Stub] Loading backlog from file " << filename << endl;
}