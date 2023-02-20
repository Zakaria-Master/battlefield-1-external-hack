#pragma once
#define ValidPointer( pointer ) ( pointer != NULL && (DWORD_PTR)pointer >= 0x10000 && (DWORD_PTR)pointer < 0x00007FFFFFFEFFFF /*&& some other checks*/ )

uint64_t GetPlayerById(int id);
uint64_t GetLocalPlayer(void);
uint64_t GetSoldierWeapon(void);