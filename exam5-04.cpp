#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

void MyDisplay() {	//���÷��� �ݹ��Լ�
	glClear(GL_COLOR_BUFFER_BIT);	//1.GL ���º��� ����
	glViewport(0, 0, 300, 300);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);	//2. �Է� �⺻��� ����
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);	//GLUT ������ �Լ�
	glutInitDisplayMode(GLUT_RGB); //�����츦 � ���·� ������ ���ΰ�
	glutInitWindowSize(400, 300); //glutInitWindowSize(300, 300);
	glutInitWindowPosition(120, 55); //glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGL Sample Drawing");

	glClearColor(0.0, 0.0, 0.0, 1.0);	//4. GL ���º��� ����
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	glutDisplayFunc(MyDisplay);	//GLUT �ݹ��Լ� ���
	glutMainLoop();	//�̺�Ʈ ���� ����
	return 0;
}