#include<glut.h>
#include<gl/GL.h>
#include<gl/GLU.h>
#include<stdlib.h> //exit ������ ���� ���̺귯��

void MyDisplay() {	//���÷��� �ݹ��Լ�
	glClear(GL_COLOR_BUFFER_BIT);	//1.GL ���º��� ����
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glEnd();
	glFlush();
}

void MyKeyboard(unsigned char KeyPressed, int X, int Y) {
	switch (KeyPressed) {
	case 'Q':
		exit(0); break;
	case 'q':
		exit(0); break;
	case 27:
		exit(0); break;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(300, 300);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGL Drawing Example");
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);
	glutMainLoop();
	return 0;
}