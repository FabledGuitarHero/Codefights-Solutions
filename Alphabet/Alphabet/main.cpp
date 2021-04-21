//
//  main.cpp
//  Alphabet
//
//  Created by Nate Henderson on 4/21/21.
//

#include <iostream>

using namespace std;

string AlphabetStudy(string l, string w) {
    for (auto i : w)
        if (l.find(i) == string::npos) return "No";
    return "Yes";
}


int main(int argc, const char * argv[]) {
    cout << AlphabetStudy("act", "cat") << endl;
    cout << AlphabetStudy("bat", "tab") << endl;
    cout << AlphabetStudy("sat", "done") << endl;
    
    return 0;
}
