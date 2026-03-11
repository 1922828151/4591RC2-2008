/*
 * func-name: ?UpdateFPV@Weapon@GameClient@@UAEXXZ_0
 * func-address: 0x10195b50
 * callers: 0x1000f8df
 * callees: 0x1000a042, 0x1000bf05, 0x10010519, 0x10014669, 0x100163b0
 */

void __thiscall GameClient::Weapon::UpdateFPV(GameClient::Weapon *this)
{
  int v2; // eax
  int v3; // ecx
  int (__thiscall *v4)(int, int, _BYTE *, _DWORD); // eax
  char v5; // bl
  int v6; // [esp-Ch] [ebp-84h]
  _BYTE v7[28]; // [esp+10h] [ebp-68h] BYREF
  _BYTE v8[48]; // [esp+2Ch] [ebp-4Ch] BYREF
  _BYTE v9[16]; // [esp+5Ch] [ebp-1Ch] BYREF
  int v10; // [esp+74h] [ebp-4h]

  GameClient::Equip::UpdateFPV(this);
  if ( *((_DWORD *)this + 186) == 2 && sub_1000BF05() && (unsigned __int8)sub_100163B0() )
  {
    sub_10014669(v8);
    v2 = std::operator+<char>(v7, *((_DWORD *)this + 2) + 2440, &unk_10315418);
    v3 = *((_DWORD *)this + 45);
    v6 = v2;
    v4 = *(int (__thiscall **)(int, int, _BYTE *, _DWORD))(*(_DWORD *)v3 + 120);
    v10 = 0;
    v5 = v4(v3, v6, v8, 0);
    v10 = -1;
    std::string::~string(v7);
    if ( v5 )
      sub_10010519((int)v8, (int)v9);
    else
      sub_10010519((int)this + 36, (int)this + 24);
  }
}
