/*
 * func-name: ?Enable@Skill@GameClient@@UAE_NPAVWorldObject@2@@Z_0
 * func-address: 0x101d2920
 * callers: 0x1000b8d9
 * callees: 0x1000516e, 0x10006d89, 0x1000abc8, 0x1000ad76, 0x1000bf05, 0x10010519, 0x10010bae, 0x100141e1, 0x10014669, 0x100163b0, 0x10017f35, 0x10018fc0, 0x1001a5d2, 0x102c71e0
 */

char __thiscall GameClient::Skill::Enable(GameClient::Skill *this, struct GameClient::WorldObject *a2)
{
  double v3; // st7
  int v4; // ebp
  int v5; // eax
  char v6; // al
  int v7; // eax
  struct Game *v8; // eax
  int v9; // edi
  _DWORD *v10; // ecx
  int v12; // [esp+8h] [ebp-BCh]
  int v13; // [esp+Ch] [ebp-B8h]
  _DWORD v14[3]; // [esp+28h] [ebp-9Ch] BYREF
  _BYTE v15[48]; // [esp+34h] [ebp-90h] BYREF
  _BYTE v16[16]; // [esp+64h] [ebp-60h] BYREF
  _BYTE v17[12]; // [esp+74h] [ebp-50h] BYREF
  _BYTE v18[28]; // [esp+80h] [ebp-44h] BYREF
  _BYTE v19[28]; // [esp+9Ch] [ebp-28h] BYREF
  int v20; // [esp+C0h] [ebp-4h]

  v3 = 0.0;
  v4 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 5) = a2;
  if ( *(float *)(v4 + 148) > 0.0 )
    *((float *)this + 15) = 0.0;
  v5 = *(_DWORD *)(v4 + 112);
  if ( v5 == 1 )
  {
    *((_BYTE *)a2 + 920) = 0;
    if ( (unsigned __int8)GameClient::Robot::PlayAnimation(*((_DWORD *)this + 2) + 396, 0.0, 1.0, 1.0, 0.0, 1)
      && *(_BYTE *)(v4 + 504) )
    {
      *((_BYTE *)a2 + 920) = 1;
    }
    if ( !*(_BYTE *)(v4 + 120) && *((_DWORD *)a2 + 88) == 1 )
    {
      *((_DWORD *)a2 + 88) = 0;
      GameClient::Robot::UpdatePhysicsController(a2);
    }
  }
  else
  {
    if ( v5 != 3 )
      goto LABEL_15;
    *((_BYTE *)a2 + 184) = 0;
    if ( (unsigned __int8)GameClient::Equip::PlayAnimation(
                            *((_DWORD *)this + 2) + 396,
                            0.0,
                            1.0,
                            1.0,
                            COERCE_INT(0.0),
                            1)
      && *(_BYTE *)(v4 + 504) )
    {
      *((_BYTE *)a2 + 184) = 1;
    }
  }
  v3 = 0.0;
LABEL_15:
  if ( v3 == *(float *)(v4 + 148) )
  {
    if ( *(_DWORD *)(v4 + 360) )
    {
      v7 = sub_102C71E0(v19, v4 + 340);
      v20 = 0;
      v13 = std::operator+<char>(v18, v7, ".reb");
      LOBYTE(v20) = 1;
      v8 = Game::Instance();
      v9 = sub_100141E1(*((_DWORD *)v8 + 25), v13, 1);
      LOBYTE(v20) = 0;
      std::string::~string(v18);
      v20 = -1;
      std::string::~string(v19);
      if ( sub_1000ABC8(v9) )
      {
        sub_10014669(v15);
        v6 = (*(int (__stdcall **)(int, _BYTE *, _DWORD))(**((_DWORD **)this + 5) + 88))(v4 + 368, v15, 0);
LABEL_19:
        if ( v6 )
          sub_10010519((int)v15, (int)v16);
        else
          sub_10010519(*((_DWORD *)this + 5) + 36, *((_DWORD *)this + 5) + 24);
      }
    }
  }
  else if ( sub_1000BF05() && !(unsigned __int8)sub_100163B0() )
  {
    sub_1001A5D2(1);
    sub_10014669(v15);
    v6 = (*(int (__stdcall **)(int, _BYTE *, _DWORD))(**((_DWORD **)this + 5) + 88))(
           *((_DWORD *)this + 2) + 368,
           v15,
           0);
    goto LABEL_19;
  }
  if ( *((_DWORD *)this + 141) )
  {
    v10 = (_DWORD *)*((_DWORD *)this + 5);
    v14[0] = v10[6];
    v14[1] = v10[7];
    v14[2] = v10[8];
    v12 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*v10 + 44))(v10, v17);
    SoundMgr::Instance();
    SoundMgr::PlaySoundA((int)this + 508, (int)v14, v12, 0, COERCE_INT(0.75));
  }
  return 1;
}
