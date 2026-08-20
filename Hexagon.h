// -------------------------------------------------------------------------
// @author Leonardo Florez-Valencia (florez-l@javeriana.edu.co)
// -------------------------------------------------------------------------
#ifndef __pujOpenGL__Hexagon__h__
#define __pujOpenGL__Hexagon__h__

#include "Circle.h"

/**
 */
class Hexagon
  : public Circle
{
public:
  Hexagon( float r );
  virtual ~Hexagon( ) override;

  virtual void Draw( ) override;

protected:
  float Radius { 1 };
};

#endif // __pujOpenGL__Hexagon__h__

// eof - Hexagon.h

