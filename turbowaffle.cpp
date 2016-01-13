#include "turbowaffle.h"

TurboWaffle::TurboWaffle()
{
	mDriver = new TOASTDriver();
}

TurboWaffle::~TurboWaffle()
{
	delete mDriver;
}

float TurboWaffle::targetTemp() const
{
	return mTargetTemp;
}

void TurboWaffle::setTargetTemp(float temp)
{
	mTargetTemp = temp;
}

void TurboWaffle::run()
{
	while(true) {
		mDriver.beginToasting(32);
		mDriver.writeParameter("temperature", mTargetTemp);
		mDriver.endToasting();
		sleep(1000);
	}
}