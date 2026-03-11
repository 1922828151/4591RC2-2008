/*
 * func-name: ?LoadResource@Establishment@GameClient@@UAE_NXZ_0
 * func-address: 0x101a4a60
 * callers: 0x100030da
 * callees: 0x10003fc1, 0x100044ee, 0x1000451b, 0x1000516e, 0x1000c36a, 0x1000dd05, 0x1000fc3b, 0x10010c35, 0x10012ce2, 0x102c9d98
 */

char __thiscall GameClient::Establishment::LoadResource(GameClient::Establishment *this)
{
  int v2; // ecx
  unsigned int v3; // ebp
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  void (__thiscall ***v10)(_DWORD); // ecx
  GameClient::AdapterActor *v11; // edi
  struct Game *v12; // eax
  int v13; // eax
  AsyncLoaderReport *v14; // eax
  AsyncLoaderReport *v15; // edi
  int v16; // ecx
  void (__thiscall *v17)(int, int, _BYTE *, _BYTE *); // eax
  GameClient::AdapterActor *v18; // edi
  struct Game *v19; // eax
  int v20; // eax
  AsyncLoaderReport *v21; // eax
  AsyncLoaderReport *v22; // edi
  int v23; // ecx
  void (__thiscall *v24)(int, int, _BYTE *, _BYTE *); // eax
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  double v28; // st6
  int v29; // eax
  int v31; // [esp-8h] [ebp-E4h]
  int v32; // [esp-8h] [ebp-E4h]
  int v33; // [esp+18h] [ebp-C4h] BYREF
  float v34; // [esp+1Ch] [ebp-C0h]
  float v35; // [esp+20h] [ebp-BCh]
  float v36[3]; // [esp+24h] [ebp-B8h] BYREF
  _BYTE v37[28]; // [esp+30h] [ebp-ACh] BYREF
  _BYTE v38[28]; // [esp+4Ch] [ebp-90h] BYREF
  _BYTE v39[64]; // [esp+68h] [ebp-74h] BYREF
  int v40; // [esp+A8h] [ebp-34h]
  int v41; // [esp+D8h] [ebp-4h]

  GameClient::WorldObject::LoadResource(this);
  v2 = *((_DWORD *)this + 75);
  v3 = 0;
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 80))(v2, 1);
    *((_DWORD *)this + 75) = 0;
  }
  v4 = *((_DWORD *)this + 77);
  if ( v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 80))(v4, 1);
    *((_DWORD *)this + 77) = 0;
  }
  v34 = COERCE_FLOAT(operator new(0x40u));
  v41 = 0;
  if ( v34 == 0.0 )
    v5 = 0;
  else
    v5 = sub_10012CE2((int)this);
  v33 = v5;
  v41 = -1;
  sub_1000FC3B((char *)this + 376, (int)&v33);
  v34 = COERCE_FLOAT(operator new(0x38u));
  v41 = 1;
  if ( v34 == 0.0 )
    v6 = 0;
  else
    v6 = sub_10010C35((int)this);
  v41 = -1;
  v33 = v6;
  sub_1000FC3B((char *)this + 376, (int)&v33);
  v34 = COERCE_FLOAT(operator new(0x40u));
  v41 = 2;
  if ( v34 == 0.0 )
    v7 = 0;
  else
    v7 = sub_10003FC1((int)this);
  v41 = -1;
  v33 = v7;
  sub_1000FC3B((char *)this + 376, (int)&v33);
  v34 = COERCE_FLOAT(operator new(0x38u));
  v41 = 3;
  if ( v34 == 0.0 )
    v8 = 0;
  else
    v8 = sub_1000DD05((int)this);
  v33 = v8;
  v41 = -1;
  sub_1000FC3B((char *)this + 376, (int)&v33);
  while ( 1 )
  {
    v9 = *((_DWORD *)this + 95);
    if ( !v9 || v3 >= (*((_DWORD *)this + 96) - v9) >> 2 )
      break;
    v10 = *(void (__thiscall ****)(_DWORD))(*((_DWORD *)this + 95) + 4 * v3);
    (**v10)(v10);
    ++v3;
  }
  if ( *(_DWORD *)(*((_DWORD *)this + 2) + 216) )
  {
    v11 = (GameClient::AdapterActor *)operator new(0x4F8u);
    v34 = *(float *)&v11;
    v41 = 4;
    if ( v11 )
    {
      v12 = Game::Instance();
      v13 = GameClient::AdapterActor::AdapterActor(v11, *((struct World **)v12 + 25));
    }
    else
    {
      v13 = 0;
    }
    *((_DWORD *)this + 75) = v13;
    v41 = -1;
    *(_BYTE *)(v13 + 1108) = 1;
    v14 = (AsyncLoaderReport *)operator new(8u);
    v15 = v14;
    if ( v14 )
    {
      AsyncLoaderReport::AsyncLoaderReport(v14);
      *(_DWORD *)v15 = &GameClient::EstabLoader::`vftable';
      *((_DWORD *)v15 + 1) = *((_DWORD *)this + 3);
    }
    else
    {
      v15 = 0;
    }
    *(_DWORD *)(*((_DWORD *)this + 75) + 1232) = v15;
    std::string::string(v37, &unk_1031573E);
    v41 = 5;
    std::string::string(v38, &unk_1031573F);
    v16 = *((_DWORD *)this + 75);
    v31 = *((_DWORD *)this + 2) + 196;
    v17 = *(void (__thiscall **)(int, int, _BYTE *, _BYTE *))(*(_DWORD *)v16 + 108);
    LOBYTE(v41) = 6;
    v17(v16, v31, v38, v37);
    LOBYTE(v41) = 5;
    std::string::~string(v38);
    v41 = -1;
    std::string::~string(v37);
    GameClient::AdapterActor::GetLastHandle(*((GameClient::AdapterActor **)this + 75), (int *)this + 76);
  }
  if ( *(_DWORD *)(*((_DWORD *)this + 2) + 300) )
  {
    v18 = (GameClient::AdapterActor *)operator new(0x4F8u);
    v34 = *(float *)&v18;
    v41 = 7;
    if ( v18 )
    {
      v19 = Game::Instance();
      v20 = GameClient::AdapterActor::AdapterActor(v18, *((struct World **)v19 + 25));
    }
    else
    {
      v20 = 0;
    }
    *((_DWORD *)this + 77) = v20;
    v41 = -1;
    *(_BYTE *)(v20 + 1108) = 1;
    v21 = (AsyncLoaderReport *)operator new(8u);
    v22 = v21;
    if ( v21 )
    {
      AsyncLoaderReport::AsyncLoaderReport(v21);
      *(_DWORD *)v22 = &GameClient::EstabLoader::`vftable';
      *((_DWORD *)v22 + 1) = *((_DWORD *)this + 3);
    }
    else
    {
      v22 = 0;
    }
    *(_DWORD *)(*((_DWORD *)this + 77) + 1232) = v22;
    std::string::string(v38, &unk_1031574F);
    v41 = 8;
    std::string::string(v37, &unk_10315750);
    v23 = *((_DWORD *)this + 77);
    v32 = *((_DWORD *)this + 2) + 280;
    v24 = *(void (__thiscall **)(int, int, _BYTE *, _BYTE *))(*(_DWORD *)v23 + 108);
    LOBYTE(v41) = 9;
    v24(v23, v32, v37, v38);
    LOBYTE(v41) = 8;
    std::string::~string(v37);
    v41 = -1;
    std::string::~string(v38);
    GameClient::AdapterActor::GetLastHandle(*((GameClient::AdapterActor **)this + 77), (int *)this + 78);
  }
  if ( *(_DWORD *)(*((_DWORD *)this + 2) + 508) )
  {
    v25 = AudioDevice::Instance();
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 12))(v25);
    v27 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 99) = v26;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v27 + 508) + 12))(*(_DWORD *)(v27 + 508), v26);
  }
  std::string::clear((char *)this + 428);
  CollisionInfo::CollisionInfo((CollisionInfo *)v39);
  *(float *)&v33 = *((float *)this + 6) + 0.0;
  v28 = *((float *)this + 7) + 1000.0;
  v41 = 10;
  v35 = v28;
  v34 = *((float *)this + 8) + 0.0;
  v36[0] = *(float *)&v33;
  v36[1] = v35;
  v36[2] = v34;
  v29 = NxPhysics::Instance((char *)this + 24, v36, 1, v39, 16);
  if ( (unsigned __int8)NxPhysics::RayCast(v29) )
    std::string::operator=((char *)this + 428, v40 + 444);
  v41 = -1;
  CollisionInfo::~CollisionInfo((CollisionInfo *)v39);
  return 1;
}
