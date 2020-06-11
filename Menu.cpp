#include <graphics.h>
#include <string>
#include <iostream>
#include <math.h>
#include <iostream>

int MainMenu(int, int, char*);
int SecondMenu(int, int);
void Action00();
void Action01();
void Action10();
void Action11();
void Action20();
void Action21();
void Action30();
void Action31();

int main()
{
	initwindow(1920, 1080);
	int number = -1, k = 0, numberVertical = -1;
	char key = 'd';
	MainMenu(number, -2, &key);
	label1:
	MainMenu(number, -2, &key);
	label2:
	switch(key)
	{
		case 'a': //left
		{
			numberVertical = -1;
			setfillstyle(1, 0);
			bar(0, getmaxy() / 9 + 20, getmaxx(), getmaxy() / 5 + (getmaxy() / 5 - 30 - getmaxy() / 9));
			k = 0;
			if(number == 0)
				number = 5;
			number--;
			MainMenu(number, -2, &key);
			goto label2;
		}
		case 'd': //right
		{
			numberVertical = -1;
			setfillstyle(1, 0);
			bar(0, getmaxy() / 9 + 20, getmaxx(), getmaxy() / 5 + (getmaxy() / 5 - 30 - getmaxy() / 9));
			k = 0;
			if(number == 4)
				number = -1;
			number++;
			MainMenu(number, -2, &key);
			goto label2;
		}
		case 's':
		{
			if(k == 0)
				goto label1;
			else
			{
				if(numberVertical == 1)
					goto label1;
				numberVertical++;
				MainMenu(number, numberVertical, &key);
				goto label2;
			}
		}
		case 'w':
		{
			if(k == 0)
				goto label1;
			else
			{
				if(numberVertical == 0)
					goto label1;
				else
				{
					numberVertical--;
					MainMenu(number, numberVertical, &key);
					goto label2;
				}
			}
		}
		case 13:
		{
			if(number == 4)
				return 0;
			else
			{
				k = MainMenu(number, -1, &key);
				goto label2;
			}
		}	
		default:
			goto label1;
	}
	getch();
	closegraph();
	return 0;
}

int MainMenu(int number, int numberVertical, char *key)
{
	settextstyle(6, 0, 1);
	int a = 0, k, tempKey;
	if(number == 0)
	{
		setfillstyle(1, 10);
		a = 10;
		bar(0, 0, getmaxx() / 5 - 1, getmaxy() / 9 + a);
		outtextxy(getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "Дія 1");
		k = SecondMenu(number, numberVertical);
		tempKey = getch();
		*key = tempKey;
		if(tempKey == 13)
		{
			if(numberVertical == 0)
				Action00();
			else if(numberVertical == 1)
				Action01();
		}
		setfillstyle(1, 0);	
		bar(0, 0, getmaxx() / 5 - 1, getmaxy() / 9 + a);
	}
	a = 0;
	setfillstyle(1, 9);
	bar(0, 0, getmaxx() / 5 - 1, getmaxy() / 9 + a);
	outtextxy(getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "Дія 1");
	if(number == 1)
	{
		setfillstyle(1, 10);
		a = 10;	
		bar(getmaxx() / 5 + 1, 0, getmaxx() * 2 / 5 - 1, getmaxy() / 9 + a);
		outtextxy(getmaxx() / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "Дія 2");
		k = SecondMenu(number, numberVertical);
		tempKey = getch();
		*key = tempKey;
		if(tempKey == 13)
		{
			if(numberVertical == 0)
				Action10();
			else if(numberVertical == 1)
				Action11();
		}
		setfillstyle(1, 0);
		bar(getmaxx() / 5 + 1, 0, getmaxx() * 2 / 5 - 1, getmaxy() / 9 + a);
	}
	a = 0;
	setfillstyle(1, 9);
	bar(getmaxx() / 5 + 1, 0, getmaxx() * 2 / 5 - 1, getmaxy() / 9 + a);
	outtextxy(getmaxx() / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "Дія 2");
	if(number == 2)
	{
		setfillstyle(1, 10);
		a = 10;
		bar(getmaxx() * 2 / 5 + 1, 0, getmaxx() * 3 / 5 - 1, getmaxy() / 9 + a);
		outtextxy(getmaxx() * 2 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a /2, "Дія 3");
		k = SecondMenu(number, numberVertical);
		tempKey = getch();
		*key = tempKey;
		if(tempKey == 13)
		{
			if(numberVertical == 0)
				Action20();
			else if(numberVertical == 1)
				Action21();
		}
		setfillstyle(1, 0);
		bar(getmaxx() * 2 / 5 + 1, 0, getmaxx() * 3 / 5 - 1, getmaxy() / 9 + a);	
	}
	a = 0;
	setfillstyle(1, 9);
	bar(getmaxx() * 2 / 5 + 1, 0, getmaxx() * 3 / 5 - 1, getmaxy() / 9 + a);
	outtextxy(getmaxx() * 2 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a /2, "Дія 3");
	if(number == 3)
	{
		setfillstyle(1, 10);
		a = 10;
		bar(getmaxx() * 3 / 5 + 1 , 0, getmaxx() * 4 / 5 - 1, getmaxy() / 9 + a);
		outtextxy(getmaxx() * 3 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "Дія 4");
		k = SecondMenu(number, numberVertical);
		tempKey = getch();
		*key = tempKey;
		if(tempKey == 13)
		{
			if(numberVertical == 0)
				Action30();
			else if(numberVertical == 1)
				Action31();
		}
		setfillstyle(1, 0);
		bar(getmaxx() * 3 / 5 + 1 , 0, getmaxx() * 4 / 5 - 1, getmaxy() / 9 + a);
	}
	a = 0;
	setfillstyle(1, 9);
	bar(getmaxx() * 3 / 5 + 1 , 0, getmaxx() * 4 / 5 - 1, getmaxy() / 9 + a);
	outtextxy(getmaxx() * 3 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "Дія 4");
	if(number == 4)
	{
		setfillstyle(1, 10);
		a = 10;
		bar(getmaxx() * 4 / 5 + 1, 0, getmaxx(), getmaxy() / 9 + a);
		outtextxy(getmaxx() * 4 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a /2, "Вихід");
		*key = getch();
		setfillstyle(1, 0);
		bar(getmaxx() * 4 / 5 + 1, 0, getmaxx(), getmaxy() / 9 + a);
	}
	a = 0;
	setfillstyle(1, 9);
	bar(getmaxx() * 4 / 5 + 1, 0, getmaxx(), getmaxy() / 9 + a);
	outtextxy(getmaxx() * 4 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a /2, "Вихід");
	return k;
}

int SecondMenu(int number, int numberVertical)
{
	int k;
	settextstyle(6, 0, 1);
	if(numberVertical == 0)
		{
			setfillstyle(1, 0);
			bar(number * getmaxx() / 5 - 5, getmaxy() / 5, (getmaxx() / 5 - 1) * (number + 1) + 5, getmaxy() / 5 + (getmaxy() / 5 - 30 - getmaxy() / 9));
			setfillstyle(1, 14);
			bar(number * getmaxx() / 5, getmaxy() / 5, (getmaxx() / 5 - 1) * (number + 1), getmaxy() / 5 + (getmaxy() / 5 - 30 - getmaxy() / 9));
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 40 + (getmaxy() / 5 - 30 - getmaxy() / 9), "Побудова 2");
			setfillstyle(1, 7);
			bar(number * getmaxx() / 5 - 5, getmaxy() / 9 + 20, (getmaxx() / 5 - 1) * (number + 1) + 5, getmaxy() / 5 - 10);
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 10 + (getmaxy() / 5 - 30 - getmaxy() / 9) / 2, "Побудова 1");
		}
		else if(numberVertical == -1)
		{
			setfillstyle(1, 0);
			bar(number * getmaxx() / 5 - 5, getmaxy() / 9 + 20, (getmaxx() / 5 - 1) * (number + 1) + 5, getmaxy() / 5 - 10);
			bar(number * getmaxx() / 5 - 5, getmaxy() / 5, (getmaxx() / 5 - 1) * (number + 1) + 5, getmaxy() / 5 + (getmaxy() / 5 - 30 - getmaxy() / 9));
			setfillstyle(1, 14);
			bar(number * getmaxx() / 5, getmaxy() / 9 + 20, (getmaxx() / 5 - 1) * (number + 1), getmaxy() / 5 - 10);
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 10 + (getmaxy() / 5 - 30 - getmaxy() / 9) / 2, "Побудова 1");
			setfillstyle(1, 14);
			bar(number * getmaxx() / 5, getmaxy() / 5, (getmaxx() / 5 - 1) * (number + 1), getmaxy() / 5 + (getmaxy() / 5 - 30 - getmaxy() / 9));
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 40 + (getmaxy() / 5 - 30 - getmaxy() / 9), "Побудова 2");
			k = 1;
		}
		if(numberVertical == 1)
		{
			setfillstyle(1, 0);
			bar(number * getmaxx() / 5 - 5, getmaxy() / 9 + 20, (getmaxx() / 5 - 1) * (number + 1) + 5, getmaxy() / 5 - 10);
			setfillstyle(1, 7);
			bar(number * getmaxx() / 5 - 5, getmaxy() / 5, (getmaxx() / 5 - 1) * (number + 1) + 5, getmaxy() / 5 + (getmaxy() / 5 - 30 - getmaxy() / 9));
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 40 + (getmaxy() / 5 - 30 - getmaxy() / 9), "Побудова 2");
			setfillstyle(1, 14);
			bar(number * getmaxx() / 5, getmaxy() / 9 + 20, (getmaxx() / 5 - 1) * (number + 1), getmaxy() / 5 - 10);
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 10 + (getmaxy() / 5 - 30 - getmaxy() / 9) / 2, "Побудова 1");
		}
	return k;
}

void Action00()
{
	cleardevice();
	cleardevice();
  	int sqx, sqy, x1, y1;
  	float x, y, h = 1;
  	sqx = getmaxx() / 2;
	sqy = getmaxy() / 2;
  	int a = 54;
    int r =50;
    int k;
    for(int m=0;m<=100000;m+=h)
    {
		x = (a + r * cos(m)) * 2;
		y = (a * tan(m) + r * sin(m)) / 2;
		x1 = sqx + x;
		y1 = sqy - y;
		if(y1 == 1000)
			k = x;
		if(y1 >= sqy - 300 && y1 <= sqy + 300)
			putpixel(x1 , y1, 5);
		else
			putpixel(x1 , y1, 0);
    }
    getch();
    setcolor(10);
    circle(sqx + k, sqy, 300);
    setcolor(WHITE);
	getch();
	cleardevice();
}

void Action01()
{
	cleardevice();
	outtextxy(00, 600, "01");
	getch();
}

void Action10()
{
	cleardevice();
	outtextxy(00, 600, "10");	
	getch();
}

void Action11()
{
	cleardevice();
	outtextxy(600, 600, "11");
	getch();
}

void Action20()
{
	cleardevice();
	outtextxy(600, 600, "20");
	getch();
}

void Action21()
{
	cleardevice();
	outtextxy(600, 600, "21");
	getch();
}

void Action30()
{
	cleardevice();
	outtextxy(600, 600, "30");
	getch();
}

void Action31()
{
	cleardevice();
	outtextxy(600, 600, "31");
	getch();
}
