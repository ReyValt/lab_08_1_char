#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


bool ContainsWhileLetters(char* s) {
    const char* word = "while";
    for (int i = 0; word[i] != '\0'; i++) {
        if (strchr(s, word[i]) == nullptr) {
            return false;
        }
    }
    return true;
}


char* ReplaceWhile(char* s) {
    char* t = new char[strlen(s) + 1];
    char* p;
    int pos1 = 0, pos2 = 0;
    *t = '\0';

    while ((p = strstr(s + pos1, "while")) != NULL) {
        pos2 = p - s + 5;
        strncat(t, s + pos1, pos2 - pos1 - 5);
        strcat(t, "**");
        pos1 = pos2; 
    }
    strcat(t, s + pos1);
    strcpy(s, t); 
    return t;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    if (ContainsWhileLetters(str)) {
        cout << "All letters from 'while'." << endl;
    }
    else {
        cout << "Does'nt contain all letters from 'while'." << endl;
    }

    char* dest = new char[151];
    dest = ReplaceWhile(str);
    cout << "Modified string: " << str << endl;

    return 0;
}
