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
    //  // +x
     2.5f, -0.5f, -0.5f, 0.0f, 1.0f, 0.0f,
     2.5f, -0.5f,  0.5f, 0.0f, 1.0f, 0.0f,
     2.5f,  0.5f, -0.5f, 0.0f, 1.0f, 0.0f,
     2.5f,  0.5f,  0.5f, 0.0f, 1.0f, 0.0f,
     // -x
    -0.5f, -0.5f, -0.5f, 0.0f, 1.0f, 1.0f,
    -0.5f, -0.5f,  0.5f, 0.0f, 1.0f, 1.0f,
    -0.5f,  0.5f, -0.5f, 0.0f, 1.0f, 1.0f,
    -0.5f,  0.5f,  0.5f, 0.0f, 1.0f, 1.0f,
    //  // +y
    -0.5f,  0.5f, -0.5f, 0.0f, 0.0f, 1.0f,
     2.5f,  0.5f, -0.5f, 0.0f, 0.0f, 1.0f,
    -0.5f,  0.5f,  0.5f, 0.0f, 0.0f, 1.0f,
     2.5f,  0.5f,  0.5f, 0.0f, 0.0f, 1.0f,

     // -y // Rectangle a la base
    // -0.5f, -0.5f, -0.5f, 1.0f, 0.0f, 1.0f,
    //  2.5f, -0.5f, -0.5f, 1.0f, 0.0f, 1.0f,
    // -0.5f, -0.5f,  0.5f, 1.0f, 0.0f, 1.0f,
    //  2.5f, -0.5f,  0.5f, 1.0f, 0.0f, 1.0f,

    // Base 1
    -0.20f, 0.65f, -0.25f, 1.0f, 0.0f, 1.0f,
     0.2f, 0.65f, -0.25f, 1.0f, 0.0f, 1.0f,
    -0.20f, 0.65f,  0.25f, 1.0f, 0.0f, 1.0f,
     0.2f, 0.65f,  0.25f, 1.0f, 0.0f, 1.0f,

    -0.20f, -0.5f,  0.25f, 1.0f, 0.0f, 1.0f,
     0.2f, -0.5f,  0.25f, 1.0f, 0.0f, 1.0f,
    -0.20f,  0.65f,  0.25f, 1.0f, 0.0f, 0.0f,
     0.2f,  0.65f,  0.25f, 1.0f, 0.0f, 0.0f,

    -0.20f, -0.5f, -0.25f, 1.0f, 1.0f, 0.0f,
     0.2f, -0.5f, -0.25f, 1.0f, 1.0f, 0.0f,
    -0.2f,  0.65f, -0.25f, 1.0f, 1.0f, 0.0f,
     0.2f,  0.65f, -0.25f, 1.0f, 1.0f, 0.0f,

    -0.2f, -0.5f, -0.25f, 0.0f, 1.0f, 1.0f,
    -0.2f, -0.5f,  0.25f, 0.0f, 1.0f, 1.0f,
    -0.2f,  0.65f, -0.25f, 0.0f, 1.0f, 1.0f,
    -0.2f,  0.65f,  0.25f, 0.0f, 1.0f, 1.0f,

    0.2f, -0.5f, -0.25f, 0.0f, 1.0f, 1.0f,
    0.2f, -0.5f,  0.25f, 0.0f, 1.0f, 1.0f,
    0.2f,  0.65f, -0.25f, 0.0f, 1.0f, 1.0f,
    0.2f,  0.65f,  0.25f, 0.0f, 1.0f, 1.0f,


    // BAse 2
    0.60f, 0.65f, -0.25f, 1.0f, 0.0f, 0.0f,
    1.0f, 0.65f, -0.25f, 1.0f, 0.0f, 0.0f,
    0.6f, 0.65f,  0.25f, 1.0f, 0.0f, 0.0f,
    1.0f, 0.65f,  0.25f, 1.0f, 0.0f, 0.0f,

    0.6f, -0.5f,  0.25f, 1.0f, 0.0f, 1.0f,
     1.0f, -0.5f,  0.25f, 1.0f, 0.0f, 1.0f,
    0.6f,  0.65f,  0.25f, 1.0f, 0.0f, 0.0f,
     1.0f,  0.65f,  0.25f, 1.0f, 0.0f, 0.0f,

    0.6f, -0.5f, -0.25f, 1.0f, 1.0f, 0.0f,
    1.0f, -0.5f, -0.25f, 1.0f, 1.0f, 0.0f,
    0.6f,  0.65f, -0.25f, 1.0f, 1.0f, 0.0f,
    1.0f,  0.65f, -0.25f, 1.0f, 1.0f, 0.0f,

    1.0f, -0.5f, -0.25f, 0.0f, 1.0f, 1.0f,
    1.0f, -0.5f,  0.25f, 0.0f, 1.0f, 1.0f,
    1.0f,  0.65f, -0.25f, 0.0f, 1.0f, 1.0f,
    1.0f,  0.65f,  0.25f, 0.0f, 1.0f, 1.0f,

    0.6f, -0.5f, -0.25f, 0.0f, 1.0f, 1.0f,
    0.6f, -0.5f,  0.25f, 0.0f, 1.0f, 1.0f,
    0.6f,  0.65f, -0.25f, 0.0f, 1.0f, 1.0f,
    0.6f,  0.65f,  0.25f, 0.0f, 1.0f, 1.0f,

    // BAse 3
    1.5f, 0.65f, -0.25f, 1.0f, 0.0f, 0.0f,
    2.1f, 0.65f, -0.25f, 1.0f, 0.0f, 0.0f,
    1.5f, 0.65f,  0.25f, 1.0f, 0.0f, 0.0f,
    2.1f, 0.65f,  0.25f, 1.0f, 0.0f, 0.0f,

    1.5f, -0.5f,  0.25f, 1.0f, 0.0f, 1.0f,
    2.1f, -0.5f,  0.25f, 1.0f, 0.0f, 1.0f,
    1.5f,  0.65f,  0.25f, 1.0f, 0.0f, 0.0f,
    2.1f,  0.65f,  0.25f, 1.0f, 0.0f, 0.0f,

    1.5f, -0.5f, -0.25f, 1.0f, 1.0f, 0.0f,
    2.1f, -0.5f, -0.25f, 1.0f, 1.0f, 0.0f,
    1.5f,  0.65f, -0.25f, 1.0f, 1.0f, 0.0f,
    2.1f,  0.65f, -0.25f, 1.0f, 1.0f, 0.0f,

    2.1f, -0.5f, -0.25f, 0.0f, 0.0f, 1.0f,
    2.1f, -0.5f,  0.25f, 0.0f, 0.0f, 1.0f,
    2.1f,  0.65f, -0.25f, 0.0f, 0.0f, 1.0f,
    2.1f,  0.65f,  0.25f, 0.0f, 0.0f, 1.0f,

    1.5f, -0.5f, -0.25f, 0.0f, 0.0f, 1.0f,
    1.5f, -0.5f,  0.25f, 0.0f, 0.0f, 1.0f,
    1.5f,  0.65f, -0.25f, 0.0f, 0.0f, 1.0f,
    1.5f,  0.65f,  0.25f, 0.0f, 0.0f, 1.0f,
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

    24, 25, 26,
    25, 27, 26,

    28, 29, 30,
    29, 31, 30,

    32, 33, 34,
    33, 35, 34,

    36, 37, 38,
    37, 39, 38,

    40, 41, 42,
    41, 43, 42,

    44, 45, 46,
    45, 47, 46,

    48, 49, 50,
    49, 51, 50,

    52, 53, 54,
    53, 55, 54,

    56, 57, 58,
    57, 59, 58,

    60, 61, 62,
    61, 63, 62,

    64, 65, 66,
    65, 67, 66,

    68, 69, 70,
    69, 71, 70,

    72, 73, 74,
    73, 75, 74,

    76, 77, 78,
    77, 79, 78,

    80, 81, 82,
    81, 83, 82
};

#endif // VERTICES_DATA_H
