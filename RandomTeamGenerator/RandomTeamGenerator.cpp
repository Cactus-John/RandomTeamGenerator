
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <algorithm>
using namespace std;

class randomTeamGenerator {

    public:
        int playerNumbers, teamNumbers;
        string players;

    // user writes all the players in his team
    void teamMembers() {
        string* players = new string[playerNumbers];
        for (int i = 0; i < playerNumbers ; i++) {
            cin >> players[i];
        }
    }

    void divideTeams() {
        srand(time(NULL));
        int rndm = rand() % playerNumbers + 1;
        int i = 0;
        while (i <= playerNumbers) {
            cout << players[rndm] << endl;
            if (i % teamNumbers == 0) {
                cout << endl;
                i++;
            }
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
    system("CLS");
}

