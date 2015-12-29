#pragma once

#include <iostream>
#include <string>
#include "stack.h"

using namespace std;
int Size(string str); 
class arithmetic {
  public:
    static string arithmetic_notation(string);
    static double calculation(string, double *, int);
};
