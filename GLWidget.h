#ifndef _GLWIDGET_H
#define _GLWIDGET_H

#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
#ifdef _WIN32
#include <windows.h>
#endif
#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glu.h>
#endif
#include <QtOpenGL/QGLWidget>
#include <QGLShaderProgram>
#include "constants.h"
#include "Model.h"
#include "Util.h"

//////////////////////////// GLC specific///////////////////////////////////////
// The factory
#include <GLC_Factory>
// Light
#include <GLC_Light>
// Material
#include <GLC_Material>
// The Viewport with a default camera
#include <GLC_Viewport>
// The World which manage GLC_object
#include <GLC_World>
// The Mover controller is used to change the point of view
#include <GLC_MoverController>


class GLWidget : public QGLWidget {

    Q_OBJECT // must include this if you use Qt signals/slots

public:
    GLWidget(QWidget *parent = NULL);
	int GetModeVisualitzacio(void);
	void SetModeVisualitzacio(int mode);

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);

private:
    QGLShaderProgram m_shader;
    GLC_Light m_Light;
    GLC_World m_World;
    GLC_Viewport m_GlView;
    GLC_MoverController m_MoverController;
};

#endif  /* _GLWIDGET_H */
