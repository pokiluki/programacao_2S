#include "alist.h"

void append(alist* a, const alist* b){
    
    
    if (a->size == 0)
    {
        a->size = b->size;
        a->elements = new int[a->size];
        for(int i = 0; i < b->size; i++)
        {
            a->elements[i] = b->elements[i];
        }
    }
    
    else if(b->size > 0)
    {
        int* newElements = new int[a->size + b->size];
        for(int i = 0; i < a->size; i++)
        {
            newElements[i] = a->elements[i];
        }
        for(int i = 0; i < b->size; i++)
        {
            newElements[a->size + i] = b->elements[i];
        }
        a->size += b->size;
        delete[] a->elements;
        a->elements = newElements; 
    }
    return;
}

int main(){ alist* a = empty();
  const alist* b = empty();
  append(a, b);
  print(a);
  destroy(a);
  destroy(b); 
  return 0;}