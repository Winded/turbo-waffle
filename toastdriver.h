#pragma once

class ToastDriver
{
public:
	ToastDriver();
	
	void beginToasting(int bufferSize);
	void endToasting();
	
	template<class T>
	void writeParameter(std::string name, T value);
	
	short bufferSize() const;
	short bufferPosition() const;
	
	void moveBufferPosition(int newPosition);
	
private:
	short mBufferPos;
	short mBufferSize;
	char *mBuffer;
};