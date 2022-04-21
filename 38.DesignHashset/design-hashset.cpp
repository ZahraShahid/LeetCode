// Designed a hashset using the bitset
// https://leetcode.com/problems/design-hashset/
class MyHashSet
{
    // vector<int> v;
    bitset<1000001> bset{0};

public:
    MyHashSet()
    {
    }

    void add(int key)
    {
        // v.push_back(key);
        bset[key] = 1;
    }

    void remove(int key)
    {
        bset[key] = 0;
        // bool present = contains(key);
        // if(present){
        //     v.erase(std::remove(v.begin(), v.end(), key), v.end());
        // }
    }

    bool contains(int key)
    {
        // vector<int>::iterator it;
        // it = find (v.begin(), v.end(), key);
        // if(it != v.end()) return true;
        // return false;
        return bset[key];
    }
};
