void add_to_vector(vector<int> &A, int x)
{
    A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
    sort(A.begin(), A.end());
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
    reverse(A.begin(), A.end());
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
    return A.size();
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A)
{
    sort(A.begin(), A.end(), greater<int>());
}

/*prints space separated
elements of vector A*/
void print_vector(vector<int> &A)
{
    for (auto i : A)
    {
        cout << i << " ";
    }
}