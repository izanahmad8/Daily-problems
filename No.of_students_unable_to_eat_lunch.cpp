int countStudents(vector<int> &students, vector<int> &sandwiches)
{
    vector<int> count(2, 0);
    int n = students.size();
    for (auto i : students)
    {
        count[i]++;
    }
    for (int i = 0; i < n; i++)
    {
        int j = sandwiches[i];
        if (count[j] == 0)
        {
            return n - i;
        }
        count[j]--;
    }
    return 0;
}