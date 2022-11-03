void countOddEven(int arr[], int sizeof_array)
{
    long cntodd = 0;
    long cnteven = 0;
    for (int i = 0; i < sizeof_array; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cnteven++;
        }
        else
        {
            cntodd++;
        }
    }
    cout << cntodd << " " << cnteven << endl;
}