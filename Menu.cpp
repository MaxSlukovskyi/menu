#include <graphics.h>
#include <string>
#include <iostream>

int MainMenu(int, int, char*);
int SecondMenu(int, int);

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
				goto label1;
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
				goto label1;
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
	int a = 0, k;
	if(number == 0)
	{
		setfillstyle(1, 10);
		a = 10;
		bar(0, 0, getmaxx() / 5 - 1, getmaxy() / 9 + a);
		outtextxy(getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "ĳ� 1");
		k = SecondMenu(number, numberVertical);
		*key = getch();
		setfillstyle(1, 0);	
		bar(0, 0, getmaxx() / 5 - 1, getmaxy() / 9 + a);
	}
	a = 0;
	setfillstyle(1, 9);
	bar(0, 0, getmaxx() / 5 - 1, getmaxy() / 9 + a);
	outtextxy(getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "ĳ� 1");
	if(number == 1)
	{
		setfillstyle(1, 10);
		a = 10;	
		bar(getmaxx() / 5 + 1, 0, getmaxx() * 2 / 5 - 1, getmaxy() / 9 + a);
		outtextxy(getmaxx() / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "ĳ� 2");
		k = SecondMenu(number, numberVertical);
		*key = getch();
		setfillstyle(1, 0);
		bar(getmaxx() / 5 + 1, 0, getmaxx() * 2 / 5 - 1, getmaxy() / 9 + a);
	}
	a = 0;
	setfillstyle(1, 9);
	bar(getmaxx() / 5 + 1, 0, getmaxx() * 2 / 5 - 1, getmaxy() / 9 + a);
	outtextxy(getmaxx() / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "ĳ� 2");
	if(number == 2)
	{
		setfillstyle(1, 10);
		a = 10;
		bar(getmaxx() * 2 / 5 + 1, 0, getmaxx() * 3 / 5 - 1, getmaxy() / 9 + a);
		outtextxy(getmaxx() * 2 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a /2, "ĳ� 3");
		k = SecondMenu(number, numberVertical);
		*key = getch();
		setfillstyle(1, 0);
		bar(getmaxx() * 2 / 5 + 1, 0, getmaxx() * 3 / 5 - 1, getmaxy() / 9 + a);	
	}
	a = 0;
	setfillstyle(1, 9);
	bar(getmaxx() * 2 / 5 + 1, 0, getmaxx() * 3 / 5 - 1, getmaxy() / 9 + a);
	outtextxy(getmaxx() * 2 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a /2, "ĳ� 3");
	if(number == 3)
	{
		setfillstyle(1, 10);
		a = 10;
		bar(getmaxx() * 3 / 5 + 1 , 0, getmaxx() * 4 / 5 - 1, getmaxy() / 9 + a);
		outtextxy(getmaxx() * 3 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "ĳ� 4");
		k = SecondMenu(number, numberVertical);
		*key = getch();
		setfillstyle(1, 0);
		bar(getmaxx() * 3 / 5 + 1 , 0, getmaxx() * 4 / 5 - 1, getmaxy() / 9 + a);
	}
	a = 0;
	setfillstyle(1, 9);
	bar(getmaxx() * 3 / 5 + 1 , 0, getmaxx() * 4 / 5 - 1, getmaxy() / 9 + a);
	outtextxy(getmaxx() * 3 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a / 2, "ĳ� 4");
	if(number == 4)
	{
		setfillstyle(1, 10);
		a = 10;
		bar(getmaxx() * 4 / 5 + 1, 0, getmaxx(), getmaxy() / 9 + a);
		outtextxy(getmaxx() * 4 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a /2, "�����");
		*key = getch();
		setfillstyle(1, 0);
		bar(getmaxx() * 4 / 5 + 1, 0, getmaxx(), getmaxy() / 9 + a);
	}
	a = 0;
	setfillstyle(1, 9);
	bar(getmaxx() * 4 / 5 + 1, 0, getmaxx(), getmaxy() / 9 + a);
	outtextxy(getmaxx() * 4 / 5 + getmaxx() / 10 - 30, getmaxy() / 18 - 10 + a /2, "�����");
	return k;
}

int SecondMenu(int number, int numberVertical)
{
	int k;
	settextstyle(6, 0, 1);
	if(numberVertical == 0)
		{
			setfillstyle(1, 14);
			bar(number * getmaxx() / 5, getmaxy() / 5, (getmaxx() / 5 - 1) * (number + 1), getmaxy() / 5 + (getmaxy() / 5 - 30 - getmaxy() / 9));
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 40 + (getmaxy() / 5 - 30 - getmaxy() / 9), "�������� 2");
			setfillstyle(1, 7);
			bar(number * getmaxx() / 5, getmaxy() / 9 + 20, (getmaxx() / 5 - 1) * (number + 1), getmaxy() / 5 - 10);
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 10 + (getmaxy() / 5 - 30 - getmaxy() / 9) / 2, "�������� 1");
		}
		else if(numberVertical == -1)
		{
			
			setfillstyle(1, 14);
			bar(number * getmaxx() / 5, getmaxy() / 9 + 20, (getmaxx() / 5 - 1) * (number + 1), getmaxy() / 5 - 10);
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 10 + (getmaxy() / 5 - 30 - getmaxy() / 9) / 2, "�������� 1");
			setfillstyle(1, 14);
			bar(number * getmaxx() / 5, getmaxy() / 5, (getmaxx() / 5 - 1) * (number + 1), getmaxy() / 5 + (getmaxy() / 5 - 30 - getmaxy() / 9));
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 40 + (getmaxy() / 5 - 30 - getmaxy() / 9), "�������� 2");
			k = 1;
		}
		if(numberVertical == 1)
		{
			setfillstyle(1, 7);
			bar(number * getmaxx() / 5, getmaxy() / 5, (getmaxx() / 5 - 1) * (number + 1), getmaxy() / 5 + (getmaxy() / 5 - 30 - getmaxy() / 9));
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 40 + (getmaxy() / 5 - 30 - getmaxy() / 9), "�������� 2");
			setfillstyle(1, 14);
			bar(number * getmaxx() / 5, getmaxy() / 9 + 20, (getmaxx() / 5 - 1) * (number + 1), getmaxy() / 5 - 10);
			outtextxy(getmaxx() / 10 - 60 + getmaxx() / 5 * number, getmaxy() / 9 + 10 + (getmaxy() / 5 - 30 - getmaxy() / 9) / 2, "�������� 1");
		}
	return k;
}
