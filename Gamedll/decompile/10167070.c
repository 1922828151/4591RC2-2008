/*
 * func-name: sub_10167070
 * func-address: 0x10167070
 * callers: 0x1001a2d0
 * callees: 0x10001dfc, 0x100034b8, 0x10003bd9, 0x1000aff6, 0x10012c29, 0x1001a3fc, 0x102c9d62
 */

void __stdcall sub_10167070(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  unsigned int v3; // esi
  int v4; // ecx
  unsigned int v5; // ebp
  int v6; // ecx
  unsigned int v7; // edi
  struct GameClient::WorldObject *v8; // esi
  CRETimer *v9; // eax
  GameClient::FlyweightManager *v10; // eax
  int FlyweightFilename; // eax
  GameClient::FlyweightManager *v12; // eax
  struct BinStream *v13; // eax
  int v14; // ecx
  int v15; // edx
  char v16; // cl
  int v17; // edi
  struct BinStream *v18; // eax
  CRETimer *v19; // eax
  const char *v20; // eax
  struct BinStream *v21; // [esp+8h] [ebp-68h]
  unsigned int v22; // [esp+20h] [ebp-50h]
  float v23; // [esp+20h] [ebp-50h]
  char v24; // [esp+27h] [ebp-49h]
  _BYTE v25[28]; // [esp+28h] [ebp-48h] BYREF
  _BYTE v26[28]; // [esp+44h] [ebp-2Ch] BYREF
  int v27; // [esp+6Ch] [ebp-4h]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  v3 = *((_DWORD *)Stream + 2);
  if ( v2 + 4 <= v3 )
  {
    v22 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
  }
  v4 = *((_DWORD *)Stream + 3);
  if ( v4 + 4 > v3 )
  {
    v5 = v22;
  }
  else
  {
    v5 = *(_DWORD *)(v4 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4 + 4;
  }
  v6 = *((_DWORD *)Stream + 3);
  if ( v6 + 4 > v3 )
  {
    v7 = v22;
  }
  else
  {
    v7 = *(_DWORD *)(v6 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v6 + 4;
  }
  v8 = (struct GameClient::WorldObject *)sub_10001DFC(v7);
  if ( !v8 )
  {
    std::string::string(v26);
    v27 = 0;
    v9 = REGetGlobalTimer();
    CRETimer::StartMiniTimer(v9);
    v10 = GameClient::FlyweightManager::Instance();
    if ( GameClient::FlyweightManager::GetFlyweight(v10, v5) )
    {
      FlyweightFilename = GameClient::Flyweight::GetFlyweightFilename(v25);
      LOBYTE(v27) = 1;
      std::string::operator=(v26, FlyweightFilename);
      LOBYTE(v27) = 0;
      std::string::~string(v25);
    }
    v21 = Event::GetStream(a1);
    v12 = GameClient::FlyweightManager::Instance();
    v8 = GameClient::FlyweightManager::NewWorldObject(v12, v5, v7, v22, v21);
    if ( !v8 )
    {
      v27 = -1;
      std::string::~string(v26);
      return;
    }
    v13 = Event::GetStream(a1);
    v14 = *((_DWORD *)v13 + 3);
    v15 = v14 + 1;
    if ( (unsigned int)(v14 + 1) > *((_DWORD *)v13 + 2) )
    {
      v16 = v24;
    }
    else
    {
      v16 = *(_BYTE *)(v14 + *((_DWORD *)v13 + 1));
      *((_DWORD *)v13 + 3) = v15;
    }
    if ( v16 )
    {
      v17 = *(_DWORD *)v8;
      v18 = Event::GetStream(a1);
      (*(void (__thiscall **)(struct GameClient::WorldObject *, struct BinStream *))(v17 + 16))(v8, v18);
    }
    sub_10003BD9((int)v8);
    v19 = REGetGlobalTimer();
    v23 = CRETimer::StopMiniTimer(v19);
    v20 = (const char *)std::string::c_str(v26);
    LogPrintf("Create %s spend %.3f", v20, v23);
    v27 = -1;
    std::string::~string(v26);
  }
  ++*((_DWORD *)v8 + 26);
}
