#pragma once

#include <string>

#include "generator.hpp"

class Mutation {
public:
    Mutation(Generator* generator);

    void operator()(BotLander& solution) const;

private:
    Generator* generator;
};
