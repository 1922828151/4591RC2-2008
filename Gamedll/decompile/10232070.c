/*
 * func-name: ??0FNonControlledEstab@GameClient@@QAE@XZ_0
 * func-address: 0x10232070
 * callers: 0x10011ce3
 * callees: 0x10014245, 0x102c3b80
 */

GameClient::FNonControlledEstab *__thiscall GameClient::FNonControlledEstab::FNonControlledEstab(
        GameClient::FNonControlledEstab *this)
{
  _BYTE v3[28]; // [esp+10h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v5; // [esp+50h] [ebp-4h]

  GameClient::FEstablishment::FEstablishment(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FNonControlledEstab::`vftable';
  *((_BYTE *)this + 516) = 1;
  std::string::string(v4, &unk_1031C744);
  LOBYTE(v5) = 1;
  std::string::string(v3, "StaticObject");
  LOBYTE(v5) = 2;
  sub_102C3B80(this, v3, (char *)this + 516, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  return this;
}
