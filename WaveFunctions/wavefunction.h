#pragma once


class WaveFunction {
public:
    WaveFunction(class System* system);
    int     getNumberOfParameters() { return m_numberOfParameters; }
    double* getParameters()         { return m_parameters; }
    virtual double evaluate(class Particle* particles) = 0;
    virtual double computeDoubleDerivative(class Particle* particles) = 0;

protected:
    int     m_numberOfParameters;
    double* m_parameters;
    class System* m_system;
};
