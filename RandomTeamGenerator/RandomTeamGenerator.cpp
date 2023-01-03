
#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <string>
using namespace std;

void print_team1(vector<string> team1);
void print_team2(vector<string> team2);

int main() {

    // Get the number of players from the user

    cout << "Enter the number of players: ";
    int num_players;
    cin >> num_players;

    // Create a vector to store the players

    vector<string> players(num_players);

    // Allow the user to enter the names of the players

    cout << "Enter the names of the players, separated by spaces: ";
    for (int i = 0; i < num_players; ++i) {
        cin >> players[i];
    }

    // Seed the random number generator

    mt19937 rng(random_device{}());

    // Shuffle the players

    shuffle(players.begin(), players.end(), rng);

    // Divide the players into teams

    const int team_size = num_players / 2;
    vector<string> team1(players.begin(), players.begin() + team_size);
    vector<string> team2(players.begin() + team_size, players.end());

    // Print the teams

    cout << "Team 1:";
    print_team1(team1);
    cout << endl;
    cout << "Team 2:";
    print_team2(team2);
    cout << endl;

    return 0;
}

// Function to print team1
void print_team1(vector<string> team1) {
    for (const auto& player : team1) {
        cout << ' ' << player;
    }
}

// Function to print team2
void print_team2(vector<string> team2) {
    for (const auto& player : team2) {
        cout << ' ' << player;
    }
}