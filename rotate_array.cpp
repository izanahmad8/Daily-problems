void rotateArr(vector<int> &arr, int d)
{
    d = d % arr.size();
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}
