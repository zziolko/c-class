#include <stdio.h>

void updateParticleVelocities(x, y, z, u, v, w, dt) {
    x = x + dt*u;
    y = y + dt*v;
    z = z + dt*w;
   
}

int main(){
    double x, y, z, u, v, w;
    double dt;
    x1 = 0;
    y1 = 0;
    z1 = 0;
    u2 = 2;
    v2 = 3;
    w2 = 4;
    dt = 0.1;
    updateParticleVelocities(x, y, z, u, v, w, dt);
}
