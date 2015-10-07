#include <stdio.h>

typedef struct{
    double x;
    double y;
    double z;
    double u;
    double v;
    double w;
} Particle;

void updateParticleVelocities(Particle* particle, double dt) {
    (*particle).x = (*particle).x + dt*(*particle).u;
    (*particle).y = (*particle).y + dt*(*particle).v;
    (*particle).z = (*particle).z + dt*(*particle).w;
}

int main(){
    Particle a = {0, 0, 0, 1, 2, 3};
    printf("%f\n", a.x);
    updateParticleVelocities(&a, 0.1);
    printf("%f\n", a.x);
    updateParticleVelocities(&a, 0.1);
    printf("%f\n", a.x);
}
