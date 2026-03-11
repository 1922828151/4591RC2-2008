/*
 * func-name: ?LoadResources@Skill@GameClient@@UAE_NXZ_0
 * func-address: 0x101d2100
 * callers: 0x1000448a
 * callees: 0x1000516e, 0x10006d89, 0x1000bf05, 0x1000dd73, 0x10010519, 0x10014669, 0x10017f35, 0x10019484, 0x1001a5d2, 0x102c71e0
 */

bool __thiscall GameClient::Skill::LoadResources(GameClient::Skill *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  struct Game *v5; // eax
  int v6; // eax
  int v7; // eax
  struct Game *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebp
  int v14; // edi
  bool v15; // zf
  bool result; // al
  _BYTE v17[28]; // [esp+30h] [ebp-C4h] BYREF
  _BYTE v18[28]; // [esp+4Ch] [ebp-A8h] BYREF
  _BYTE v19[48]; // [esp+68h] [ebp-8Ch] BYREF
  _BYTE v20[16]; // [esp+98h] [ebp-5Ch] BYREF
  _BYTE v21[48]; // [esp+A8h] [ebp-4Ch] BYREF
  _BYTE v22[16]; // [esp+D8h] [ebp-1Ch] BYREF
  int v23; // [esp+F0h] [ebp-4h]

  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)(v2 + 196) )
  {
    v3 = sub_102C71E0(v17, v2 + 176);
    v23 = 0;
    v4 = std::operator+<char>(v18, v3, ".reb");
    LOBYTE(v23) = 1;
    std::string::operator=((char *)this + 68, v4);
    LOBYTE(v23) = 0;
    std::string::~string(v18);
    v23 = -1;
    std::string::~string(v17);
    v5 = Game::Instance();
    sub_10019484(*((_DWORD *)v5 + 25), 0);
    if ( sub_1000BF05() )
    {
      if ( *((_DWORD *)this + 4) || !(unsigned __int8)sub_1000DD73() )
      {
        sub_1001A5D2(0);
      }
      else
      {
        sub_1001A5D2(1);
        sub_10014669(v19);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _BYTE *, _DWORD))(**((_DWORD **)this + 5) + 88))(
               *((_DWORD *)this + 5),
               *((_DWORD *)this + 2) + 204,
               v19,
               0) )
        {
          sub_10010519((int)v19, (int)v20);
        }
        else
        {
          sub_10010519(*((_DWORD *)this + 5) + 36, *((_DWORD *)this + 5) + 24);
        }
      }
    }
  }
  if ( *(_DWORD *)(v2 + 360) )
  {
    if ( 0.0 != *(float *)(v2 + 148) )
    {
      v6 = sub_102C71E0(v18, v2 + 340);
      v23 = 2;
      v7 = std::operator+<char>(v17, v6, ".reb");
      LOBYTE(v23) = 3;
      std::string::operator=((char *)this + 188, v7);
      LOBYTE(v23) = 2;
      std::string::~string(v17);
      v23 = -1;
      std::string::~string(v18);
      v8 = Game::Instance();
      sub_10019484(*((_DWORD *)v8 + 25), 0);
      if ( sub_1000BF05() )
      {
        if ( *((_DWORD *)this + 4) == 2 && (unsigned __int8)sub_1000DD73() )
        {
          sub_1001A5D2(1);
          sub_10014669(v21);
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _BYTE *, _DWORD))(**((_DWORD **)this + 5) + 88))(
                 *((_DWORD *)this + 5),
                 *((_DWORD *)this + 2) + 368,
                 v21,
                 0) )
          {
            sub_10010519((int)v21, (int)v22);
          }
          else
          {
            sub_10010519(*((_DWORD *)this + 5) + 36, *((_DWORD *)this + 5) + 24);
          }
        }
        else
        {
          sub_1001A5D2(0);
        }
      }
    }
  }
  if ( *(_DWORD *)(v2 + 316) && !*((_DWORD *)this + 121) )
  {
    *((_BYTE *)this + 492) = *(_BYTE *)(v2 + 324);
    *((float *)this + 122) = *(float *)(v2 + 320);
    std::string::operator=((char *)this + 428, v2 + 260);
    v9 = AudioDevice::Instance();
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
    *((_DWORD *)this + 121) = v10;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 316) + 12))(*(_DWORD *)(v2 + 316), v10);
  }
  if ( *(_DWORD *)(v2 + 480) && !*((_DWORD *)this + 141) )
  {
    *((_BYTE *)this + 572) = *(_BYTE *)(v2 + 488);
    *((float *)this + 142) = *(float *)(v2 + 484);
    std::string::operator=((char *)this + 508, v2 + 424);
    v11 = AudioDevice::Instance();
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 12))(v11);
    *((_DWORD *)this + 141) = v12;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 480) + 12))(*(_DWORD *)(v2 + 480), v12);
  }
  if ( *((_DWORD *)this + 4) != 2 )
    return 1;
  if ( !*(_BYTE *)(v2 + 504) )
    return 1;
  v13 = *((_DWORD *)this + 5);
  if ( !v13 )
    return 1;
  v14 = *(_DWORD *)(v2 + 112);
  if ( v14 == 1 )
  {
    v15 = (unsigned __int8)GameClient::Robot::PlayAnimation(*((_DWORD *)this + 2) + 396, 0.0, 1.0, 1.0, 0.0, 1) == 0;
    result = 1;
    if ( !v15 )
      *(_BYTE *)(v13 + 920) = 1;
    return result;
  }
  if ( v14 != 3 )
    return 1;
  v15 = (unsigned __int8)GameClient::Equip::PlayAnimation(
                           *((_DWORD *)this + 2) + 396,
                           0.0,
                           1.0,
                           1.0,
                           COERCE_INT(0.0),
                           1) == 0;
  result = 1;
  if ( !v15 )
    *(_BYTE *)(v13 + 184) = 1;
  return result;
}
