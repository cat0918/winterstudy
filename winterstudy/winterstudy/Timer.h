#pragma once
#include <ctime>
class Timer
{
public:
	Timer();
	~Timer();
public:
	void Init();
	void Update();
	void Render();
	void Destroy();
private:
	time_t start = 0;
	time_t finish = 0;
	int minute = 0;
	double duration = 0;
};

