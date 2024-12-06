int hIndex(vector<int> &citations)
{
    int n = citations.size();
    sort(citations.begin(), citations.end(), greater<int>());
    int h_index = 0;
    while (h_index < n && citations[h_index] > h_index)
    {
        h_index++;
    }
    return h_index;
}