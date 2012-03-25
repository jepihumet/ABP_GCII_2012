#include <QtGui/QMouseEvent>
#include "GLWidget.h"

GLWidget::GLWidget(QWidget *parent) : QGLWidget(parent) {
    setMouseTracking(true);
}

void GLWidget::initializeGL() {

    // ***********************************************************
    // Test de suport OpenGL 2.0 (necess√ ris per carregar shaders)
#ifndef __APPLE__
    glewInit();

    if (glewIsSupported("GL_VERSION_2_0"))
    {
        printf("Ready for OpenGL 2.0\n");
    }
    else
    {
        printf("OpenGL 2.0 not supported\n");
        exit(1);
    }
#endif
    // ****************************************************


    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 1.0);

    //CreaciÛ Objectes

    setFocusPolicy(Qt::StrongFocus);

    // ****************************************************
    // C√ rrega dels shaders (per a les pr√ ctiques 2, 3 i 4)
    bool result;
    result = m_shader.addShaderFromSourceFile( QGLShader::Vertex, "./simple.vert" );
    if ( !result )
        qDebug() << "Vertex: " << m_shader.log();
    else
        qDebug() << "Vertex shader works!";
    result = m_shader.addShaderFromSourceFile( QGLShader::Fragment, "./simple.frag" );
    if ( !result )
        qDebug() << "Fragment: " << m_shader.log();
    else
        qDebug() << "Fragment shader works!";
    result = m_shader.link();
    if ( !result )
        qDebug() << "Link: " << m_shader.log();
    else
        qDebug() << "Shaders link: OK!";
    result = m_shader.bind();
    if ( !result )
        qDebug() << "Bind: " << m_shader.log();
    else
        qDebug() << "Shaders bind: OK!";
    // ****************************************************

}

void GLWidget::resizeGL(int w, int h) {
    int side = qMin(w, h);

    glViewport((w - side) / 2 , (h - side) / 2, side, side);
}

void GLWidget::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClear(GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluPerspective(30.0, 1.0, 5.0, 500.0);

    //Dibuixos

    glFlush();
}

void GLWidget::mousePressEvent(QMouseEvent *event)
{

}

void GLWidget::mouseReleaseEvent(QMouseEvent *event)
{

}

void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
    updateGL();
}

void GLWidget::keyPressEvent(QKeyEvent* event)
{
    updateGL();
}

int GLWidget::GetModeVisualitzacio(void){
    return -1;
}

void GLWidget::SetModeVisualitzacio(int mode){

}
