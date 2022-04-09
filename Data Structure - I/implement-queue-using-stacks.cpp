// Queue implemented using two stacks
// https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue
{
private:
    stack<int> s1;
    stack<int> s2;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        int val = peek();
        s2.pop();
        return val;
    }

    int peek()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty()
    {
        return s1.empty() && s2.empty();
    }
};