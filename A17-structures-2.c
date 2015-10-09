#include <stdio.h>

struct Particle{
    double x;
    double y;
    double z;
    double u;
    double v;
    double w;
};

typedef struct Particle Particle;

Particle updateParticleVelocities(Particle particle, double dt) {
    particle.x = particle.x + dt*particle.u;
    particle.y = particle.y + dt*particle.v;
    particle.z = particle.z + dt*particle.w;
    return particle;
}

int main() {
    Particle a = {0.0, 0.0, 0.0, 2.0, 3.0, 4.0};
    printf("%f\n", a.x);
    a = updateParticleVelocities(a, 1.0);
    printf("%f\n", a.x);
}
