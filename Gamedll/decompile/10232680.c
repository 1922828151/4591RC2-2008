/*
 * func-name: sub_10232680
 * func-address: 0x10232680
 * callers: 0x100095bb
 * callees: 0x10011ce3, 0x102c3c40, 0x102c3dc0, 0x102c4180
 */

_DWORD *__thiscall sub_10232680(_DWORD *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::FNonControlledEstab::FNonControlledEstab((GameClient::FNonControlledEstab *)this);
  *this = &FOccupyIcon::`vftable';
  v5 = 0;
  this[131] = 0;
  this[132] = 0;
  this[133] = 0;
  this[135] = 0;
  this[136] = 0;
  this[137] = 0;
  std::string::string(this + 138);
  LOBYTE(v5) = 3;
  std::string::string(v4, &unk_1031C790);
  LOBYTE(v5) = 4;
  std::string::string(v3, "Nation");
  LOBYTE(v5) = 5;
  sub_102C3DC0(this, v3, this + 130, v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031C7A4);
  LOBYTE(v5) = 6;
  std::string::string(v4, "NationFX");
  LOBYTE(v5) = 7;
  sub_102C4180(this, v4, this + 134, v3);
  LOBYTE(v5) = 6;
  std::string::~string(v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031C7C4);
  LOBYTE(v5) = 8;
  std::string::string(v4, "FXLoc");
  LOBYTE(v5) = 9;
  sub_102C3C40(this, v4, this + 138, v3);
  LOBYTE(v5) = 8;
  std::string::~string(v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  return this;
}
