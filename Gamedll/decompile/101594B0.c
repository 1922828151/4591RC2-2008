/*
 * func-name: ?Stop@Equip@GameClient@@UAEXXZ_0
 * func-address: 0x101594b0
 * callers: 0x100150eb
 * callees: 0x10003f2b, 0x10006a19, 0x100081c5, 0x1000b208, 0x102c71e0, 0x102c7580, 0x102c9d62
 */

void __thiscall GameClient::Equip::Stop(GameClient::Equip *this)
{
  GameClient::Robot *v2; // ecx
  double v3; // st7
  int v4; // eax
  void *v5; // eax
  int v6; // eax
  int v7; // eax
  void *v8; // eax
  int v9; // eax
  float v10; // [esp+4h] [ebp-CCh]
  float v11; // [esp+8h] [ebp-C8h]
  _BYTE v12[28]; // [esp+18h] [ebp-B8h] BYREF
  _BYTE v13[28]; // [esp+34h] [ebp-9Ch] BYREF
  _BYTE v14[28]; // [esp+50h] [ebp-80h] BYREF
  _BYTE v15[28]; // [esp+6Ch] [ebp-64h] BYREF
  _BYTE v16[28]; // [esp+88h] [ebp-48h] BYREF
  _BYTE v17[28]; // [esp+A4h] [ebp-2Ch] BYREF
  int v18; // [esp+CCh] [ebp-4h]

  if ( !*((_DWORD *)this + 67) )
  {
    v2 = (GameClient::Robot *)*((_DWORD *)this + 37);
    if ( v2 )
    {
      GameClient::Robot::StopUse(v2);
      v3 = 1.0;
      if ( GameClient::WorldObject::IsLocal(this) )
      {
        GameClient::AEquip::PlayAnimationFPV(
          *((GameClient::AEquip **)this + 45),
          *(_DWORD *)(*((_DWORD *)this + 45) + 2200),
          0.2,
          1.0,
          1.0,
          1);
        v3 = 1.0;
      }
      v11 = v3;
      v10 = v3;
      GameClient::AEquip::PlayAnimation(
        *((GameClient::AEquip **)this + 45),
        *(_DWORD *)(*((_DWORD *)this + 45) + 2180),
        0.2,
        v10,
        v11,
        1);
    }
  }
  if ( *((_DWORD *)this + 119)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 119) + 40))(*((_DWORD *)this + 119)) )
  {
    v4 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 119) + 56))(*((_DWORD *)this + 119), v13);
    v18 = 0;
    v5 = (void *)sub_102C71E0(v12, v4);
    LOBYTE(v18) = 1;
    sub_102C7580(v17, v5);
    LOBYTE(v18) = 3;
    std::string::~string(v12);
    LOBYTE(v18) = 4;
    std::string::~string(v13);
    v6 = std::string::length(v17);
    if ( *(_BYTE *)std::string::operator[](v17, v6 - 1) == 49 )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 119) + 44))(*((_DWORD *)this + 119));
    v18 = -1;
    std::string::~string(v17);
  }
  if ( *((_DWORD *)this + 99)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 99) + 40))(*((_DWORD *)this + 99)) )
  {
    v7 = (*(int (__thiscall **)(_DWORD, _BYTE *))(**((_DWORD **)this + 99) + 56))(*((_DWORD *)this + 99), v14);
    v18 = 5;
    v8 = (void *)sub_102C71E0(v15, v7);
    LOBYTE(v18) = 6;
    sub_102C7580(v16, v8);
    LOBYTE(v18) = 8;
    std::string::~string(v15);
    LOBYTE(v18) = 9;
    std::string::~string(v14);
    v9 = std::string::length(v16);
    if ( *(_BYTE *)std::string::operator[](v16, v9 - 1) == 49 )
      (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 99) + 44))(*((_DWORD *)this + 99));
    v18 = -1;
    std::string::~string(v16);
  }
}
