/*
 * func-name: ?fire@Weapon@GameClient@@IAEXABVVector@@0@Z_0
 * func-address: 0x10197460
 * callers: 0x1000430e
 * callees: 0x10002f4f, 0x10003f2b, 0x100058a8, 0x10006a19, 0x100081c5, 0x10010bae, 0x10018fc0, 0x102c71e0, 0x102c7580, 0x102c9d62
 */

void __thiscall GameClient::Weapon::fire(GameClient::Weapon *this, const struct Vector *a2, const struct Vector *a3)
{
  int v4; // eax
  double v5; // st7
  int v6; // edx
  int v7; // ecx
  unsigned int i; // edi
  int v9; // eax
  GameClient::Robot *v10; // ecx
  double v11; // st7
  int v12; // ecx
  int v13; // eax
  void *v14; // eax
  int v15; // eax
  _BYTE *v16; // eax
  _BYTE *v17; // ecx
  int v18; // ecx
  int v19; // eax
  void *v20; // eax
  int v21; // eax
  bool v22; // zf
  _DWORD *v23; // eax
  int v24; // edi
  int v25; // ecx
  int *v26; // eax
  _DWORD *v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // eax
  void *v31; // eax
  int v32; // eax
  BOOL v33; // edi
  _DWORD *v34; // eax
  int v35; // ecx
  float v36; // [esp+4h] [ebp-108h]
  float v37; // [esp+8h] [ebp-104h]
  int v38; // [esp+24h] [ebp-E8h] BYREF
  int v39; // [esp+28h] [ebp-E4h]
  int v40; // [esp+2Ch] [ebp-E0h]
  int v41; // [esp+30h] [ebp-DCh] BYREF
  int v42; // [esp+34h] [ebp-D8h]
  int v43; // [esp+38h] [ebp-D4h]
  _DWORD v44[3]; // [esp+3Ch] [ebp-D0h] BYREF
  _BYTE v45[12]; // [esp+48h] [ebp-C4h] BYREF
  _BYTE v46[28]; // [esp+54h] [ebp-B8h] BYREF
  _BYTE v47[28]; // [esp+70h] [ebp-9Ch] BYREF
  _BYTE v48[28]; // [esp+8Ch] [ebp-80h] BYREF
  _BYTE v49[28]; // [esp+A8h] [ebp-64h] BYREF
  _BYTE v50[28]; // [esp+C4h] [ebp-48h] BYREF
  _BYTE v51[28]; // [esp+E0h] [ebp-2Ch] BYREF
  int v52; // [esp+108h] [ebp-4h]

  if ( *(_BYTE *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2120) )
  {
    GameClient::Weapon::shoot(this, a2, a3, *((_DWORD *)this + 68));
    ++*((_DWORD *)this + 68);
    v4 = *((_DWORD *)this + 70);
    if ( !v4 || *((_DWORD *)this + 68) >= (unsigned int)((*((_DWORD *)this + 71) - v4) / 148) )
      *((_DWORD *)this + 68) = 0;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v9 = *((_DWORD *)this + 70);
      if ( !v9 || i >= (*((_DWORD *)this + 71) - v9) / 148 )
        break;
      GameClient::Weapon::shoot(this, a2, a3, i);
    }
  }
  if ( *((_DWORD *)this + 186) == 3 )
  {
    v5 = *(float *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2136);
    ++*((_DWORD *)this + 189);
    *((float *)this + 188) = v5;
  }
  *((float *)this + 18 * *((_DWORD *)this + 185) + 190) = *(float *)(160 * *((_DWORD *)this + 185)
                                                                   + *((_DWORD *)this + 2)
                                                                   + 2124);
  v6 = *((_DWORD *)this + 2);
  v7 = 160 * *((_DWORD *)this + 185);
  *((float *)this + 47) = *((float *)this + 47) - (double)*(int *)(v7 + v6 + 2128);
  if ( *((float *)this + 227) > 0.0 && *(float *)(v7 + v6 + 2180) > 0.0 )
  {
    *((float *)this + 228) = 0.0;
    *((float *)this + 227) = 0.0;
  }
  v10 = (GameClient::Robot *)*((_DWORD *)this + 37);
  if ( v10 )
  {
    if ( (*((_DWORD *)v10 + 92) & 0x20) == 0 )
    {
      GameClient::Robot::Use(v10);
      v11 = 1.0;
      if ( GameClient::WorldObject::IsLocal(*((GameClient::WorldObject **)this + 37)) )
      {
        GameClient::AEquip::PlayAnimationFPV(
          *((GameClient::AEquip **)this + 45),
          *(_DWORD *)(*((_DWORD *)this + 45) + 2208),
          0.0,
          1.0,
          1.0,
          1);
        v11 = 1.0;
      }
      v37 = v11;
      v36 = v11;
      GameClient::AEquip::PlayAnimation(
        *((GameClient::AEquip **)this + 45),
        *(_DWORD *)(*((_DWORD *)this + 45) + 2188),
        0.0,
        v36,
        v37,
        1);
    }
    if ( GameClient::WorldObject::IsLocal(*((GameClient::WorldObject **)this + 37)) )
    {
      v12 = *((_DWORD *)this + 99);
      if ( !v12 )
        return;
      v13 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v12 + 56))(v12, v47);
      v52 = 0;
      v14 = (void *)sub_102C71E0(v46, v13);
      LOBYTE(v52) = 1;
      sub_102C7580(v50, v14);
      LOBYTE(v52) = 3;
      std::string::~string(v46);
      LOBYTE(v52) = 4;
      std::string::~string(v47);
      v15 = std::string::length(v50);
      v16 = (_BYTE *)std::string::operator[](v50, v15 - 1);
      (*(void (__stdcall **)(bool, _DWORD))(**((_DWORD **)this + 99) + 36))(*v16 == 49, 0.75);
      v17 = v50;
    }
    else
    {
      v18 = *((_DWORD *)this + 119);
      if ( !v18 )
        return;
      v19 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v18 + 56))(v18, v46);
      v52 = 5;
      v20 = (void *)sub_102C71E0(v47, v19);
      LOBYTE(v52) = 6;
      sub_102C7580(v50, v20);
      LOBYTE(v52) = 8;
      std::string::~string(v47);
      LOBYTE(v52) = 9;
      std::string::~string(v46);
      v21 = std::string::length(v50);
      v22 = *(_BYTE *)std::string::operator[](v50, v21 - 1) == 49;
      v23 = (_DWORD *)*((_DWORD *)this + 37);
      v41 = v23[188];
      v24 = v22;
      v42 = v23[189];
      v43 = v23[190];
      v38 = v23[6];
      v39 = v23[7];
      v25 = *((_DWORD *)this + 67);
      v40 = v23[8];
      if ( v25 )
      {
        v26 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v25 + 44))(v25, v45);
        v41 = *v26;
        v42 = v26[1];
        v43 = v26[2];
        v27 = (_DWORD *)*((_DWORD *)this + 67);
        v28 = v27[6];
        v27 += 6;
        v38 = v28;
        v39 = v27[1];
        v40 = v27[2];
      }
      SoundMgr::Instance();
      SoundMgr::PlaySoundA((int)this + 420, (int)&v38, (int)&v41, v24, COERCE_INT(0.75));
      v17 = v50;
    }
    goto LABEL_29;
  }
  if ( *((_DWORD *)this + 67) )
  {
    v29 = *((_DWORD *)this + 119);
    if ( v29 )
    {
      v30 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v29 + 56))(v29, v48);
      v52 = 10;
      v31 = (void *)sub_102C71E0(v49, v30);
      LOBYTE(v52) = 11;
      sub_102C7580(v51, v31);
      LOBYTE(v52) = 13;
      std::string::~string(v49);
      LOBYTE(v52) = 14;
      std::string::~string(v48);
      v32 = std::string::length(v51);
      v33 = *(_BYTE *)std::string::operator[](v51, v32 - 1) == 49;
      (*(void (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 67) + 44))(*((_DWORD *)this + 67), v45);
      v34 = (_DWORD *)*((_DWORD *)this + 67);
      v35 = v34[6];
      v34 += 6;
      v44[0] = v35;
      v44[1] = v34[1];
      v44[2] = v34[2];
      SoundMgr::Instance();
      SoundMgr::PlaySoundA((int)this + 420, (int)v44, (int)v45, v33, COERCE_INT(0.75));
      v17 = v51;
LABEL_29:
      v52 = -1;
      std::string::~string(v17);
    }
  }
}
