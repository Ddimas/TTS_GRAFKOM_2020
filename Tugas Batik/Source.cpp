#include <iostream>
#include <GL/glut.h>

void garis() {
	glColor3ub(34, 139, 35);
	glBegin(GL_POLYGON);
	glVertex2i(150, 35);
	glVertex2i(35, 150);
	glVertex2i(35, 215);
	glVertex2i(215, 35);
	glEnd();

	glColor3ub(34, 139, 35);
	glBegin(GL_POLYGON);
	glVertex2i(300, 35);
	glVertex2i(35, 300);
	glVertex2i(35, 365);
	glVertex2i(365, 35);
	glEnd();

	glColor3ub(34, 139, 35);
	glBegin(GL_POLYGON);
	glVertex2i(450, 35);
	glVertex2i(35, 450);
	glVertex2i(35, 515);
	glVertex2i(515, 35);
	glEnd();

	glColor3ub(34, 139, 35);
	glBegin(GL_POLYGON);
	glVertex2i(565, 70);
	glVertex2i(70, 565);
	glVertex2i(140, 565);
	glVertex2i(565, 135);
	glEnd();

	glColor3ub(34, 139, 35);
	glBegin(GL_POLYGON);
	glVertex2i(564, 220);
	glVertex2i(216, 565);
	glVertex2i(288, 565);
	glVertex2i(564, 285);
	glEnd();

	glColor3ub(34, 139, 35);
	glBegin(GL_POLYGON);
	glVertex2i(564, 370);
	glVertex2i(369, 565);
	glVertex2i(435, 565);
	glVertex2i(564, 435);
	glEnd();
	glFlush();
}
void figura() {
	glColor3ub(255, 255, 255);
	glBegin(GL_POLYGON);
	glVertex2i(20, 20);
	glVertex2i(20, 580);
	glVertex2i(580, 580);
	glVertex2i(580, 20);
	glEnd();


	glColor3ub(143, 188, 144);
	glBegin(GL_POLYGON);
	glVertex2i(35, 35);
	glVertex2i(35, 565);
	glVertex2i(565, 565);
	glVertex2i(565, 35);
	glEnd();
	glFlush();
}
void rantai1() {
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(160, 40);
	glEnd();
	
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(150, 50);
	glEnd();
	
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(140, 60);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(130, 70);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(120, 80);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(110, 90);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(100, 100);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(90, 110);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(80, 120);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(70, 130);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(60, 140);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(50, 150);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(40, 160);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(190, 40);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(180, 50);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(170, 60);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(160, 70);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(150, 80);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(140, 90);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(130, 100);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(120, 110);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(110, 120);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(100, 130);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(90, 140);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(80, 150);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(70, 160);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(60, 170);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(50, 180);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(40, 190);
	glEnd();
	/// <summary>
	/// slide kecil
	/// </summary>

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(160, 40);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(150, 50);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(140, 60);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(130, 70);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(120, 80);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(110, 90);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(100, 100);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(90, 110);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(80, 120);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(70, 130);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(60, 140);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(50, 150);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(40, 160);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(190, 40);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(180, 50);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(170, 60);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(160, 70);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(150, 80);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(140, 90);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(130, 100);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(120, 110);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(110, 120);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(100, 130);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(90, 140);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(80, 150);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(70, 160);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(60, 170);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(50, 180);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(40, 190);
	glEnd();
	glFlush();



}
void rantai2() {
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(310, 40);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(300, 50);
	glEnd();


	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(290, 60);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(280, 70);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(270, 80);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(260, 90);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(250, 100);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(240, 110);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(230, 120);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(220, 130);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(210, 140);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(200, 150);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(190, 160);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(180, 170);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(170, 180);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(160, 190);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(150, 200);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(140, 210);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(130, 220);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(120, 230);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(110, 240);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(100, 250);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(90, 260);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(80, 270);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(70, 280);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(60, 290);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(50, 300);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(40, 310);
	glEnd();
	/// <summary>
	/// slide lanjutan
	/// </summary>


	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(340, 40);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(330, 50);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(320, 60);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(310, 70);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(300, 80);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(290, 90);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(280, 100);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(270, 110);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(260, 120);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(250, 130);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(240, 140);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(230, 150);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(220, 160);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(210, 170);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(200, 180);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(190, 190);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(180, 200);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(170, 210);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(160, 220);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(150, 230);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(140, 240);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(130, 250);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(120, 260);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(110, 270);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(100, 280);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(90, 290);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(80, 300);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(70, 310);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(60, 320);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(50, 330);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(40, 340);
	glEnd();

//
	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(310, 40);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(300, 50);
	glEnd();


	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(290, 60);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(280, 70);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(270, 80);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(260, 90);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(250, 100);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(240, 110);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(230, 120);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(220, 130);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(210, 140);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(200, 150);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(190, 160);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(180, 170);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(170, 180);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(160, 190);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(150, 200);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(140, 210);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(130, 220);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(120, 230);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(110, 240);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(100, 250);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(90, 260);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(80, 270);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(70, 280);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(60, 290);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(50, 300);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(40, 310);
	glEnd();
	/// <summary>
	/// slide lanjutan
	/// </summary>


	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(340, 40);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(330, 50);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(320, 60);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(310, 70);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(300, 80);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(290, 90);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(280, 100);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(270, 110);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(260, 120);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(250, 130);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(240, 140);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(230, 150);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(220, 160);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(210, 170);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(200, 180);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(190, 190);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(180, 200);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(170, 210);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(160, 220);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(150, 230);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(140, 240);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(130, 250);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(120, 260);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(110, 270);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(100, 280);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(90, 290);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(80, 300);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(70, 310);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(60, 320);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(50, 330);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(40, 340);
	glEnd();
	glFlush();
}
void rantai3() {
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(460, 40);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(450, 50);
	glEnd();


	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(440, 60);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(430, 70);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(420, 80);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(410, 90);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(400, 100);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(390, 110);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(380, 120);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(370, 130);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(360, 140);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(350, 150);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(340, 160);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(330, 170);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(320, 180);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(310, 190);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(300, 200);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(290, 210);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(280, 220);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(270, 230);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(260, 240);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(250, 250);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(240, 260);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(230, 270);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(220, 280);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(210, 290);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(200, 300);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(190, 310);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(180, 320);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(170, 330);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(160, 340);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(150, 350);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(140, 360);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(130, 370);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(120, 380);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(110, 390);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(100, 400);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(90, 410);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(80, 420);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(70, 430);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(60, 440);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(50, 450);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(40, 460);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(330, 50);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(320, 60);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(310, 70);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(300, 80);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(290, 90);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(280, 100);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(270, 110);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(260, 120);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(250, 130);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(240, 140);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(230, 150);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(220, 160);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(210, 170);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(200, 180);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(190, 190);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(180, 200);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(170, 210);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(160, 220);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(150, 230);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(140, 240);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(130, 250);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(120, 260);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(110, 270);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(100, 280);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(90, 290);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(80, 300);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(70, 310);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(60, 320);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(50, 330);
	glEnd();
	glFlush();
	/////////////samping
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(490, 40);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(480, 50);
	glEnd();


	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(470, 60);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(460, 70);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(450, 80);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(440, 90);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(430, 100);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(420, 110);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(410, 120);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(400, 130);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(390, 140);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(380, 150);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(370, 160);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(360, 170);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(350, 180);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(340, 190);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(330, 200);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(320, 210);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(310, 220);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(300, 230);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(290, 240);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(280, 250);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(270, 260);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(260, 270);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(250, 280);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(240, 290);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(230, 300);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(220, 310);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(210, 320);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(200, 330);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(190, 340);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(180, 350);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(170, 360);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(160, 370);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(150, 380);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(140, 390);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(130, 400);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(120, 410);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(110, 420);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(100, 430);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(90, 440);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(80, 450);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(70, 460);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(60, 470);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(50, 480);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(40, 490);
	glEnd();
	// tahap2
	glColor3ub(144 ,238 ,144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(460, 40);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(450, 50);
	glEnd();


	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(440, 60);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(430, 70);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(420, 80);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(410, 90);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(400, 100);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(390, 110);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(380, 120);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(370, 130);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(360, 140);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(350, 150);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(340, 160);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(330, 170);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(320, 180);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(310, 190);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(300, 200);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(290, 210);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(280, 220);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(270, 230);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(260, 240);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(250, 250);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(240, 260);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(230, 270);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(220, 280);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(210, 290);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(200, 300);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(190, 310);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(180, 320);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(170, 330);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(160, 340);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(150, 350);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(140, 360);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(130, 370);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(120, 380);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(110, 390);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(100, 400);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(90, 410);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(80, 420);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(70, 430);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(60, 440);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(50, 450);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(40, 460);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(330, 50);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(320, 60);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(310, 70);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(300, 80);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(290, 90);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(280, 100);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(270, 110);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(260, 120);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(250, 130);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(240, 140);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(230, 150);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(220, 160);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(210, 170);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(200, 180);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(190, 190);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(180, 200);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(170, 210);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(160, 220);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(150, 230);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(140, 240);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(130, 250);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(120, 260);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(110, 270);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(100, 280);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(90, 290);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(80, 300);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(70, 310);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(60, 320);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(50, 330);
	glEnd();
	glFlush();
	/////////////samping
	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(490, 40);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(480, 50);
	glEnd();


	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(470, 60);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(460, 70);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(450, 80);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(440, 90);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(430, 100);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(420, 110);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(410, 120);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(400, 130);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(390, 140);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(380, 150);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(370, 160);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(360, 170);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(350, 180);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(340, 190);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(330, 200);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(320, 210);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(310, 220);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(300, 230);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(290, 240);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(280, 250);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(270, 260);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(260, 270);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(250, 280);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(240, 290);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(230, 300);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(220, 310);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(210, 320);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(200, 330);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(190, 340);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(180, 350);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(170, 360);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(160, 370);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(150, 380);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(140, 390);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(130, 400);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(120, 410);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(110, 420);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(100, 430);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(90, 440);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(80, 450);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(70, 460);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(60, 470);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(50, 480);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(40, 490);
	glEnd();
	glFlush();
}
void rantai4() {
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(560, 90);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(550, 100);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(540, 110);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(530, 120);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(520, 130);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(510, 140);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(500, 150);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(490, 160);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(480, 170);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(470, 180);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(460, 190);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(450, 200);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(440, 210);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(430, 220);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(420, 230);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(410, 240);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(400, 250);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(390, 260);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(380, 270);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(370, 280);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(360, 290);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(350, 300);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(340, 310);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(330, 320);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(320, 330);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(310, 340);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(300, 350);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(290, 360);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(280, 370);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(270, 380);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(260, 390);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(250, 400);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(240, 410);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(230, 420);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(220, 430);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(210, 440);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(200, 450);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(190, 460);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(180, 470);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(170, 480);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(160, 490);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(150, 500);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(140, 510);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(130, 520);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(120, 530);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(110, 540);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(100, 550);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(90, 560);
	glEnd();
	/// slide2
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(560, 120);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(550, 130);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(540, 140);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(530, 150);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(520, 160);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(510, 170);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(500, 180);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(490, 190);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(480, 200);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(470, 210);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(460, 220);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(450, 230);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(440, 240);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(430, 250);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(420, 260);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(410, 270);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(400, 280);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(390, 290);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(380, 300);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(370, 310);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(360, 320);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(350, 330);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(340, 340);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(330, 350);
	glEnd();
	
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(320, 360);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(310, 370);
	glEnd();


	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(300, 380);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(290, 390);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(280, 400);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(270, 410);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(260, 420);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(250, 430);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(240, 440);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(230, 450);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(220, 460);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(210, 470);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(200, 480);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(190, 490);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(180, 500);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(170, 510);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(160, 520);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(150, 530);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(140, 540);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(130, 550);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(120, 560);
	glEnd();
	
	// titiktitik
	glColor3ub(144 ,238 ,144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(560, 90);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(550, 100);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(540, 110);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(530, 120);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(520, 130);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(510, 140);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(500, 150);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(490, 160);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(480, 170);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(470, 180);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(460, 190);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(450, 200);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(440, 210);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(430, 220);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(420, 230);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(410, 240);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(400, 250);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(390, 260);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(380, 270);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(370, 280);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(360, 290);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(350, 300);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(340, 310);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(330, 320);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(320, 330);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(310, 340);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(300, 350);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(290, 360);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(280, 370);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(270, 380);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(260, 390);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(250, 400);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(240, 410);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(230, 420);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(220, 430);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(210, 440);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(200, 450);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(190, 460);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(180, 470);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(170, 480);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(160, 490);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(150, 500);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(140, 510);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(130, 520);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(120, 530);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(110, 540);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(100, 550);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(90, 560);
	glEnd();
	/// slide2
	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(560, 120);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(550, 130);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(540, 140);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(530, 150);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(520, 160);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(510, 170);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(500, 180);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(490, 190);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(480, 200);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(470, 210);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(460, 220);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(450, 230);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(440, 240);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(430, 250);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(420, 260);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(410, 270);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(400, 280);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(390, 290);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(380, 300);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(370, 310);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(360, 320);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(350, 330);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(340, 340);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(330, 350);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(320, 360);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(310, 370);
	glEnd();


	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(300, 380);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(290, 390);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(280, 400);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(270, 410);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(260, 420);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(250, 430);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(240, 440);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(230, 450);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(220, 460);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(210, 470);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(200, 480);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(190, 490);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(180, 500);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(170, 510);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(160, 520);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(150, 530);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(140, 540);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(130, 550);
	glEnd();

	glColor3ub(144, 238, 144);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(120, 560);
	glEnd();
	glFlush();

}
void rantai5() {
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(560, 240);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(550, 250);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(540, 260);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(530, 270);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(520, 280);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(510, 290);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(500, 300);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(490, 310);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(480, 320);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(470, 330);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(460, 340);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(450, 350);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(440, 360);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(430, 370);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(420, 380);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(410, 390);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(400, 400);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(390, 410);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(380, 420);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(370, 430);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(360, 440);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(350, 450);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(340, 460);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(330, 470);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(320, 480);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(310, 490);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(300, 500);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(290, 510);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(280, 520);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(270, 530);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(260, 540);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(250, 550);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(240, 560);
	glEnd();
	/// // slide2
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(560, 270);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(550, 280);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(540, 290);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(530, 300);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(520, 310);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(510, 320);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(500, 330);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(490, 340);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(480, 350);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(470, 360);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(460, 370);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(450, 380);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(440, 390);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(430, 400);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(420, 410);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(410, 420);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(400, 430);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(390, 440);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(380, 450);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(370, 460);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(360, 470);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(350, 480);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(340, 490);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(330, 500);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(320, 510);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(310, 520);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(300, 530);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(290, 540);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(280, 550);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(270, 560);
	glEnd();

	/// <summary>
	/// slide dalam
	/// </summary>

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(560, 240);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(550, 250);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(540, 260);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(530, 270);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(520, 280);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(510, 290);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(500, 300);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(490, 310);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(480, 320);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(470, 330);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(460, 340);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(450, 350);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(440, 360);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(430, 370);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(420, 380);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(410, 390);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(400, 400);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(390, 410);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(380, 420);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(370, 430);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(360, 440);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(350, 450);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(340, 460);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(330, 470);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(320, 480);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(310, 490);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(300, 500);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(290, 510);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(280, 520);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(270, 530);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(260, 540);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(250, 550);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(240, 560);
	glEnd();
	/// // slide2
	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(560, 270);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(550, 280);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(540, 290);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(530, 300);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(520, 310);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(510, 320);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(500, 330);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(490, 340);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(480, 350);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(470, 360);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(460, 370);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(450, 380);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(440, 390);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(430, 400);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(420, 410);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(410, 420);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(400, 430);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(390, 440);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(380, 450);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(370, 460);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(360, 470);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(350, 480);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(340, 490);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(330, 500);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(320, 510);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(310, 520);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(300, 530);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(290, 540);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(280, 550);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(270, 560);
	glEnd();

	glFlush();
}
void rantai6() {

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(560, 390);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(550, 400);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(540, 410);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(530, 420);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(520, 430);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(510, 440);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(500, 450);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(490, 460);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(480, 470);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(470, 480);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(460, 490);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(450, 500);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(440, 510);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(430, 520);
	glEnd();
	
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(420, 530);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(410, 540);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(400, 550);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(390, 560);
	glEnd();
	/// slide2
	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(560, 420);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(550, 430);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(540, 440);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(530, 450);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(520, 460);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(510, 470);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(500, 480);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(490, 490);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(480, 500);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(470, 510);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(460, 520);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(450, 530);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(440, 540);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(430, 550);
	glEnd();

	glColor3ub(100, 0, 0);
	glPointSize(12);
	glBegin(GL_POINTS);
	glVertex2i(420, 560);
	glEnd();
	/// <summary>
	/// lingkaran dalam
	/// </summary>
	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(560, 390);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(550, 400);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(540, 410);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(530, 420);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(520, 430);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(510, 440);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(500, 450);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(490, 460);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(480, 470);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(470, 480);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(460, 490);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(450, 500);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(440, 510);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(430, 520);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(420, 530);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(410, 540);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(400, 550);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(390, 560);
	glEnd();
	/// slide2
	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(560, 420);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(550, 430);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(540, 440);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(530, 450);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(520, 460);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(510, 470);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(500, 480);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(490, 490);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(480, 500);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(470, 510);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(460, 520);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(450, 530);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(440, 540);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(430, 550);
	glEnd();

	glColor3ub(143, 188, 143);
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2i(420, 560);
	glEnd();
	glFlush();
}
void render() {

	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glEnable(GL_POINT_SMOOTH);
	figura();
	garis();
	rantai1();
	rantai2();
	rantai3();
	rantai4();
	rantai5();
	rantai6();
	


}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Heinricho Dimas Prasetya");
	glutDisplayFunc(render);
	glEnable(GL_POINT_SMOOTH);
	gluOrtho2D(0, 600, 600, 0);
	glutMainLoop();

	return 0;
}