
#include <iostream>
#include <algorithm>
using namespace std;

class randomTeamGenerator {

    public:
        int playerNumbers, teamNumbers;
    private:
        string players;

    public:
        randomTeamGenerator() {
            players = "0";
        }
        
    randomTeamGenerator(string players) {
        this->players = players;
    }

    // user writes all the players in his team
    void teamMembers() {
        
        string* players = new string[teamNumbers * playerNumbers];
        for (int i = 0; i < teamNumbers * playerNumbers; i++) {
            cin >> players[i];
        }
    }

    void divideTeams() {
        if (teamNumbers % 2 == 0) {
            for (int i = 0; i < teamNumbers * playerNumbers; i++) {
                players[i] = teamNumbers;
                cout << players[i];
            }
        }
    }
};

int main() {

    randomTeamGenerator names;
    cout << "Enter the number of teams: " << endl;
    cin >> names.teamNumbers;
    cout << "Enter the number of players: " << endl;
    cin >> names.playerNumbers;
    system("CLS");
    cout << "Write the names of the players: " << endl; 
    names.teamMembers();
    names.divideTeams();
    system("CLS");
}

