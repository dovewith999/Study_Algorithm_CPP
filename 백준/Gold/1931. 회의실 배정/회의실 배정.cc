#include <iostream>
#include <vector>
#include <algorithm>

struct FConferenceTime
{
    int StartTime;
    int FinishTime;
    FConferenceTime(int start, int finish) : StartTime(start),
FinishTime(finish) {}
};

bool Less(const FConferenceTime& a, const FConferenceTime& b)
{
    if (a.FinishTime == b.FinishTime) {
        return a.StartTime < b.StartTime;
    } else {
        return a.FinishTime < b.FinishTime;
    }
}

int main()
{
    int SizeOfArr = 0;
    std::cin >> SizeOfArr;

    std::vector<FConferenceTime> Times;
    Times.reserve(SizeOfArr);

    int start, finish;
    for (int i = 0; i < SizeOfArr; ++i)
    {
        std::cin >> start >> finish;
        Times.push_back(FConferenceTime(start, finish));
    }

    std::sort(Times.begin(), Times.end(), Less);

    int Count = 1, CurrentFinishTime = Times[0].FinishTime;
    for (int i = 1; i < SizeOfArr; ++i) {
        if (Times[i].StartTime >= CurrentFinishTime) {
            CurrentFinishTime = Times[i].FinishTime;
            ++Count;
        }
    }

    std::cout << Count << std::endl;

    return 0;
}