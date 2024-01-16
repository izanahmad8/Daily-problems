bool isHappy(int n)
{
    unordered_set<int> st;
    while (true)
    {
        if (n == 1)
        {
            return true;
        }
        if (st.find(square(n)) == st.end())
        {
            st.insert(square(n));
        }
        else
        {
            return false;
        }
        n = square(n);
    }
}
int square(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum += rem * rem;
        n /= 10;
    }
    return sum;
}