#include <iostream>
using namespace std;

class kQueue
{
public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int free;

    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;
        free = 0;
        front = new int[n];
        rear = new int[n];

        for (int i = 0; i < n; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];

        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }

        next[n - 1] = -1;
        arr = new int[n];
    }

    void enqueue(int data, int qn)
    {
        // Overflow condition
        if (free == -1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        else
        {
            int index = free;
            free = next[index];
            if (front[qn - 1] == -1)
            {
                front[qn - 1] = index;
            }
            else
            {
                next[rear[qn - 1]] = index;
            }
            next[index] = -1;
            rear[qn - 1] = index;
            arr[index] = data;
        }
    }

    int dequeue(int qn)
    {
        if (front[qn - 1] == -1)
        {
            cout << "Queue underflow" << endl;
            return -1;
        }
        else
        {
            int index = front[qn - 1];
            front[qn - 1] = next[index];
            next[index] = free;
            free = index;
            return arr[index];
        }
    }
};

int main()
{
    kQueue q(10, 3);

    q.enqueue(5, 1);
    q.enqueue(10, 1);
    q.enqueue(100, 2);
    q.enqueue(15, 1);
    q.enqueue(500, 3);

    // dequeue driver
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(3) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;
}