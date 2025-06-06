// 2434. Using a Robot to Print the Lexicographically Smallest String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

string robotWithString(string s) {
    
    string p = "";
    stack<char> t;
    

    for (char letter = 'a'; letter <= 'z'; letter++) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == letter) {
                while (!t.empty() && s[i] >= t.top()) {
                    p.append(1, t.top());
                    t.pop();
                }

                for (int j = 0; j < i; j++) {
                    t.push(s[j]);
                }
                p.append(1,s[i]);
                s.erase(0, i + 1);
                i = -1;
            }
        }

    }

    while (!t.empty()) {
        p.append(1, t.top());
        t.pop();
    }

    return p;
}




int main()
{
    std::cout << robotWithString("evokzbuginbpptrfaamp");
}

