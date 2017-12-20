// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

void hanoi(int n, char src, char dest, char helper) {
    if (n == 0) {
        return;
    }

    hanoi(n - 1, src, helper, dest); // move n - 1 disc from A->C
    cout << "Disc " << n << ": " << src << "->" << dest << endl;
    hanoi(n - 1, helper, dest, src);
}

int main() {
    int n;
    cin >> n;

    hanoi(n, 'A', 'B', 'C');
}