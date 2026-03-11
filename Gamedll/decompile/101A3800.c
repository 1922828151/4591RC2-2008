/*
 * func-name: ?RequestBoard@Establishment@GameClient@@UAE_NPAVLocalCharacter@2@@Z_0
 * func-address: 0x101a3800
 * callers: 0x10002478
 * callees: 0x10005ad3, 0x1000a3a8, 0x1000ed13, 0x10010839, 0x100198e9, 0x102c1be0, 0x102c6f80, 0x102c9dbc
 */

bool __thiscall GameClient::Establishment::RequestBoard(
        GameClient::Establishment *this,
        struct GameClient::LocalCharacter *a2)
{
  bool result; // al
  int v4; // eax
  float *v5; // eax
  GameClient::RobotManager *v6; // eax
  struct GameClient::Robot *Robot; // ebp
  unsigned int i; // edi
  int v9; // ecx
  int v10; // eax
  double v11; // st7
  double v12; // st7
  GameClient::Seat **v13; // eax
  int v14; // [esp-Ch] [ebp-40h]
  float v15; // [esp+4h] [ebp-30h]
  float v16; // [esp+4h] [ebp-30h]
  float v17; // [esp+8h] [ebp-2Ch] BYREF
  float v18; // [esp+Ch] [ebp-28h]
  float v19; // [esp+10h] [ebp-24h]
  float v20; // [esp+14h] [ebp-20h]
  float v21; // [esp+18h] [ebp-1Ch]
  float v22; // [esp+1Ch] [ebp-18h]
  float v23; // [esp+20h] [ebp-14h]
  float v24; // [esp+24h] [ebp-10h]
  float v25; // [esp+28h] [ebp-Ch]
  float v26; // [esp+2Ch] [ebp-8h]
  float v27; // [esp+30h] [ebp-4h]

  result = (*(int (__thiscall **)(GameClient::Establishment *))(*(_DWORD *)this + 108))(this);
  if ( result )
  {
    v4 = *((_DWORD *)this + 27);
    if ( (v4 == *((_DWORD *)a2 + 12) || v4 == -1)
      && (v5 = (float *)*((_DWORD *)this + 75),
          v15 = v5[212] * v5[212] + v5[211] * v5[211] + v5[213] * v5[213],
          v16 = sqrt(v15),
          *(float *)(*((_DWORD *)this + 2) + 468) >= (double)v16) )
    {
      v14 = *((_DWORD *)a2 + 73);
      v6 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v6, v14);
      if ( Robot )
      {
        for ( i = 0; ; ++i )
        {
          v9 = *((_DWORD *)this + 49);
          if ( !v9 || i >= (*((_DWORD *)this + 50) - v9) >> 2 )
            break;
          if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 49) + 4 * i) + 76) == -1 )
          {
            v10 = sub_10005AD3(i);
            v17 = 0.0;
            v18 = 0.0;
            v19 = 0.0;
            sub_102C1BE0(v10, &v17);
            v20 = *((float *)this + 6) + v17;
            v11 = *((float *)this + 7);
            v23 = v20;
            v21 = v11 + v18;
            v12 = *((float *)this + 8);
            v24 = v21;
            v22 = v12 + v19;
            v25 = v22;
            v26 = 3.0;
            v27 = 5.0;
            if ( (unsigned __int8)sub_102C6F80((char *)Robot + 24) )
            {
              v13 = (GameClient::Seat **)sub_10010839(i);
              return GameClient::Seat::RequestBoard(*v13, a2);
            }
          }
        }
        return 0;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
