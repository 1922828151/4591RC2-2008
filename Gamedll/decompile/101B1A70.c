/*
 * func-name: ?WriteSnapshot@Seat@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101b1a70
 * callers: 0x1001083e
 * callees: 0x100034b8, 0x1000a3a8, 0x1000aff6, 0x1000cd51, 0x1000ed13, 0x1000fa6a
 */

char __thiscall GameClient::Seat::WriteSnapshot(GameClient::Seat *this, struct BinStream *a2)
{
  struct BinStream *v2; // esi
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  struct BinStream *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // edx
  int v15; // eax
  GameClient::FlyweightManager *v16; // eax
  struct GameClient::WorldObject *v17; // eax
  GameClient::RobotManager *v18; // eax
  struct GameClient::Robot *Robot; // eax
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // edx
  struct BinStream *v23; // edi
  int v24; // eax
  int v25; // ecx
  struct BinStream *v26; // eax
  GameClient::FlyweightManager *v27; // eax
  unsigned int v29; // [esp-8h] [ebp-18h]
  int v30; // [esp-4h] [ebp-14h]
  int v31; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  v3 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v3 + 4) <= *((_DWORD *)a2 + 2) )
  {
    *((_DWORD *)this + 19) = *(_DWORD *)(v3 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) += 4;
  }
  v5 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v5 + 4) <= *((_DWORD *)a2 + 2) )
  {
    *((float *)this + 80) = *(float *)(v5 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) += 4;
  }
  v6 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
  {
    *((float *)this + 81) = *(float *)(v6 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) += 4;
  }
  v7 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v7 + 4) <= *((_DWORD *)a2 + 2) )
  {
    *((float *)this + 82) = *(float *)(v7 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) += 4;
  }
  v8 = *((_DWORD *)a2 + 3);
  v9 = v8 + 4;
  if ( (unsigned int)(v8 + 4) > *((_DWORD *)a2 + 2) )
  {
    v10 = a2;
  }
  else
  {
    v10 = *(struct BinStream **)(v8 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) = v9;
  }
  if ( (int)v10 > 0 )
  {
    a2 = v10;
    v11 = (unsigned int)v10;
    v12 = (unsigned int)v10;
    do
    {
      v13 = *((_DWORD *)v2 + 3);
      v14 = *((_DWORD *)v2 + 2);
      if ( v13 + 4 <= v14 )
      {
        v12 = *(_DWORD *)(v13 + *((_DWORD *)v2 + 1));
        *((_DWORD *)v2 + 3) = v13 + 4;
      }
      v15 = *((_DWORD *)v2 + 3);
      if ( v15 + 4 <= v14 )
      {
        v11 = *(_DWORD *)(v15 + *((_DWORD *)v2 + 1));
        *((_DWORD *)v2 + 3) = v15 + 4;
      }
      v16 = GameClient::FlyweightManager::Instance();
      v17 = GameClient::FlyweightManager::NewWorldObject(v16, v12, v11, 0xFFFFFFFF, v2);
      if ( v17 )
      {
        *((_DWORD *)v17 + 67) = *((_DWORD *)this + 22);
        v31 = (int)v17;
        sub_1000CD51((char *)this + 28, (int)&v31);
      }
      a2 = (struct BinStream *)((char *)a2 - 1);
    }
    while ( a2 );
  }
  v30 = *((_DWORD *)this + 19);
  *((_DWORD *)this + 23) = *(_DWORD *)(*((_DWORD *)this + 2) + 168);
  v18 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v18, v30);
  if ( Robot )
  {
    v20 = *((_DWORD *)this + 22);
    if ( v20 )
      (*(void (__thiscall **)(int, _DWORD, struct GameClient::Robot *))(*(_DWORD *)v20 + 116))(
        v20,
        *((_DWORD *)this + 3),
        Robot);
  }
  v21 = *((_DWORD *)v2 + 3);
  v22 = *((_DWORD *)v2 + 2);
  if ( v21 + 4 > v22 )
  {
    v23 = a2;
  }
  else
  {
    v23 = *(struct BinStream **)(v21 + *((_DWORD *)v2 + 1));
    *((_DWORD *)v2 + 3) = v21 + 4;
  }
  if ( v23 != (struct BinStream *)-1 )
  {
    v24 = *((_DWORD *)v2 + 3);
    v25 = v24 + 4;
    if ( v24 + 4 > v22 )
    {
      v26 = a2;
    }
    else
    {
      v26 = *(struct BinStream **)(v24 + *((_DWORD *)v2 + 1));
      *((_DWORD *)v2 + 3) = v25;
    }
    v29 = (unsigned int)v26;
    v27 = GameClient::FlyweightManager::Instance();
    *((_DWORD *)this + 87) = GameClient::FlyweightManager::NewSkill(v27, (unsigned int)v23, v29, v2);
  }
  return 1;
}
