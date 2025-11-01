#include "BacklogManager.h"

int main() {
    // Backlog vector object that holds video game objects
    BacklogManager manager;
    // User's input choice
    int choice = 0;

    // Introduction message
    cout << "=== Video Game Backlog Manager ===" << endl;

    // Looping until user decides to exit program
    do {
        cout << "\nMain Menu" << endl;
        cout << "1. Add Game" << endl;
        cout << "2. Remove Game" << endl;
        cout << "3. Mark Game as Completed" << endl;
        cout << "4. View Backlog" << endl;
        cout << "5. Save Backlog to File" << endl;
        cout << "6. Load Backlog from File" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice) {
            // Option 1: adding a game to backlog
            case 1: {
                string title, genre, platform;
                cout << "Enter game title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter game genre: ";
                getline(cin, genre);
                cout << "Enter game platform: ";
                getline(cin, platform);

                Game newGame(title, genre, platform);
                manager.addGame(newGame);
                break;
            }
            // Option 2: remove a game from backlog
            case 2: {
                int index;
                cout << "Enter index of game to remove: ";
                cin >> index;
                manager.removeGame(index);
                break;
            }
            // Option 3: mark a game as completed
            case 3: {
                int index;
                cout << "Enter index of game to mark completed: ";
                cin >> index;
                manager.markGameCompleted(index);
                break;
            }
            // Option 4: displays the entire existing game backlog
            case 4:
                manager.displayGames();
                break;
            case 5: {
                string filename;
                cout << "Enter filename to save Backlog: ";
                cin >> filename;
                manager.saveToFile(filename);
                break;
            }
            case 6: {
                string filename;
                cout << "Enter filename to load backlog: ";
                cin >> filename;
                manager.loadFromFile(filename);
                break;
            }
            // Option 7: shut down the backlog
            case 7:
                cout << "Shutting Down Backlog Manager" << endl;
                break;
            // Option anything other than 1-7 is inputted, loops back to prompting user for option choice
            default:
                cout << "Invalid selection. Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}
