int leastInterval(vector<char> &tasks, int n)
{
    int freq[26] = {0};
    int max_freq = 0, size = tasks.size();
    for (auto i : tasks)
    {
        int count = ++freq[i - 'A'];
        max_freq = max(max_freq, count);
    }
    int num_of_max_freq = count(freq, freq + 26, max_freq);
    int time = (max_freq - 1) * (n + 1) + num_of_max_freq;
    return max(time, size);
}