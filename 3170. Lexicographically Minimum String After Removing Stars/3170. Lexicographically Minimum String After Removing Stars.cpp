#include <iostream>
#include <queue>
#include <map>

using namespace std;

string clearStars(string s) {
    multimap<char, int> letters;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '*') {
            s.erase(i, 1);

            // Find the first letter in the map
            auto f = letters.begin();

            // Find the range of the first letter
            // For example if there are 3 'a' letters, this will return 3 of them.
            auto range = letters.equal_range(f->first);

            // Access the last element
            if (range.first != range.second) {
                auto last = range.second;
                --last;
                f = last;
            }
            s.erase(f->second, 1);

            for (auto it = next(f,1); it != letters.end(); it++) {
                if(f->second < it->second)
                    it->second--;
            }

            letters.erase(f);
            i-=2;
        }
        else
            letters.insert({ s[i], i });
    }
    return s;
}



int main()
{

    std::cout << clearStars("abcde*f*");
}

