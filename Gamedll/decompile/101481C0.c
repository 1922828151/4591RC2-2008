/*
 * func-name: sub_101481C0
 * func-address: 0x101481c0
 * callers: 0x10014d21
 * callees: 0x10002f7c, 0x1000516e, 0x1000ae2a, 0x1000bf05, 0x10010bae, 0x1001884a, 0x10019484, 0x1001a5d2, 0x102c0ed0, 0x102c71e0
 */

void __thiscall sub_101481C0(int this)
{
  int v2; // edi
  float *v3; // eax
  double v4; // st7
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int *v8; // ebp
  SoundMgr *v9; // eax
  int v10; // eax
  int v11; // eax
  int *v12; // ebp
  SoundMgr *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct Game *v18; // eax
  float v19; // [esp+14h] [ebp-60h]
  float v20; // [esp+14h] [ebp-60h]
  float v21; // [esp+18h] [ebp-5Ch]
  float v22; // [esp+1Ch] [ebp-58h]
  int v23; // [esp+20h] [ebp-54h]
  float v24[3]; // [esp+24h] [ebp-50h] BYREF
  _BYTE v25[28]; // [esp+30h] [ebp-44h] BYREF
  _BYTE v26[28]; // [esp+4Ch] [ebp-28h] BYREF
  int v27; // [esp+70h] [ebp-4h]

  v2 = *(_DWORD *)(this + 8);
  v19 = (float)*(int *)(v2 + 152);
  v23 = this + 48;
  v3 = (float *)sub_102C0ED0(v24);
  v4 = v19;
  v20 = v19 * *v3;
  v21 = v3[1] * v4;
  v22 = v4 * v3[2];
  v24[0] = v20;
  *(float *)(this + 36) = v20;
  v5 = *(_DWORD *)(this + 12);
  v24[1] = v21;
  v24[2] = v22;
  *(float *)(this + 40) = v21;
  v6 = *(_DWORD *)(this + 16);
  *(float *)(this + 44) = v22;
  v7 = *(_DWORD *)(this + 20);
  *(_DWORD *)(this + 160) = v5;
  *(_DWORD *)(this + 164) = v6;
  *(_DWORD *)(this + 168) = v7;
  if ( *(_DWORD *)(v2 + 256) )
  {
    v8 = (int *)(this + 236);
    if ( !*(_DWORD *)(this + 236) )
      goto LABEL_7;
    if ( *(_BYTE *)(this + 244) )
    {
      v9 = SoundMgr::Instance();
      SoundMgr::RemoveSound(v9, (struct SOUND_OPTION *)(this + 180), 1);
    }
    else
    {
      Precacher::PurgeSound2D((struct Sound **)(this + 236));
    }
    *v8 = 0;
    if ( !*v8 )
    {
LABEL_7:
      *(_BYTE *)(this + 244) = *(_BYTE *)(v2 + 264);
      *(float *)(this + 240) = *(float *)(v2 + 260);
      std::string::operator=(this + 180, v2 + 200);
      v10 = AudioDevice::Instance();
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10);
      *v8 = v11;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 256) + 12))(*(_DWORD *)(v2 + 256), v11);
    }
  }
  if ( *(_DWORD *)(v2 + 336) )
  {
    v12 = (int *)(this + 316);
    if ( !*(_DWORD *)(this + 316) )
      goto LABEL_14;
    if ( *(_BYTE *)(this + 324) )
    {
      v13 = SoundMgr::Instance();
      SoundMgr::RemoveSound(v13, (struct SOUND_OPTION *)(this + 260), 1);
    }
    else
    {
      Precacher::PurgeSound2D((struct Sound **)(this + 316));
    }
    *v12 = 0;
    if ( !*v12 )
    {
LABEL_14:
      *(_BYTE *)(this + 324) = *(_BYTE *)(v2 + 344);
      *(float *)(this + 320) = *(float *)(v2 + 340);
      std::string::operator=(this + 260, v2 + 280);
      v14 = AudioDevice::Instance();
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14);
      *v12 = v15;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 336) + 12))(*(_DWORD *)(v2 + 336), v15);
    }
  }
  if ( *(_DWORD *)(v2 + 380) )
  {
    v16 = sub_102C71E0(v26, v2 + 360);
    v27 = 0;
    v17 = std::operator+<char>(v25, v16, ".reb");
    LOBYTE(v27) = 1;
    std::string::operator=(this + 340, v17);
    LOBYTE(v27) = 0;
    std::string::~string(v25);
    v27 = -1;
    std::string::~string(v26);
    v18 = Game::Instance();
    sub_10019484(*((_DWORD *)v18 + 25), 0);
    if ( sub_1000BF05() )
    {
      sub_1001A5D2(1);
      sub_1000AE2A(this + 12);
      if ( *(_BYTE *)(*(_DWORD *)(this + 8) + 160) )
        sub_10002F7C(v23);
    }
  }
}
