#include "vector.hpp"


//funkcija èiji su parametri referenca na vektor i broj elemenata vektora,
void unos(vector <int> &v, int n) //n broj elemenata vektora
{
    int x;
    for (int i = 0; i < n; i++)
    {
        cout << "Unesite " << i+1 << " element: " << endl;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
}

void ispis(vector <int> &v, int n) //n broj elemenata vektora
{
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}



//funkcija èiji su parametri referenca na vektor i granice intervala u kojem
//trebaju biti elementi vektora. Elementi vektora se unose u funkciji, sve dok
//se ne unese broj koji nije u danom intervalu.

void unos2(vector <int>& v, int a, int b) //n broj elemenata vektora
{
    int x;
    while (1)
    {
        cout << "Unesite broj: " << endl;
        cin >> x;
        if (x >= a && x < b)
            v.push_back(x);
        else
            break;
    }
}

void novi(vector <int>& v1, vector <int>& v2, vector <int> &v3)
{
    int br;
    int m;
    m = v1.size();
    for (int i = 0; i < m; i++)
    {
        br=count(v2.begin(), v2.end(), v1.at(i));
        if (br != 1)
        {
            v3.push_back(v1.at(i));
        }
    }
    cout << endl;
}

void sortiranje(vector <int>& v)
{
    int zbroj=0;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        zbroj += v.at(i);
    }
    v.insert(v.begin(), 0);
    v.push_back(zbroj);

}

void izbrisi(vector <int>& v)
{
    int x;
    int s;
    cout << "Unesite indeks broja kojeg zelite uklonit: " << endl;
    cin >> x;
    s = v.size();
    v.at(x) = v.at(s - 1);
}

void ponovi(string s1, string s2)
{
    int count = 0;
    size_t nPos = s1.find(s2, 0); // first occurrence
    while (nPos != string::npos)
    {
        count++;
        nPos = s1.find(s2, nPos + 1);
    }

    cout << count;
}


void funkcija(vector <string>& str)
{
    cout << "Unesite stringove:" << endl;
    cout << "Za porekid ctrl+z i enter." << endl;
    string s;
    while (cin >> s)
    {
        str.push_back(s);
    }
    vector<string>::iterator it;
    for (it = str.begin(); it != str.end(); ++it)
        reverse((*it).begin(), (*it).end());
    sort(str.begin(), str.end());
    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it << " ";
    }
}