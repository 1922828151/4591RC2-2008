/*
 * func-name: ??0FAAlarm@GameClient@@QAE@XZ_0
 * func-address: 0x10246c00
 * callers: 0x100104f6
 * callees: 0x1000c563, 0x102c3c40
 */

GameClient::FAAlarm *__thiscall GameClient::FAAlarm::FAAlarm(GameClient::FAAlarm *this)
{
  _BYTE v3[28]; // [esp+10h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v5; // [esp+50h] [ebp-4h]

  GameClient::FAura::FAura(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FAAlarm::`vftable';
  std::string::string((char *)this + 260);
  LOBYTE(v5) = 1;
  std::string::operator=((char *)this + 260, &unk_1031F4D8);
  std::string::string(v4, &unk_1031F4DC);
  LOBYTE(v5) = 2;
  std::string::string(v3, "AlarmInfo");
  LOBYTE(v5) = 3;
  sub_102C3C40(this, v3, (char *)this + 260, v4);
  LOBYTE(v5) = 2;
  std::string::~string(v3);
  LOBYTE(v5) = 1;
  std::string::~string(v4);
  return this;
}
