#include <iostream>
#include"Player.h"
using namespace std;

int main() {

    cout << "\n\n----------Hi, your are in game Yahtzee for 2 players!----------\n\n\n" << endl;
    Player player[2] = {Player(1),Player(2)};
    vector<int> locked(5,0);

    int turns=13,rolls=3;

    for (int i=0;i<turns*2;i++)
    {
        cout << "Turn of player " << i%2+1 << '\n';
        player[i%2].print_current_result();

        for (int j=1;j<=rolls;j++) {
            cout << "Roll number " << j << '\n';
            if (j>1) {
                cout << "Would you like to stop rolling? (1-yes, 0 - no)\n";
                int ok; cin >> ok;
                if (ok==1) break;
            }

            player[i%2].roll_dices();
            if (j!=3) {
                cout << "Which dices you would like to lock?\n";
                cout << "*write 5 booleans, where 1 - ith dice is locked and 0 - ith is not locked\n";
                cout << "Example 1 0 0 1 0 -- first and forth are locked\n\n";
                cout << "5 booleans: "; for (int k=0;k<5;k++) cin >> locked[k];
                while (!player[i % 2].lock_dices(locked));
            }
        }

        player[i%2].print_divider();
        cout << "Choose your desired combination: ";

        vector<string> combinations = player[i%2].get_combinations();
        for (int k=0;k<combinations.size();k++) {
            cout << k+1 << " - " << combinations[k] << '\n';
        }

        int comb;
        cout << "Input the number of combination: "; cin >> comb;
        while(!player[i%2].choose_category(comb)) {cout << "Input the number of combination: "; cin >> comb;}
        player[i%2].print_divider();
        player[i%2].print_current_result();
    }
    return 0;
}
