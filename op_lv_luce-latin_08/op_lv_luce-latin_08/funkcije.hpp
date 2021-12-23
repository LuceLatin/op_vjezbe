#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;


class Timer {
private:
    int h, m;
    double s;

public:
    friend ostream& operator<<(ostream& os, const Timer& dt);
    void set_s(double seconds) {
        s = seconds;
    }
    void set_m(int minutes) {
        m = minutes;
    }
    void set_h(int hour) {
        h = hour;
    }
    void add_s(int seconds);
    void add_m(int minutes);
    void add_h(int hour);
    int get_h() {
        return h;
    }
    int get_m() {
        return m;
    }
    double get_s() {
        return s;
    }
    Timer(){
        h = 0;
        m = 0;
        s = 0;
    }
    Timer(int hour, int minute, double second) {
        h = hour;
        m = minute;
        s = second;
    }
    //svi operatori
    Timer operator+=(Timer const& timer);
    Timer operator+(Timer const& timer);
    Timer operator-=(Timer const& timer);
    Timer operator-(Timer const& timer);
    Timer operator/(int br);
    Timer operator/=(int br);
    bool operator<(Timer const& timer);

    operator double() {
        return 3600 * h + 60 * m + s;
    }
};

class Penalty {
private:
    double sec;

public:
    Penalty(double seconds) {
        sec = seconds;
    }
    double operator() (Timer& timer){
        timer.add_s(sec);
        return sec;
    }
};