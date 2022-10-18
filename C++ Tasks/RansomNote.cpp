#include<iostream>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    bool result{ false };
    int answer{ 0 };
    if (magazine.length() < ransomNote.length()) {
        answer += 1;
    }
    else {
        for (int i{ 0 }; i < ransomNote.length(); i++) {
            char letter1{ ransomNote[i] };
            for (int j{ 0 }; j < magazine.length(); j++) {
                char letter2{ magazine[j] };
                if (letter1 == letter2) {
                    magazine[j] = '0';
                }
                else {
                    answer += 1;
                }
            }
        }
    }

    if (answer == 0) {
        result = true;
    }
    else {
        result = false;
    }
    return result;
}
int main() {

    cout << canConstruct("abs", "bobcat");
    return 0;
}


