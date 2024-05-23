#include "Stack.h"

template<typename T>
Stack<T>::Stack() {
}

template<typename T>
size_t Stack<T>::size() const {
    return elements.size();
}

template<typename T>
bool Stack<T>::peek(T& elem) const {
    size_t size = elements.size();
    if (!size) return false;

    elem = elements[size - 1];
    return true;
}

template<typename T>
bool Stack<T>::pop(T& elem) {
    size_t size = elements.size();
    if (!size) return false;

    elem = elements[size - 1];
    elements.pop_back();
    return true;
}

template<typename T>
void Stack<T>::push(const T& elem) {
    elements.push_back(elem);
}
