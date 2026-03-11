/*
 * func-name: ?EnableSkill@Item@GameClient@@UAEXK@Z_0
 * func-address: 0x10161080
 * callers: 0x10014853
 * callees: 0x10003f2b, 0x100058a8, 0x10006a19, 0x100081c5, 0x10010bae, 0x10018fc0, 0x102c71e0, 0x102c7580, 0x102c9d62
 */

void __thiscall GameClient::Item::EnableSkill(GameClient::Item *this, unsigned int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  GameClient::Robot *v6; // ecx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  void *v10; // eax
  int v11; // eax
  _BYTE *v12; // eax
  _BYTE *v13; // ecx
  int v14; // ecx
  int v15; // eax
  void *v16; // eax
  int v17; // eax
  bool v18; // zf
  _DWORD *v19; // eax
  int v20; // edi
  int v21; // ecx
  int *v22; // eax
  _DWORD *v23; // eax
  int v24; // ecx
  float v25; // [esp+4h] [ebp-BCh]
  float v26; // [esp+8h] [ebp-B8h]
  int v27; // [esp+1Ch] [ebp-A4h] BYREF
  int v28; // [esp+20h] [ebp-A0h]
  int v29; // [esp+24h] [ebp-9Ch]
  int v30; // [esp+28h] [ebp-98h] BYREF
  int v31; // [esp+2Ch] [ebp-94h]
  int v32; // [esp+30h] [ebp-90h]
  _BYTE v33[28]; // [esp+34h] [ebp-8Ch] BYREF
  _BYTE v34[28]; // [esp+50h] [ebp-70h] BYREF
  _BYTE v35[12]; // [esp+6Ch] [ebp-54h] BYREF
  _BYTE v36[28]; // [esp+78h] [ebp-48h] BYREF
  _BYTE v37[28]; // [esp+94h] [ebp-2Ch] BYREF
  int v38; // [esp+BCh] [ebp-4h]

  v3 = *((_DWORD *)this + 36);
  if ( !v3 || *(_DWORD *)(v3 + 12) != a2 )
  {
    v4 = *((_DWORD *)this + 192);
    *((_DWORD *)this + 194) = -1;
    if ( v4 && *(_DWORD *)(v4 + 12) == a2 )
    {
      if ( *(_DWORD *)(v4 + 16) == 2 )
        *((_DWORD *)this + 194) = 0;
    }
    else
    {
      v5 = *((_DWORD *)this + 193);
      if ( v5 && *(_DWORD *)(v5 + 12) == a2 && *(_DWORD *)(v5 + 16) == 2 )
        *((_DWORD *)this + 194) = 1;
    }
    v6 = (GameClient::Robot *)*((_DWORD *)this + 37);
    if ( v6 )
    {
      if ( (*((_DWORD *)v6 + 92) & 0x20) == 0 )
      {
        GameClient::Robot::Use(v6);
        v7 = 1.0;
        if ( GameClient::WorldObject::IsLocal(*((GameClient::WorldObject **)this + 37)) )
        {
          GameClient::AEquip::PlayAnimationFPV(
            *((GameClient::AEquip **)this + 45),
            *(_DWORD *)(*((_DWORD *)this + 45) + 2208),
            0.0,
            1.0,
            1.0,
            1);
          v7 = 1.0;
        }
        v26 = v7;
        v25 = v7;
        GameClient::AEquip::PlayAnimation(
          *((GameClient::AEquip **)this + 45),
          *(_DWORD *)(*((_DWORD *)this + 45) + 2188),
          0.0,
          v25,
          v26,
          1);
      }
      if ( GameClient::WorldObject::IsLocal(*((GameClient::WorldObject **)this + 37)) )
      {
        v8 = *((_DWORD *)this + 99);
        if ( !v8 )
          return;
        v9 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 56))(v8, v33);
        v38 = 0;
        v10 = (void *)sub_102C71E0(v34, v9);
        LOBYTE(v38) = 1;
        sub_102C7580(v36, v10);
        LOBYTE(v38) = 3;
        std::string::~string(v34);
        LOBYTE(v38) = 4;
        std::string::~string(v33);
        v11 = std::string::length(v36);
        v12 = (_BYTE *)std::string::operator[](v36, v11 - 1);
        (*(void (__thiscall **)(_DWORD, bool, _DWORD))(**((_DWORD **)this + 99) + 36))(
          *((_DWORD *)this + 99),
          *v12 == 49,
          0.75);
        v38 = -1;
        v13 = v36;
      }
      else
      {
        v14 = *((_DWORD *)this + 119);
        if ( !v14 )
          return;
        v15 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v14 + 56))(v14, v34);
        v38 = 5;
        v16 = (void *)sub_102C71E0(v33, v15);
        LOBYTE(v38) = 6;
        sub_102C7580(v37, v16);
        LOBYTE(v38) = 8;
        std::string::~string(v33);
        LOBYTE(v38) = 9;
        std::string::~string(v34);
        v17 = std::string::length(v37);
        v18 = *(_BYTE *)std::string::operator[](v37, v17 - 1) == 49;
        v19 = (_DWORD *)*((_DWORD *)this + 37);
        v30 = v19[188];
        v20 = v18;
        v31 = v19[189];
        v32 = v19[190];
        v27 = v19[6];
        v28 = v19[7];
        v21 = *((_DWORD *)this + 67);
        v29 = v19[8];
        if ( v21 )
        {
          v22 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v21 + 44))(v21, v35);
          v30 = *v22;
          v31 = v22[1];
          v32 = v22[2];
          v23 = (_DWORD *)*((_DWORD *)this + 67);
          v24 = v23[6];
          v23 += 6;
          v27 = v24;
          v28 = v23[1];
          v29 = v23[2];
        }
        SoundMgr::Instance();
        SoundMgr::PlaySoundA((int)this + 420, (int)&v27, (int)&v30, v20, COERCE_INT(0.75));
        v38 = -1;
        v13 = v37;
      }
      std::string::~string(v13);
    }
  }
}
