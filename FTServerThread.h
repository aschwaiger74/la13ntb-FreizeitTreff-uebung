#pragma once
#include "Thread.h" 

class FTServer;
class Socket;
class Mitglied;

class FTServerThread : public CThread 
{
private:
	// To Do 1.5
public:
	FTServerThread(Socket* clientSocket, FTServer* fts);
	void run();
	~FTServerThread();
};