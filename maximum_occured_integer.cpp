int maxOccured(int n, int l[], int r[], int maxx)
{

    int freq[maxx + 2] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[l[i]]++;
        freq[r[i] + 1]--;
    }
    int maxi = freq[0];
    int res = 0;
    for (int i = 1; i <= maxx; i++)
    {
        freq[i] += freq[i - 1];
        if (freq[i] > maxi)
        {
            maxi = freq[i];
            res = i;
        }
    }
    return res;
}