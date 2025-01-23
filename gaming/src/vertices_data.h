#ifndef VERTICES_DATA_H
#define VERTICES_DATA_H

#include <GL/glew.h>

const GLfloat cubeVertices[] = {
    // +z
    -0.5f, -0.5f,  0.5f, 1.0f, 0.0f, 0.0f,
     2.5f, -0.5f,  0.5f, 1.0f, 0.0f, 0.0f,
    -0.5f,  0.5f,  0.5f, 1.0f, 0.0f, 0.0f,
     2.5f,  0.5f,  0.5f, 1.0f, 0.0f, 0.0f,
     // -z
    -0.5f, -0.5f, -0.5f, 1.0f, 1.0f, 0.0f,
     2.5f, -0.5f, -0.5f, 1.0f, 1.0f, 0.0f,
    -0.5f,  0.5f, -0.5f, 1.0f, 1.0f, 0.0f,
     2.5f,  0.5f, -0.5f, 1.0f, 1.0f, 0.0f,
     // +x
     2.5f, -0.5f, -0.5f, 0.0f, 1.0f, 0.0f,
     2.5f, -0.5f,  0.5f, 0.0f, 1.0f, 0.0f,
     2.5f,  0.5f, -0.5f, 0.0f, 1.0f, 0.0f,
     2.5f,  0.5f,  0.5f, 0.0f, 1.0f, 0.0f,
     // -x
    // -0.5f, -0.5f, -0.5f, 0.0f, 1.0f, 1.0f,
    // -0.5f, -0.5f,  0.5f, 0.0f, 1.0f, 1.0f,
    // -0.5f,  0.5f, -0.5f, 0.0f, 1.0f, 1.0f,
    // -0.5f,  0.5f,  0.5f, 0.0f, 1.0f, 1.0f,
     // +y
    // -0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 1.0f,
    //  2.5f,  0.5f, -0.5f, 0.0f, 0.0f, 1.0f,
    // -0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 1.0f,
    //  2.5f,  0.5f,  0.5f, 0.0f, 0.0f, 1.0f,

     // -y // Rectangle a la base
    // -0.5f, -0.5f, -0.5f, 1.0f, 0.0f, 1.0f,
    //  2.5f, -0.5f, -0.5f, 1.0f, 0.0f, 1.0f,
    // -0.5f, -0.5f,  0.5f, 1.0f, 0.0f, 1.0f,
    //  2.5f, -0.5f,  0.5f, 1.0f, 0.0f, 1.0f,

    // Base 1
    -0.10f, -0.5f, -0.25f, 1.0f, 0.0f, 1.0f,
     0.2f, -0.5f, -0.25f, 1.0f, 0.0f, 1.0f,
    -0.10f, -0.5f,  0.25f, 1.0f, 0.0f, 1.0f,
     0.2f, -0.5f,  0.25f, 1.0f, 0.0f, 1.0f,

    // -0.30f, -0.5f, -0.25f, 1.0f, 0.0f, 0.0f,
    //  -0.4f, -0.5f, -0.25f, 1.0f, 0.0f, 0.0f,
    // -0.30f, -0.5f,  0.25f, 1.0f, 0.0f, 0.0f,
    //  -0.4f, -0.5f,  0.25f, 1.0f, 0.0f, 0.0f,

    0.60f, 0.25f, -0.25f, 1.0f, 0.0f, 0.0f,
    1.0f, 0.25f, -0.25f, 1.0f, 0.0f, 0.0f,
    0.6f, 0.25f,  0.25f, 1.0f, 0.0f, 0.0f,
    1.0f, 0.25f,  0.25f, 1.0f, 0.0f, 0.0f,

    1.5f, 0.25f, -0.25f, 1.0f, 0.0f, 0.0f,
    2.1f, 0.25f, -0.25f, 1.0f, 0.0f, 0.0f,
    1.5f, 0.25f,  0.25f, 1.0f, 0.0f, 0.0f,
    2.1f, 0.25f,  0.25f, 1.0f, 0.0f, 0.0f,
};

const GLubyte cubeIndexes[] = {
     0,  1,  2,
     1,  3,  2,
    
     4,  5,  6,
     5,  7,  6,
    
     8,  9, 10,
     9, 11, 10,
    
    12, 13, 14,
    13, 15, 14,
    
    16, 17, 18,
    17, 19, 18,
    
    20, 21, 22,
    21, 23, 22,

    23, 24, 25,
    24, 28, 25
};

#endif // VERTICES_DATA_H
