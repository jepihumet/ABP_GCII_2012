#ifndef _MODEL_H
#define _MODEL_H

#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#ifdef _WIN32
#include <windows.h>
#endif
#include <GL/gl.h>
#include <GL/glu.h>
#endif
#include "stdio.h"
#include "Game.h"

class Model
{
public:
	Model();
	~Model();
    void Dibuixa();
private:

};
#endif /* _MODEL_H */
