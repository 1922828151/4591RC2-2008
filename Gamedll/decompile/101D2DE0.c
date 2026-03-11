/*
 * func-name: ?Disable@Skill@GameClient@@UAE_NXZ_0
 * func-address: 0x101d2de0
 * callers: 0x100148a3
 * callees: 0x1000516e, 0x10006d89, 0x1000abc8, 0x1000bf05, 0x10010519, 0x10010bae, 0x100141e1, 0x100141eb, 0x10014669, 0x100163b0, 0x10017f35, 0x10018fc0, 0x1001a5d2, 0x102c71e0
 */

char __thiscall GameClient::Skill::Disable(GameClient::Skill *this)
{
  int v2; // edi
  char *v3; // ebx
  void *v4; // ebp
  void *v5; // eax
  bool v6; // cc
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  struct Game *v12; // eax
  int v13; // ebp
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // ecx
  int v18; // [esp+8h] [ebp-C4h]
  int v19; // [esp+Ch] [ebp-C0h]
  int v20; // [esp+10h] [ebp-BCh]
  int v21; // [esp+28h] [ebp-A4h] BYREF
  _DWORD v22[3]; // [esp+30h] [ebp-9Ch] BYREF
  _BYTE v23[12]; // [esp+3Ch] [ebp-90h] BYREF
  _BYTE v24[28]; // [esp+48h] [ebp-84h] BYREF
  _BYTE v25[28]; // [esp+64h] [ebp-68h] BYREF
  _BYTE v26[48]; // [esp+80h] [ebp-4Ch] BYREF
  _BYTE v27[16]; // [esp+B0h] [ebp-1Ch] BYREF
  int v28; // [esp+C8h] [ebp-4h]

  v2 = *((_DWORD *)this + 2);
  v3 = (char *)this + 24;
  *((_DWORD *)this + 4) = 3;
  v4 = (void *)*((_DWORD *)this + 8);
  if ( *((_DWORD *)this + 7) > (unsigned int)v4 )
    _invalid_parameter_noinfo();
  v5 = (void *)*((_DWORD *)v3 + 1);
  v6 = (unsigned int)v5 <= *((_DWORD *)v3 + 2);
  v21 = (int)v5;
  if ( !v6 )
  {
    _invalid_parameter_noinfo();
    v5 = (void *)v21;
  }
  sub_100141EB((int)&v21, (int)v3, v5, (int)v3, v4);
  *((float *)this + 16) = *(float *)(v2 + 156);
  if ( sub_1000BF05() && (unsigned __int8)sub_100163B0() )
    sub_1001A5D2(0);
  v7 = *((_DWORD *)this + 121);
  if ( v7 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 40))(v7) )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 121) + 44))(*((_DWORD *)this + 121));
  v8 = *((_DWORD *)this + 141);
  if ( v8 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 40))(v8) )
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 141) + 44))(*((_DWORD *)this + 141));
  v9 = *(_DWORD *)(v2 + 112);
  if ( v9 == 1 )
  {
    v10 = *((_DWORD *)this + 5);
    if ( *(_DWORD *)(v10 + 360) )
      return 1;
    v20 = *(_DWORD *)(v2 + 112);
    *(_BYTE *)(v10 + 920) = 0;
    GameClient::Robot::PlayAnimation(v2 + 564, 0.0, 1.0, 1.0, 0.0, v20);
  }
  else if ( v9 == 3 )
  {
    *(_BYTE *)(*((_DWORD *)this + 5) + 184) = 0;
    GameClient::Equip::PlayAnimation(v2 + 564, 0.0, 1.0, 1.0, COERCE_INT(0.0), 1);
  }
  if ( *(_DWORD *)(v2 + 528) )
  {
    v11 = sub_102C71E0(v24, v2 + 508);
    v28 = 0;
    v19 = std::operator+<char>(v25, v11, ".reb");
    LOBYTE(v28) = 1;
    v12 = Game::Instance();
    v13 = sub_100141E1(*((_DWORD *)v12 + 25), v19, 1);
    LOBYTE(v28) = 0;
    std::string::~string(v25);
    v28 = -1;
    std::string::~string(v24);
    if ( sub_1000ABC8(v13) )
    {
      sub_10014669(v26);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _BYTE *, _DWORD))(**((_DWORD **)this + 5) + 88))(
             *((_DWORD *)this + 5),
             v2 + 536,
             v26,
             0) )
      {
        sub_10010519((int)v26, (int)v27);
      }
      else
      {
        sub_10010519(*((_DWORD *)this + 5) + 36, *((_DWORD *)this + 5) + 24);
      }
    }
  }
  if ( *(_DWORD *)(v2 + 648) )
  {
    if ( *((_DWORD *)this + 161) )
    {
LABEL_28:
      v16 = (_DWORD *)*((_DWORD *)this + 5);
      v22[0] = v16[6];
      v22[1] = v16[7];
      v22[2] = v16[8];
      v18 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*v16 + 44))(v16, v23);
      SoundMgr::Instance();
      SoundMgr::PlaySoundA((int)this + 588, (int)v22, v18, 0, COERCE_INT(0.75));
      return 1;
    }
    *((_BYTE *)this + 652) = *(_BYTE *)(v2 + 656);
    *((float *)this + 162) = *(float *)(v2 + 652);
    std::string::operator=((char *)this + 588, v2 + 592);
    v14 = AudioDevice::Instance();
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14);
    *((_DWORD *)this + 161) = v15;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 648) + 12))(*(_DWORD *)(v2 + 648), v15);
  }
  if ( *((_DWORD *)this + 161) )
    goto LABEL_28;
  return 1;
}
