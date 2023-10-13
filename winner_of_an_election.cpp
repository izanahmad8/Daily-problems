vector<string> winner(string arr[], int n)
{
    map<string, int> m;
    vector<string> v;
    int max = 0;
    string name = "";
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto i : m)
    {
        if (i.second > max)
        {
            max = i.second;
            name = i.first;
        }
    }
    v.push_back(name);
    v.push_back(to_string(max));
    return v;
}