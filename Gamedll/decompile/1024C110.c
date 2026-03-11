/*
 * func-name: ??1FSkill@GameClient@@UAE@XZ_0
 * func-address: 0x1024c110
 * callers: 0x1001041f
 * callees: 0x1000321f, 0x10014c90
 */

void __thiscall GameClient::FSkill::~FSkill(GameClient::FSkill *this)
{
  int v2; // [esp+0h] [ebp-18h]
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int v6; // [esp+4h] [ebp-14h]
  int v7; // [esp+4h] [ebp-14h]

  *(_DWORD *)this = &GameClient::FSkill::`vftable';
  std::string::~string((char *)this + 672);
  sub_10014C90(v2, v5);
  std::string::~string((char *)this + 564);
  std::string::~string((char *)this + 536);
  std::string::~string((char *)this + 508);
  sub_10014C90(v3, v6);
  std::string::~string((char *)this + 396);
  std::string::~string((char *)this + 368);
  std::string::~string((char *)this + 340);
  sub_10014C90(v4, v7);
  std::string::~string((char *)this + 232);
  std::string::~string((char *)this + 204);
  std::string::~string((char *)this + 176);
  GameClient::Flyweight::~Flyweight(this);
}
