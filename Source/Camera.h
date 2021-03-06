#ifndef CAMERA_H_INCLUDED
#define CAMERA_H_INCLUDED

#include "Entity/Entity.h"
#include "OpenGL/GL_Maths.h"

class Camera : public Entity
{
    public:
        void mouseInput     ();
        void movePosition   (const Vector3& amount);

};

#endif // CAMERA_H_INCLUDED
