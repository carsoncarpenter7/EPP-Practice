#include <iostream>
#include <string>
#include "Hitboxes.h"

using std::cout;
using std::string;

int main()
{
    { // Test with first text file
        cout << "Testing with text file: apex.txt\n";
        Hitboxes hb(string("apex.txt"));
        if (hb.smallestCharacter() == "Wraith")
            cout << "smallestCharacter: PASSED\n";
        else
            cout << "smallestCharacter: Result did not match expected answer: Wraith\n";
        if (hb.smallestType() == "Scout")
            cout << "smallestType: PASSED\n";
        else
            cout << "smallestType: Result did not match expected answer: Scout\n";
    }

    { // Test with second text file
        cout << "Testing with text file: mario.txt\n";
        Hitboxes hb(string("mario.txt"));
        if (hb.smallestCharacter() == "Toad")
            cout << "smallestCharacter: PASSED\n";
        else
            cout << "smallestCharacter: Result did not match expected answer: Toad\n";
        if (hb.smallestType() == "Monster")
            cout << "smallestType: PASSED\n";
        else
            cout << "smallestType: Result did not match expected answer: Monster\n";
    }
    return 0;
}