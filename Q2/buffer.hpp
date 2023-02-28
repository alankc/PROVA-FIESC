#include <vector>
#include <iostream>

using namespace std;

template <class T>
class Buffer {
  private:
    int head;
    int tail;
    int count;
    int max_size;
    vector<T> elements;
  
  public:
    Buffer(int max_size) : max_size(max_size) 
    {
        head = 0;
        tail = -1;
        count = 0;
        elements = vector<T>(max_size);
    }

    void add(T item)
    {
        if (count == max_size)
        {
            cout << "ERROR - FULL BUFFER - " << item << " not added" << endl;
        }
        else
        {
            tail = (tail + 1) % max_size;
            elements[tail] = item;
            count += 1;
        }
    }

    bool remove(T& removed_item)
    {
        if (count == 0)
        {
            cout << "ERROR - EMPTY BUFFER" << endl;
            return false;
        }
        else
        {
            removed_item = elements[head];
            head = (head + 1) % max_size;
            count -= 1;
            return true;
        }
    }

    vector<T> show()
    {
        vector<T> result;
        if (count != 0)
        {
            int id = head;
            for (int i = 0; i < count; i++)
            {
                result.push_back(elements[id]);
                id = (id + 1) % max_size;
            }
        }

        return result;
    }
};