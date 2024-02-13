#include <iostream>
using namespace std;

int main() {
    int redHeight, blueHeight, redBoxes, blueBoxes;
    
    cin >> redHeight >> blueHeight >> redBoxes >> blueBoxes;
    
    int smallerCount = min(redBoxes, blueBoxes);
    
    int combinations = (smallerCount * smallerCount) / 2 + (smallerCount * smallerCount) + 1;
    
    cout << combinations << endl;
    
    return 0;
}
