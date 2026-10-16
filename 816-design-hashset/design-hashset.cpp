class MyHashSet {
public:
    vector<bool> flag;
    MyHashSet() {
        int val = 1000001;
        flag.resize(val);
    }

    void add(int key) { flag[key] = true; }

    void remove(int key) { flag[key] = false; }

    bool contains(int key) { return flag[key]; }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */