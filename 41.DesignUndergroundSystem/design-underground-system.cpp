// An underground system designed using unordered maps
// https://leetcode.com/problems/design-underground-system/

class UndergroundSystem
{
    unordered_map<int, pair<string, int>> chIn;  // Id:{stationName,checkinTime}
    unordered_map<string, pair<int, int>> route; // startStation-endStation:{TotalTravelTime, Count}
public:
    UndergroundSystem()
    {
    }

    void checkIn(int id, string stationName, int t)
    {
        chIn[id] = {stationName, t};
    }

    void checkOut(int id, string stationName, int t)
    {
        string se = chIn[id].first + "-" + stationName;
        route[se] = {route[se].first + (t - chIn[id].second), route[se].second + 1};
        chIn.erase(id);
    }

    double getAverageTime(string startStation, string endStation)
    {
        pair<int, int> p = route[startStation + "-" + endStation];
        return (double)p.first / p.second;
    }
};
