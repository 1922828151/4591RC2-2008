/*
 * func-name: sub_1018F530
 * func-address: 0x1018f530
 * callers: 0x1001aab9
 * callees: 0x100011ea, 0x100024fa, 0x10006a19, 0x1000a3a8, 0x1000ad76, 0x1000bebf, 0x1000ed13, 0x10012d50, 0x10017eb3, 0x10018e71, 0x10019ccc
 */

void __stdcall sub_1018F530(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  unsigned int v4; // ecx
  GameClient::RobotManager *v5; // eax
  GameClient::WorldObject *Robot; // eax
  GameClient::WorldObject *v7; // esi
  const struct Matrix *v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // [esp-4h] [ebp-ECh]
  int v14; // [esp+0h] [ebp-E8h]
  char v15; // [esp+Bh] [ebp-DDh] BYREF
  float v16; // [esp+Ch] [ebp-DCh] BYREF
  int v17; // [esp+10h] [ebp-D8h] BYREF
  float v18; // [esp+14h] [ebp-D4h]
  unsigned int v19; // [esp+18h] [ebp-D0h] BYREF
  int v20; // [esp+1Ch] [ebp-CCh] BYREF
  float v21; // [esp+20h] [ebp-C8h]
  float v22; // [esp+24h] [ebp-C4h]
  _BYTE v23[68]; // [esp+28h] [ebp-C0h] BYREF
  _BYTE v24[60]; // [esp+6Ch] [ebp-7Ch] BYREF
  _BYTE v25[64]; // [esp+A8h] [ebp-40h] BYREF

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = v2 + 4;
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v4 = v19;
  }
  else
  {
    v4 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v3;
  }
  v13 = v4;
  v5 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v5, v13);
  v7 = Robot;
  if ( Robot && !GameClient::WorldObject::IsLocal(Robot) )
  {
    switch ( Event::GetSubID(a1) )
    {
      case 0x13ECu:
        v16 = 0.0;
        *(float *)&v17 = 0.0;
        v18 = 0.0;
        *(float *)&v20 = 0.0;
        v21 = 0.0;
        v22 = 0.0;
        Event::GetStream(a1);
        sub_10012D50((int)&v19);
        sub_10017EB3((int)&v16);
        sub_10017EB3((int)&v20);
        GameClient::Robot::Move(v7, v19);
        v8 = (const struct Matrix *)sub_10018E71(v23, (int)&v20);
        GameClient::Robot::MoveTo(v7, (const struct Vector *)&v16, v8);
        break;
      case 0x13EDu:
        v16 = 0.0;
        *(float *)&v17 = 0.0;
        v18 = 0.0;
        Event::GetStream(a1);
        sub_10017EB3(v14);
        v9 = *(_DWORD *)v7;
        v10 = sub_10018E71(v24, (int)&v17);
        (*(void (__thiscall **)(GameClient::WorldObject *, int))(v9 + 40))(v7, v10);
        break;
      case 0x13EEu:
        v16 = 0.0;
        *(float *)&v17 = 0.0;
        v18 = 0.0;
        *(float *)&v20 = 0.0;
        v21 = 0.0;
        v22 = 0.0;
        Event::GetStream(a1);
        sub_10012D50((int)&v16);
        sub_10017EB3((int)&v20);
        sub_10017EB3(v14);
        (*(void (__thiscall **)(GameClient::WorldObject *, int *))(*(_DWORD *)v7 + 36))(v7, &v17);
        v11 = *(_DWORD *)v7;
        v12 = sub_10018E71(v25, (int)&v20);
        (*(void (__thiscall **)(GameClient::WorldObject *, int))(v11 + 40))(v7, v12);
        GameClient::Robot::Move(v7, v19);
        GameClient::Robot::Jump(v7);
        break;
      case 0x13EFu:
        Event::GetStream(a1);
        sub_100011EA((int)&v15);
        *((_DWORD *)v7 + 88) = v15 != 0;
        GameClient::Robot::UpdatePhysicsController(v7);
        break;
      default:
        return;
    }
  }
}
