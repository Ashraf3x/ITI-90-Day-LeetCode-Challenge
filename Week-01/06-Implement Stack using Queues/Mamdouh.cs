// Author: Ahmed Mamdouh
// Link: https://leetcode.com/problems/implement-queue-using-stacks
// Time: O(n) | Space: O(n)



public class MyStack
        {
            Queue<int> myQueue;
            int top;
            
            public MyStack()
            {
                myQueue = new();
            }

            public void Push(int x)
            {
                myQueue.Enqueue(x);
                top = x;
            }

            public int Pop()
            {
                if (!Empty())
                {
                    int counter = myQueue.Count();
                    for (int i = 0; i < counter - 2; i++)
                    {
                        myQueue.Enqueue(myQueue.Dequeue());
                    }
                    top = myQueue.Dequeue();
                    myQueue.Enqueue(top);
                    return myQueue.Dequeue();
                }
                else return -1; //this means error
            }

            public int Top()
            {
                return top; 
            }

            public bool Empty()
            {
                return myQueue.Count == 0;
            }
        }
