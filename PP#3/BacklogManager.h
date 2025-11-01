#ifndef BACKLOGMANAGER_H
#define BACKLOGMANAGER_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Game class to create video games with title, genre, and platform to add to backlog
class Game {
private:
    // Title of video game
    string title;
    // Genre of the video game
    string genre;
    // Console platform the video game is on
    string platform;
    // Sets whether the game has been completed or is unfinished
    bool completed;

public:
    Game(string t = "Untitled", string g = "Unknown", string p = "Unknown");

    // Method to mark video game as completed
    void markCompleted();     
    // Method to display the entire video game backlog
    void display() const;     
    // Getter for video game title
    string getTitle() const;
    // Getter for game genre
    string getGenre() const;
    // Getter for game console platform
    string getPlatform() const;
    // Getter for completion status of video game
    bool isCompleted() const;
};

// Vector class to hold the video game backlog with the ability to add, remove, display, and mark as completed
class BacklogManager {
private:
    vector<Game> backlog;  // ADT: vector of Game objects

public:
    // Method to add game to backlog
    void addGame(const Game& newGame);
    // Method to remove game from backlog
    void removeGame(int index);        
    // Method to mark a game as completed
    void markGameCompleted(int index);
    // Method to display the game backlog
    void displayGames() const;    
    // Method to save user's game backlog     
    void saveToFile(const string& filename);
    // Method to load user backlog file
    void loadFromFile(const string& filename);
};

#endif
