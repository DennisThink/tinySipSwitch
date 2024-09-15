#include <iostream>
#include "SipServer.hpp"
#include "cxxopts.hpp"

int main(int argc, char** argv)
{
	std::string ip = "192.168.31.109";
	int port = 5060;
	SipServer server(std::move(ip), port);
	std::cout << "Server has been started. Listening..." << std::endl;
	getchar();
	return 0;
}