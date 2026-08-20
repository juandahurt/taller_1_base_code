// -------------------------------------------------------------------------
// @author Leonardo Florez-Valencia (florez-l@javeriana.edu.co)
// -------------------------------------------------------------------------

#include "Hexagon.h"
#include <GL/gl.h>

// -------------------------------------------------------------------------
Hexagon::
Hexagon( float r )
  : Circle( 6 ),
    Radius( r )
{
}

// -------------------------------------------------------------------------
Hexagon::
~Hexagon( )
{
}

// -------------------------------------------------------------------------
void Hexagon::
Draw( )
{
  glScalef( this->Radius, this->Radius, 1 );
  this->Circle::Draw( );
}

// eof - Body.cxx

