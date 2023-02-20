#include "Includes.h"
#include <iostream>

int main()
{
	uint64_t LocalPlayer = GetLocalPlayer();
	uint64_t ClientPlayer  =  rpm->read<uint64_t>(LocalPlayer + 0x0018);
	std::cout << rpm->readString(ClientPlayer, 24);

	for (size_t i = 0; i < 100; i++)
	{
		uint64_t Players = GetPlayerById(i);

		uint64_t clientSoldierEntity = rpm->read<uint64_t>(Players + 0x1D48);
		uint64_t HealthComponent = rpm->read<uint64_t>(clientSoldierEntity + 0x1D0);

		std::cout << rpm->read<float>(HealthComponent + 0x0020) << std::endl;

	}


	getchar();
	return 0;
}
