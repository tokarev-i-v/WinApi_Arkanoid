#pragma once
#include "arkanoid_includes.h"

struct Ball {
	COORD position; // ������� ����
	COORD course; // ����������� ����
	char symbol; //���� �������
	int color; //���� ����
	int speed; // ������� ��������
	int timer; //���������� ����������
	int stepNum; //������� �����

	Ball() {
		this->setStandard();
	}

	void setStandard();

	void setPosition(COORD pos) {
		this->position.X = pos.X;
		this->position.Y = pos.Y;
	}
	void setColor(int col) {
		this->color = col;
	}
	void step(); // ��� ����
	void setCourse(int side); //1 - ������, 0 - �����
	bool collision(); //������������ � ����� �� ������� ����
	bool screenOut();
	bool platformCollision();
	void speedControl(); //�������� ��������
	void speedUp(int spd);
};