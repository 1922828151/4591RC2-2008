/*
 * func-name: sub_1018F250
 * func-address: 0x1018f250
 * callers: 0x10005ca4
 * callees: 0x100072b1, 0x1000a3a8, 0x1000ed13
 */

void __stdcall sub_1018F250(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  int v3; // edx
  Event *v4; // ecx
  GameClient::RobotManager *v5; // eax
  GameClient::Robot *Robot; // edi
  struct BinStream *v7; // eax
  int v8; // edx
  float *v9; // ecx
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // [esp-8h] [ebp-18h]
  float v14; // [esp+4h] [ebp-Ch] BYREF
  float v15; // [esp+8h] [ebp-8h]
  float v16; // [esp+Ch] [ebp-4h]

  if ( Event::GetSubID(a1) == 5150 )
  {
    Stream = Event::GetStream(a1);
    v2 = *((_DWORD *)Stream + 3);
    v3 = v2 + 4;
    if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
    {
      v4 = a1;
    }
    else
    {
      v4 = *(Event **)(v2 + *((_DWORD *)Stream + 1));
      *((_DWORD *)Stream + 3) = v3;
    }
    v13 = (int)v4;
    v5 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v5, v13);
    if ( Robot )
    {
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      v7 = Event::GetStream(a1);
      v8 = *((_DWORD *)v7 + 3);
      if ( (unsigned int)(v8 + 12) <= *((_DWORD *)v7 + 2) )
      {
        v9 = (float *)(v8 + *((_DWORD *)v7 + 1));
        v14 = *v9;
        v15 = v9[1];
        v16 = v9[2];
        *((_DWORD *)v7 + 3) += 12;
      }
      v10 = *((_DWORD *)v7 + 3);
      v11 = v10 + 4;
      if ( (unsigned int)(v10 + 4) > *((_DWORD *)v7 + 2) )
      {
        GameClient::Robot::ShowDamage(Robot, (const struct Vector *)&v14, (unsigned int)a1);
      }
      else
      {
        v12 = *(_DWORD *)(v10 + *((_DWORD *)v7 + 1));
        *((_DWORD *)v7 + 3) = v11;
        GameClient::Robot::ShowDamage(Robot, (const struct Vector *)&v14, v12);
      }
    }
  }
}
