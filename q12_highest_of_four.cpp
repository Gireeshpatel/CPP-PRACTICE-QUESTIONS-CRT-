// Set 2 - Q12: Highest of Four Teams
// Four teams participated in a quiz competition. Find which team scored the highest marks
// among all four teams using nested if-else statements.
//
// INPUT: Four team scores
// EXPECTED OUTPUT: Highest-scoring team

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter scores of Team 1, 2, 3 and 4: ";
    cin >> a >> b >> c >> d;

    if (a >= b) {
        if (a >= c) {
            if (a >= d)
                cout << "Team 1 scored the highest: " << a << endl;
            else
                cout << "Team 4 scored the highest: " << d << endl;
        } else {
            if (c >= d)
                cout << "Team 3 scored the highest: " << c << endl;
            else
                cout << "Team 4 scored the highest: " << d << endl;
        }
    } else {
        if (b >= c) {
            if (b >= d)
                cout << "Team 2 scored the highest: " << b << endl;
            else
                cout << "Team 4 scored the highest: " << d << endl;
        } else {
            if (c >= d)
                cout << "Team 3 scored the highest: " << c << endl;
            else
                cout << "Team 4 scored the highest: " << d << endl;
        }
    }

    return 0;
}
