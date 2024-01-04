#include "Timer.h"
#include "common.h"
Timer::Timer()
{
}

Timer::~Timer()
{
}

void Timer::Init()
{
	start = time(NULL);
}

void Timer::Update()
{
	finish = time(NULL);
	duration = (double)(finish - start);
	if (duration > 60) {
		duration = 0;
		minute++;
		start = time(NULL);
	}
}

void Timer::Render()
{
	
	gotoxy(50, 0);
	cout << "���� �ð� :" << minute << "��" << duration << "��";
}

void Timer::Destroy()
{
}
