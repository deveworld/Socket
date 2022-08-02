#pragma once
#include <winsock2.h>

#define NETWORK_VERSION_MAJOR 0
#define NETWORK_VERSION_MINOR 1

class Network
{
private:
    SOCKET netSocket;
    bool isClient;
public:
    Network(bool p_isClient = true);
    ~Network();
    // return true if success
    bool Init();
    bool Server();
    bool Client();
};