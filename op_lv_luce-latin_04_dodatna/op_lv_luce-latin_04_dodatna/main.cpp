#include "header.hpp"

int main() {

    // ZADATAK 1
    //Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno .
    
    string str;
    cout << "Upisite recenicu:" << endl;
    getline(cin, str);
    cout << str << endl;
    str = zadatak1(str);
    cout << "Novi/ispravljeni string je: \n" << str << endl;
    
    // ZADATAK 2
    /*
    vector <string> vs;
    string str;
    cout << "Unesite recenice: " << endl;
    cout << "Za porekid ctrl+z i enter." << endl; 
    while (getline(cin, str))
    {
        vs.push_back(str);
    }
    cout << "Unesene recenice su:" << endl;
    vector<string>::iterator it;
    for (it = vs.begin(); it != vs.end(); it++)
    {
        cout << *it << endl;
    }
    cout << "Broj unesenih stringova je:" << vs.size() << endl;

    srand(time(NULL));
    int random_recenica = rand() % (vs.size() - 1); //+1
    cout << "Random recenica iz vector je: " << random_recenica << endl;

    PigLatin(&vs[random_recenica]);
    
    for (int i = 0; i < vs.size(); i++) {
        cout << vs[i] << endl;
    }
    */
    // ZADATAK 3
    /*
    int x;
    vector <int> bin;
    cout << "Unesite brojeve: " << endl;
    while (1)
    {
        cin >> x;
        if (x != 0 && x != 1)
            break;
        bin.push_back(x);

    }
    stuffing_bit(bin);
    for (int i = 0; i < bin.size(); i++) {
        cout << bin[i];
    }
    cout << endl;
    // ZADATAK 4
    
    unstuffing_bit(bin);
    for (int i = 0; i < bin.size(); i++) {
        cout << bin[i];
    }
    */


    // ZADATAK 5
    /*
    int n;
    bool comp = true;
    vector<int> v;
    for (int i = 0; i < 21; i++) { //zadano 21 sibica
        v.push_back(i);
    }
    for (;;) {
        if (comp) {
            srand (time(NULL));
            n = rand()%(3)+1;    
            cout << "Computer: "<< n << endl;
            game(v, n);
            if(v.size() <= 0) {
                cout << "You won!" << endl;
                break;
            }
            comp = false;
        } 
        else {
            for(;;) {
                cout << "Choose 1/2/3: "<< endl;
                cin >> n;
                if (n == 1 || n == 2 || n == 3) {
                    game(v, n);
                    break;
                }
                else {
                    cout << "Choose 1/2/3: " << endl;
                }
            }
            if (v.size() <= 0) {
                cout << "You lost! Try again." << endl;
                break;
            }
            comp = true;
        }
    }
    */



}