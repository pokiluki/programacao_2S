#include "alist.h"


void append(alist* a, const alist* b) {
    if (a->size == 0) {
        // If a is empty, simply copy the elements from b to a.
        a->size = b->size;
        a->elements = new int[a->size];
        std::copy(b->elements, b->elements + b->size, a->elements);
    } else if (b->size > 0) {
        // If both a and b are non-empty, create a new array with size a->size + b->size
        int* newElements = new int[a->size + b->size];
        
        // Copy the elements from a to the new array
        std::copy(a->elements, a->elements + a->size, newElements);
        
        // Copy the elements from b to the new array, starting from the end of a's elements
        std::copy(b->elements, b->elements + b->size, newElements + a->size);
        
        // Update a's size and elements
        a->size += b->size;
        delete[] a->elements;
        a->elements = newElements;
    }
}


int main(){ alist* a = empty();
  const int nB = 2;
  int eB[nB] = { 1, 2 };
  const alist* b = build(nB, eB);
  append(a, b);
  print(a);
  destroy(a);
  destroy(b);  
  return 0;}