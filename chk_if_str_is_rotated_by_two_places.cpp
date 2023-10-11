string leftRotate(string str)
{
    reverse(str.begin(), str.begin() + 2);
    reverse(str.begin() + 2, str.end());
    reverse(str.begin(), str.end());
    return str;
}
string rightRotate(string str)
{
    reverse(str.begin(), str.begin() + str.size() - 2);
    reverse(str.begin() + str.size() - 2, str.end());
    reverse(str.begin(), str.end());
    return str;
}
bool isRotated(string str1, string str2)
{
    if (str1.size() == 1 && str1 != str2)
        return false;
    if (str1.size() == 1 && str1 == str2)
        return true;
    if (leftRotate(str1) == str2)
        return true;
    else if (rightRotate(str1) == str2)
        return true;
    else
        return false;
}