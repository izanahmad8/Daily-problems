void MyStack ::push(int x)
{
    StackNode *st = new StackNode(x);
    st->next = top;
    top = st;
}

// Function to remove an item from top of the stack.
int MyStack ::pop()
{
    if (top == NULL)
    {
        return -1;
    }
    StackNode *st = top;
    int x;
    x = st->data;
    top = st->next;
    delete (st);
    return x;
}