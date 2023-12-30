string isSubset(int a1[], int a2[], int n, int m)
{
    sort(a1, a1 + n);
    sort(a2, a2 + m);
    int count = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a1[i] == a2[j])
        {
            i++;
            j++;
            count++;
        }
        else
        {
            i++;
        }
    }
    return count == m ? "Yes" : "No";
}