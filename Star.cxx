// -------------------------------------------------------------------------
// @author Leonardo Florez-Valencia (florez-l@javeriana.edu.co)
// -------------------------------------------------------------------------

#include "Star.h"
#include <GL/gl.h>

// -------------------------------------------------------------------------
Star::
Star( float r )
  : Triangle( ),
    Radius( r )
{
}

// -------------------------------------------------------------------------
Star::
~Star( )
{
}

// -------------------------------------------------------------------------
void Star::
Draw ()
{
    glScalef( this->Radius, this->Radius, 1 );
    this->Triangle::Draw( );   
    glRotatef( 180, 0, 0, 1 );
    this->Triangle::Draw( );  
}

// eof - Star.cxx
