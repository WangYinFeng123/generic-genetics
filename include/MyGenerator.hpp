#pragma once

#include <string>

static const int NB = 1000;
static const std::string alphanum = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz .,'";

class MyGenerator {
  public:
    MyGenerator(int);
    std::string operator()() const;
    static int SIZE;
};
