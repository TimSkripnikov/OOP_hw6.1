#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
    static unsigned count;

public:
    Time();
    Time(int h, int m, int s);
    Time(const Time &t);
    ~Time();

    static unsigned GetCount();
    void Normalize();
    int ToSeconds() const;

    void SetHours(int h);
    void SetMinutes(int m);
    void SetSeconds(int s);

    int GetHours() const;
    int GetMinutes() const;
    int GetSeconds() const;

    void PrintTime() const;

    Time operator+(const Time &other) const;
    Time operator-(const Time &other) const;
    Time &operator-=(const Time &other);
    Time &operator+=(const Time &other);
    Time &operator=(const Time &other);
    bool operator==(const Time &other) const;
};

#endif // TIME_HPP
