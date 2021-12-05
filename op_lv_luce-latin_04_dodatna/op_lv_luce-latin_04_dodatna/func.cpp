#include "header.hpp"

// ZADATAK 1

string zadatak1(string str)
{
    string::iterator it;
    for (it = str.begin(); it != str.end(); ++it)
    {
        if (*it == ('.'))
        {
            if (*(it - 1) == ' ')
            {
                it = str.erase(it - 1);   //pokazuje na sl el
                if (it == str.end())
                    break;
            }
        }
        if (*it == ',' || *it == ';' || *it == ':' || *it == '?' || *it == '!')  //*it=it[i]
        {
            if (*(it - 1) == ' ')
                str.erase(it - 1);
                if (*(it + 1) != ' ')
                    str.insert(it, ' ') + 1;
        }
    }
    return str;
}



// ZADATAK 2

bool vowels(char s) {

    string vowels = "aeiouAEIOU";

    for (int i = 0; i < 11; i++) {
        if (s == vowels[i]) {
            return true;
        }
    }

    return false;
}


string ay(string str) {

    int i = 0;
    while (!vowels(str[i])) {
        i++;
    }
    return str.substr(i) + str.substr(0, i) + "ay";
}

void PigLatin(string* str) {

    stringstream s(*str);
    string word;
    string pig_latin;

    while (s >> word) {
        if (ispunct(word[0]))
            pig_latin += word;
        else {
            if (vowels(word[0])) {
                pig_latin += word + "hay ";
            
            }
            else
                pig_latin += ay(word) + " ";
        }
    }
    *str = pig_latin;
}


// ZADATAK 3

vector <int> stuffing_bit(vector <int>& v) {

    int count = 0; 
    vector <int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        if (count == 5) {
            it = v.insert(it, 0);
            it++;
            count = 0;
        }
        if (*it == 1) {
            count++;
        }
        else {
            count = 0;
        }
    }
    return v;
}


// ZADATAK 4
vector <int> unstuffing_bit(vector <int>& v) {

    int count = 0;
    vector <int>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {

        if ((count == 5) && (*it == 0)) {
            it = v.erase(it);
            it++;
            count = 0;
        }
        if (*it == 1) {
            count++;
        }
        else {
            count = 0;
        }

    }
    return v;
}


//ZADATAK 5

void game(vector<int>& vector, int n) {
    for (int i = 0; i < n; i++) {
        if (vector.size() != 0) {
            vector.pop_back();
        }
    }
    cout << "Matches left: " << vector.size() << endl;
}
