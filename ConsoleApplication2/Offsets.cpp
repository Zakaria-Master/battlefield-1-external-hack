#include "Includes.h"
namespace Offsets
{
 uint64_t ObfuscationMgr = 0x14351D058;
 uint64_t ClientGameContext = 0x1437F7758;
 uint64_t  GameRender = 0x1439e6d08;

 //ClientPlayer 
 DWORD name = 0x0018;
 DWORD teamId = 0x1C34;
 DWORD clientVehicleEntity = 0x1D38;
 DWORD clientSoldierEntity = 0x1D48;

 //ClientVehicleEntity 
 DWORD Vehiclehealthcomponent = 0x1D0;
 DWORD EntityData = 0x30;
 //ClientSoldierEntity 
 DWORD healthcomponent = 0x01D0;
 DWORD bonecollisioncomponent = 0x0490;
 DWORD authorativeYaw = 0x0604;
 DWORD poseType = 0x0638;
 DWORD occluded = 0x06EB;
 DWORD location = 0x0990;

 //UpdatePoseResultData 
 DWORD ActiveWorldTransforms = 0x0020;

 //BoneCollisionComponent 
 DWORD ragdollTransforms = 0x0;

 //RenderView 
 DWORD viewMatrixInverse = 0x0320;
 DWORD viewProj = 0x0460;

}
