
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
using namespace std;

class randomTeamGenerator {

public:
    int playerNumbers{}, teamNumbers{};
    string players;

    // user writes all the players in both teams

    // All players are divided into how many teams the user wants
    /*
       divide the players into teams: if the number of teams is even, divide the number of players by the number of teams to see if there is any remainder, we need to check aswell
       if both the number of teams and the number of players are greater or less than one another*/

       // if the number of teams is odd, divide the number of players by the number of teams and add the remaining 1 
    void divideTeams() {
        string players[50];
        for (int i = 0; i < playerNumbers; i++)
            cin >> players[i];

        int random = rand() % (playerNumbers / teamNumbers) + 1;
        string count;
        if (playerNumbers % teamNumbers == 0) {
            cout << endl;
            for (int i = 0; i < teamNumbers; i++) {
                count = players[random]; 
                cout << players[random] << endl;
                random = rand() % (playerNumbers / teamNumbers) + 1;
                random++;
            }

            cout << "--------" << endl;

            for (int i = teamNumbers; i < playerNumbers; i++) {          
                cout << players[random] << endl;
                random = rand() % (playerNumbers / teamNumbers) + 1;
                random++;
            }
        } 

        if (playerNumbers % teamNumbers != 0) {
            cout << endl;
            for (int i = 0; i < teamNumbers ; i++) {
                cout << players[random] << endl;
                random = rand() % (playerNumbers / teamNumbers) + 1;
                random++;
            }

            cout << "--------" << endl;

            for (int i = teamNumbers; i < playerNumbers; i++) {
                cout << players[random] << endl;
                random = rand() % (playerNumbers / teamNumbers) + 1;
                random++;
            }
        }
    }
};

int main() {

    srand(time(nullptr));
    randomTeamGenerator names;
    cout << "Number of players: "; cin >> names.playerNumbers;
    cout << "How many teams you want to have? : "; cin >> names.teamNumbers;
    system("CLS");

    if (names.teamNumbers == 1 && names.playerNumbers != 1) {
        cout << "Your number of teams is 1. You must enter 2 or more teams!!!" << endl;
        exit(-1);
    }

    else if (names.playerNumbers < names.teamNumbers) {
        cout << "You entered more teams than players which is not possible!!!" << endl;
        exit(-1);
    }
     
    cout << "Write the names of the players: " << endl;  names.divideTeams();
    return 0;
}