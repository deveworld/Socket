#pragma once
#include <winsock2.h>

#include "Network.hpp"

Network::Network(bool p_isClient)
: isClient(p_isClient)
{
}

Network::~Network()
{
}

bool Network::Init() {
    WSADATA lpWsaData;
    int code = WSAStartup(MAKEWORD(
        NETWORK_VERSION_MAJOR,
        NETWORK_VERSION_MINOR
    ), &lpWsaData);
    netSocket = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    return (code == 0) && (netSocket != INVALID_SOCKET);
}

bool Network::Server() {

}

bool Network::Client() {

}