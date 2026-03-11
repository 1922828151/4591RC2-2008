/*
 * func-name: ??0FSLock@GameClient@@QAE@XZ_0
 * func-address: 0x1024ca10
 * callers: 0x10009f7f
 * callees: 0x100186e2, 0x102c3880, 0x102c3a00
 */

GameClient::FSLock *__thiscall GameClient::FSLock::FSLock(GameClient::FSLock *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::FSkill::FSkill(this);
  *((float *)this + 177) = 1.5;
  *((float *)this + 178) = 1.0;
  v5 = 0;
  *(_DWORD *)this = &GameClient::FSLock::`vftable';
  *((_DWORD *)this + 175) = 1;
  *((_DWORD *)this + 176) = 100;
  std::string::string(v4, &unk_103200EC);
  LOBYTE(v5) = 1;
  std::string::string(v3, "TrackType");
  LOBYTE(v5) = 2;
  sub_102C3880(this, v3, (char *)this + 700, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_10320134);
  LOBYTE(v5) = 3;
  std::string::string(v4, "Range");
  LOBYTE(v5) = 4;
  sub_102C3880(this, v4, (char *)this + 704, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_10320148);
  LOBYTE(v5) = 5;
  std::string::string(v4, "LockTargetTime");
  LOBYTE(v5) = 6;
  sub_102C3A00(this, v4, (char *)this + 708, v3);
  LOBYTE(v5) = 5;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_10320164);
  LOBYTE(v5) = 7;
  std::string::string(v4, "UnlockTargetTime");
  LOBYTE(v5) = 8;
  sub_102C3A00(this, v4, (char *)this + 712, v3);
  LOBYTE(v5) = 7;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
