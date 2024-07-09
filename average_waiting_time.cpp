double averageWaitingTime(vector<vector<int>> &customers)
{
    double avgWaitTime = 0;
    int n = customers.size();
    int currTime = customers[0][0];
    for (int i = 0; i < n; i++)
    {
        int arrival = customers[i][0];
        int timeCook = customers[i][1];
        currTime = max(currTime, arrival);
        int waitTime = (currTime + timeCook) - arrival;
        currTime += timeCook;
        avgWaitTime += waitTime;
    }
    return avgWaitTime / n;
}