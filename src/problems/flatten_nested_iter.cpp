#include <vector>

using namespace std;

// https://leetcode.com/problems/flatten-nested-list-iterator

// This is the interface that allows for creating nested lists.
// You should not implement it, or speculate about its implementation
class NestedInteger {
public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;

    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;

    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger> &getList() const;
};


class NestedIterator {
private:
    vector<int> flatten;
    int index = 0;

    void process(const NestedInteger &i) {
        if (i.isInteger()) {
            flatten.push_back(i.getInteger());
        } else {
            for (auto &item: i.getList())
                process(item);
        }
    }

public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        for (auto &item: nestedList)
            process(item);
    }

    int next() {
        return flatten[index++];
    }

    bool hasNext() {
        return index < flatten.size();
    }
};

int main() {

}