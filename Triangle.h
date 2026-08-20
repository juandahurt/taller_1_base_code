#include "Circle.h"

#ifndef __pujOpenGL__Triangle__h__
#define __pujOpenGL__Triangle__h__

class Triangle: public Circle {
    public:
        Triangle();
        virtual ~Triangle();
    protected:
        virtual void Draw() override;
};

#endif
