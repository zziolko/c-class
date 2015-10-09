#include <stdio.h>

void updateParticleVelocities(double x, double y, double z, double u, double v, double w, double dt) {
    x = x + dt*u;
    y = y + dt*v;
    z = z + dt*w;
}

int main(){
    double x, y, z, u, v, w;
    double dt;
    x = 0;
    y = 0;
    z = 0;
    u = 2;
    v = 3;
    w = 4;
    dt = 0.1;
    updateParticleVelocities(x, y, z, u, v, w, dt);
}
