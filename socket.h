#ifndef _SOCKET_H_INCLUDED
#define _SOCKET_H_INCLUDED

/*
This file includes socket class to simulate connection between UA and CDS.
*/

#include <WinSock2.h>
#include <ws2tcpip.h>
#include <thread>
#include <iostream>

namespace AGLocalConst
{
  const int SERVER_PORT_NUM = 8080;
  const int NUM_CONNECTIONS = 10;
}

class AGSocket
{
private:
  SOCKET socket = INVALID_SOCKET;
  std::thread recvThread;
  
  void receive(void);

public:
  AGSocket(void);
  ~AGSocket(void);
  void terminate(void);
};

#endif // _SOCKET_H_INCLUDED
