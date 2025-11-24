#include "BacklogManager.h"
#include <fstream>

// Constructor for game object
Game::Game(string t, string g, string p)
    : title(t), genre(g), platform(p), completed(false) {}

// Method to mark game as completed
void Game::markCompleted() {
    completed = true;
    cout << "Game \"" << title << "\" marked as completed!" << endl;
}

// Method to display entire game backlog
void Game::display() const {
    cout << title << " | " << genre << " | " << platform
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
    backlog.push_back(newGame);
    cout << "Added \"" << newGame.getTitle() << "\" to backlog." << endl;
}


// Removes a game from the backlog
void BacklogManager::removeGame(int index) {
    if (index < 0 || index >= backlog.size()) {
        cout << "Invalid index. No game removed." << endl;
        return;
    }
    cout << "Removed \"" << backlog[index].getTitle() << "\" from backlog." << endl;
    backlog.erase(backlog.begin() + index);
}

// Marks a game in backlog as completed
void BacklogManager::markGameCompleted(int index) {
    if (index < 0 || index >= backlog.size()) {
        cout << "Invalid index. Cannot mark game as completed." << endl;
        return;
    }
    backlog[index].markCompleted();
}

// Displays game backlog as a list
void BacklogManager::displayGames() const {
    cout << "\n=== Game Backlog ===" << endl;
    if (backlog.empty()) {
        cout << "Backlog is currently empty." << endl;
    } else {
        for (size_t i = 0; i < backlog.size(); ++i) {
            cout << i << ": ";
            backlog[i].display();
        }
    }
}

// Save backlog to file
void BacklogManager::saveToFile(const string& filename) {
    ofstream outFile(filename);
    if (!outFile) {
        cout << "Error opening file for writing." << endl;
        return;
    }

    for (const auto& game : backlog) {
        outFile << game.getTitle() << endl
                << game.getGenre() << endl
                << game.getPlatform() << endl
                << game.isCompleted() << endl;
    }

    outFile.close();
    cout << "Backlog saved to \"" << filename << "\"." << endl;
}

// Load backlog from file
void BacklogManager::loadFromFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cout << "Error opening file for reading." << endl;
        return;
    }

    backlog.clear();
    string title, genre, platform;
    bool completed;
    while (getline(inFile, title)) {
        getline(inFile, genre);
        getline(inFile, platform);
        inFile >> completed;
        inFile.ignore();  // Skip newline after bool
        Game game(title, genre, platform);
        if (completed) game.markCompleted();
        backlog.push_back(game);
    }

    inFile.close();
    cout << "Backlog loaded from \"" << filename << "\"." << endl;
}