#pragma once
#pragma warning(suppress : 4996)
#include <Ws2tcpip.h>
#include <thread>
#include <windows.h>
using namespace std;

class CThread
{
private:
	thread* p_thread;
public:
	CThread(void);
	~CThread(void);
	virtual void run() = 0 ;
	void test(){};
	virtual bool start(void);
	void sleep(long);
	
};

