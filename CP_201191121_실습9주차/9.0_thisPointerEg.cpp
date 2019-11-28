#include <iostream>
#include <string.h>

using namespace std;

class Buf
{
public:
	Buf(char* szBuffer, size_t sizeOfBuffer);
	Buf& operator=(const Buf&);
	void Display() { cout << buffer << endl; }

private:
	char* buffer;
	size_t  sizeOfBuffer;
};

Buf::Buf(char* szBuffer, size_t sizeOfBuffer)
{
	sizeOfBuffer++; // account for a NULL terminator

	buffer = new char[sizeOfBuffer];
	if (buffer)
	{
		strcpy_s(buffer, sizeOfBuffer, szBuffer);
		sizeOfBuffer = sizeOfBuffer;
	}
}

Buf& Buf::operator=(const Buf& otherbuf)
{
	if (&otherbuf != this)
	{
		if (buffer)
			delete[] buffer;

		sizeOfBuffer = strlen(otherbuf.buffer) + 1;
		buffer = new char[sizeOfBuffer];
		strcpy_s(buffer, sizeOfBuffer, otherbuf.buffer);
	}
	return *this;
}

