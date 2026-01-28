#pragma once
#include <iostream>

template <typename T>
class CandyBox {
private:
    T* items;
    int capacity;
    int count;

public:
    CandyBox(int size) : items(nullptr), capacity(size), count(0) {
        items = new T[capacity];
    }

    ~CandyBox() {
        delete[] items;
        items = nullptr;
    }

    bool addItem(const T& newItem) {
        if (count >= capacity) return false;
        items[count++] = newItem;
        return true;
    }

    bool removeItem(int index) {
        if (index < 0 || index >= count) return false;

        // replace removed with last (O(1))
        items[index] = items[count - 1];
        count--;
        return true;
    }

    void displayItems() const {
        for (int i = 0; i < count; i++) {
            std::cout << items[i] << std::endl;
        }
    }
};
