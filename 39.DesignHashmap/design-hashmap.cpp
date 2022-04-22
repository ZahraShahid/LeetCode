// Designs a hashmap with chaining
// https://leetcode.com/problems/design-hashmap/

class MyHashMap
{
    int data[1000001];

public:
    MyHashMap()
    {
        fill(data, data + 1000000, -1);
    }

    void put(int key, int value)
    {
        data[key] = value;
    }

    int get(int key)
    {
        return data[key];
    }

    void remove(int key)
    {
        data[key] = -1;
    }
};
