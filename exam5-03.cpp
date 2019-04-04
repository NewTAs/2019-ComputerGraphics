#include<glut.h>
#include<gl/GL.h>
#include<gl/GLU.h>

void MyDisplay() {};
void MyKeyboard(char key, int x, int y) {};
void MyMouse(int button, int state, int x, int y) {};

int main()
{	
	Initialize and Open Window;
	Initialize OpenGL State;
	Register Input Callback Functions;
	{
		glutDisplayFunc(MyDisplay);
		glutKeyboardFunc(MyKeyboard);
		glutMouseFunc(MyMouse);
	}
	Enter Event Processing Loop;
}