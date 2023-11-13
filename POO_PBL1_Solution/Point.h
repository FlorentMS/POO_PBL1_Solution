#pragma once
class Point
{
private :
	float x;
	float y;

public :
	//Constructor
	Point(void);
	Point(float, float);
	Point(int, int);

	//Convert methode
	float convertIntToFloat(int);
	
	//Mutateur 
	void setx(int);
	void setx(float);
	void sety(int);
	void sety(float);

	//Accesseur
	float getx(void);
	float gety(void);

	//Print
	void printPoint(void);

	//void moveLeft(void);
	//void moveDroite(void);
	//void moveTop(void);
	//void moveBottom(void);
	//void moveLeft(int);
	//void moveDroite(int);
	//void moveTop(int);
	//void moveBottom(int);
	void move(float,float);

};

