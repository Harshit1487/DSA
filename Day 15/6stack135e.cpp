//https://www.geeksforgeeks.org/implement-two-stacks-in-an-array/


void twoStacks :: push1(int x)
{
    if(size-top1>1){
        top1++;
        arr[top1]=x;
    }
    else
        cout << "Stack Overflow" << endl;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    if(top2>0){
        top2--;
        arr[top2]=x;
    }
    else
        cout << "Stack Overflow" << endl;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(top1!=-1){
        int r = arr[top1];
        top1--;
        return r;
    }
    else return -1;
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    if(top2!=size){
        int r = arr[top2];
        top2++;
        return r;
    }
    else return -1;
}
