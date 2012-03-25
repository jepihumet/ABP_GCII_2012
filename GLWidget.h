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
};

#endif  /* _GLWIDGET_H */
