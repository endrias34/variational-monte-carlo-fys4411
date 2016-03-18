#pragma once
#include "WaveFunctions/multiparticleho.h"

class MultiparticleHOInteracting : public MultiparticleHO {
public:
    MultiparticleHOInteracting(class System* system, double alpha, double gamma);
    double evaluate(class Particle* particles);

private:
    double m_gamma  = 0;
    double m_a      = 0;
    double m_a2     = 0;
};