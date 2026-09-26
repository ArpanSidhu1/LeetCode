#include <vector>
#include <cstdlib>

class RandomizedSet {
public: 
    std::vector<int> st;

    // Recursive function to check if an element exists and get its index
    void checker(int val, int n, bool &flag, int &index) {
        if (n == 0) return;
        
        int t = st[n - 1];
        checker(val, n - 1, flag, index);

        if (t == val) {
            flag = true;
            index = n - 1;
        }
    }

    // Function to insert an element
    bool insert(int val) {
        int n = st.size();
        bool flag = false;
        int index = 0;
        checker(val, n, flag, index);

        if (!flag) {
            st.push_back(val);
            return true;
        }

        return false;
    }

    // Function to remove an element
    bool remove(int val) {
        int n = st.size();
        bool flag = false;
        int index = 0;
        checker(val, n, flag, index);

        if (flag) {
            st.erase(st.begin() + index);
            return true;
        }

        return false;
    }

    // Function to get a random element
    int getRandom() {
        int n = st.size();
        int randomIndex = rand() % n;
        return st[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
