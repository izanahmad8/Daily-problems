class Solution
{
public:
    int search(int A[], int N)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < N; i++)
        {
            m[A[i]]++;
        }
        for (auto i : m)
        {
            if (i.second == 1)
            {
                return i.first;
            }
        }
        return -1;
    }
};