class MyHashMap {
public:
    vector<int>x;
    MyHashMap():x(1000001,-1) {
    }
    
    void put(int key, int value) {
        x[key] = value;
    }
    
    int get(int key) {
        return x[key];
    }
    
    void remove(int key) {
        x[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */