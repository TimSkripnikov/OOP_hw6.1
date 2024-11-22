#include "Time.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <memory>

int main()
{
    // а)
    Time *time1 = new Time(10, 20, 30);
    time1->PrintTime();

    delete time1;

    int size = 3;
    Time *timesArray = new Time[size];

    timesArray[0] = Time(10, 20, 30);
    timesArray[1] = Time(12, 45, 55);
    timesArray[2] = Time(5, 15, 25);

    for (int i = 0; i < size; ++i)
    {
        timesArray[i].PrintTime();
    }

    delete[] timesArray;

    // б)
    std::vector<Time> timeVector;
    timeVector.push_back(Time(10, 20, 30));
    timeVector.push_back(Time(12, 45, 55));

    for (const auto &time : timeVector)
    {
        time.PrintTime();
    }

    std::list<Time> timeList;
    timeList.push_back(Time(5, 15, 25));
    timeList.push_back(Time(7, 30, 45));

    for (const auto &time : timeList)
    {
        time.PrintTime();
    }

    // в)
    std::unique_ptr<Time> uniqueTime = std::make_unique<Time>(10, 20, 30);
    uniqueTime->PrintTime();

    return 0;
}
