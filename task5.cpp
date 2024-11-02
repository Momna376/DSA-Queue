#include <iostream>
using namespace std;

bool isWinner(const int tickets[], int size, int winningNumber) {
    for (int i = 0; i < size; i++) {
        if (tickets[i] == winningNumber)
            return true;
    }
    return false;
}

int main() {
    int tickets[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int size = sizeof(tickets) / sizeof(tickets[0]);
    
    int winningNumber;
    cout << "Enter this week's winning 5-digit number: ";
    cin >> winningNumber;

    if (winningNumber < 10000 || winningNumber > 99999) {
        cout << "Invalid number! Please enter a valid 5-digit number." << endl;
    } else if (isWinner(tickets, size, winningNumber)) {
        cout << "Congratulations! You have a winning ticket!" << endl;
    } else {
        cout << "Sorry, no winning ticket this week." << endl;
    }

    return 0;
}

