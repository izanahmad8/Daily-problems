long long dividePlayers(vector<int> &skill)
{
    int n = skill.size();
    long long ans = 0;
    int sum = accumulate(skill.begin(), skill.end(), 0);
    int team_size = sum / (n / 2);
    sort(skill.begin(), skill.end());
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int div = skill[i] + skill[j];
        if (div != team_size)
            return -1;
        ans += skill[i] * skill[j];
        i++;
        j--;
    }
    return ans;
}