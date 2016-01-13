#pragma once

#include "toastdriver.h"

class TurboWaffle
{
public:
	TurboWaffle();
	~TurboWaffle();
	
	float targetTemp() const;
	void setTargetTemp(float temp);
	
	void run();
	
private:
	TOASTDriver *mDriver;
	float mTargetTemp;
};