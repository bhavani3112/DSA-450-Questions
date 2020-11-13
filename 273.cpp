class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};

/* The method push to push element into the stack */
void MyStack :: push(int x)
{
    if(top==9999)
    return;
    arr[++top]=x;
}

/*The method pop which return the element 
  poped out of the stack*/
int MyStack :: pop()
{
    if(top==-1)
    return -1;
    int x = arr[top];
    top--;
    return x;
}
bool MyStack :: empty()
{
    if(top==-1)
       return true;
    return false;
}
