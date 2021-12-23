#include "funkcije.hpp"
#define M 60
#define N 3600

void Timer::add_s(int sec){
    s = s + sec;
    if (s >= M) {
        m++;
        s = s - M;
    }
    if (m >= M) {
        h++;
        m = m - M;
    }
}

void Timer::add_m(int min){
    m = m + min;
    if (m >= M) {
        h++;
        m = m - M;
    }
}

Timer Timer::operator+=(Timer const& timer){

    h = h + timer.h;
    m = m + timer.m;
    s = s + timer.s;
    if (s >= M) {
        m++;
        s = s - M;
    }
    if (m >= M) {
        h++;
        m = m - M;
    }
    return *this;
}

Timer Timer::operator+(Timer const& timer){

    Timer rj;
    rj.h = h + timer.h;
    rj.m = m + timer.m;
    rj.s = s + timer.s;
    if (rj.s >= M) {
        rj.m++;
        rj.s -= M;
    }
    if (rj.m >= M) {
        rj.h++;
        rj.m -= M;
    }
    return rj;
}

Timer Timer::operator-=(Timer const& timer){

    h = h - timer.h;
    m = m - timer.m;
    s = s - timer.s;
    if (h < 0) {
        h = 0;
        m -= abs(h) * M;
    }
    if (m < 0) {
        m = 0;
        s -= abs(m) * M;
    }
    if (s < 0) {
        s = 0;
    }
    return *this;
}

Timer Timer::operator-(Timer const& timer){

    Timer novi;
    novi.h = h - timer.h;
    novi.m = m - timer.m;
    novi.s = s - timer.s;
    if (novi.h < 0) {
        novi.h = 0;
        novi.m -= abs(novi.h) * M;
    }
    if (novi.m < 0) {
        novi.m = 0;
        novi.s -= abs(novi.m) * M;
    }
    if (novi.s < 0) {
        novi.s = 0;
    }
    return novi;
}

Timer Timer::operator/(int br){

    Timer novi;
    double time;
    time = N * h + M * m + s;
    time = time / br;
    novi.h = time / N;
    novi.m = (time - (novi.h * N)) / M;
    novi.s = (time - ((novi.h * N) + (novi.m * M)));
    return novi;
}

Timer Timer::operator/=(int br){

    double double_time;
    double_time = N * h + M * m + s;
    double_time = double_time / br;
    h = double_time / N;
    m = (double_time - (h * N)) / M;
    s = (double_time - ((h * N) + (m * M)));
    return *this;
}

bool Timer::operator<(Timer const& timer){
    double t1 = N * h + M * m + s;
    double t2 = N * timer.h + 60 * timer.m + timer.s;

    return t1 < t2;
}

ostream& operator<<(ostream& os, const Timer& timer) {
    os << timer.h << ":" << timer.m << ":" << timer.s << endl;
    return os;
}


