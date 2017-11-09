#ifndef _SOCKET_H_INCLUDED
#define _SOCKET_H_INCLUDED

#include <WinSock2.h>
#include <ws2tcpip.h>
#include <Windows.h>
#include <iostream> // debug

const int SERVER_PORT_NUM = 8081;
const int NUM_CONNECTIONS = 10;

class AGSocket
{
private:
  SOCKET socket = INVALID_SOCKET;
  
  static DWORD receive(void* argArg);

public:
  AGSocket(void);
};

#endif // _SOCKET_H_INCLUDED
