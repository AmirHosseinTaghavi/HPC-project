#include <iostream>
#include <fstream>

#include "myLib/Computing.h"
#include "myLib/Data.h"

const std::string MY_IP = "tcp://192.168.56.101:5550"; 

int main()
{
	Data d(MY_IP);
	d.getMyShare();	

    return 0;
}
