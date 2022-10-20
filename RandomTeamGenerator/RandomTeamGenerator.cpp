
#include <iostream>
#include <string>
#include <time.h>
#include <algorithm>
using namespace std;

class randomTeamGenerator {

public:
    int playerNumbers{}, teamNumbers{};
    string players;

    // user writes all the players in both teams
    void teamMembers() {
        string players[50];
        for (int i = 0; i < playerNumbers; i++) {
            cin >> players[i];
        }
    }

    // All players are divided into how many teams the user wants
    /*
       divide the players into teams: if the number of teams is even, divide the number of players by the number of teams to see if there is any remainder, we need to check aswell
       if both the number of teams and the number of players are greater or less than one another*/

    // if the number of teams is odd, divide the number of players by the number of teams and add the remaining 1 
    public: void divideTeams() {

        for (int j = 0; j < playerNumbers; j++) {

            if (teamNumbers % 2 == 0 && playerNumbers % 2 == 0) {

                if (playerNumbers % teamNumbers == 0 && playerNumbers > teamNumbers) {
                    players[j] = playerNumbers / teamNumbers;
                    cout << players[j];
                }

                if (playerNumbers < teamNumbers) {
                    exit(-1);
                }
            }

            else if (teamNumbers % 2 != 0 && playerNumbers % 2 == 0) {

                if (playerNumbers % teamNumbers == 0 && playerNumbers > teamNumbers) {
                    players[j] = playerNumbers / teamNumbers;
                    cout << players[j];
                }

                if (playerNumbers < teamNumbers) {
                    exit(-1);
                }

            }

            else if (teamNumbers % 2 == 0 && playerNumbers % 2 != 0) {

                if (playerNumbers % teamNumbers == 0 && playerNumbers > teamNumbers) {
                    players[j] = playerNumbers / teamNumbers;
                    cout << players[j];
                }

                if (playerNumbers < teamNumbers) {
                    exit(-1);
                }
            }

            else if (teamNumbers % 2 != 0 && playerNumbers % 2 != 0) {

                if (playerNumbers % teamNumbers == 0 && playerNumbers > teamNumbers) {
                    players[j] = playerNumbers / teamNumbers;
                    cout << players[j];
                }

                if (playerNumbers < teamNumbers) {
                    exit(-1);
                }
            }
            else
                exit(-1);
        }
    }
};
 
int main() {

    randomTeamGenerator names;
    cout << "Enter the number of players: " << endl;
    cout << "Number of players: "; cin >> names.playerNumbers; 
    system("CLS");
    cout << "Write the names of the players: " << endl;  names.teamMembers();
    cout << "How many teams you want to have? : " << endl; cin >> names.teamNumbers;
 
    names.divideTeams();

    return 0;
}

