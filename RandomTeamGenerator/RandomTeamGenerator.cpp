
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

        /*if (playerNumbers % teamNumbers == 0 && playerNumbers > teamNumbers) {
            count = playerNumbers / teamNumbers;
            cout << endl;
            for (int i = 0; i < count; i++) {
                cout << players[i] << endl;
            }
    
            cout << "--------" << endl;
            for (int i = count; i < playerNumbers; i++) {
                cout << players[i] << endl;
            }
        }*/

        int random = rand() % (playerNumbers / teamNumbers) + 1;
        if (playerNumbers % teamNumbers == 0 && playerNumbers > teamNumbers) {
            cout << endl;
            for (int i = 0; i < teamNumbers; i++) {
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
    cout << "Write the names of the players: " << endl;  names.divideTeams();

    if (names.playerNumbers < names.teamNumbers)
        exit(-1);
    
    return 0;
}