// -------------------------------------------------------------------------
// @author Leonardo Florez-Valencia (florez-l@javeriana.edu.co)
// -------------------------------------------------------------------------
#ifndef __pujOpenGL__Star__h__
#define __pujOpenGL__Star__h__

#include "Triangle.h"

class Star
  : public Triangle
{
public:
  Star( float r );
  virtual ~Star( ) override;

  virtual void Draw( ) override;

protected:
  float Radius { 1 };
};

#endif // __pujOpenGL__Star__h__

// eof - Star.h
