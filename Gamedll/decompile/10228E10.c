/*
 * func-name: ??1FEquip@GameClient@@UAE@XZ_0
 * func-address: 0x10228e10
 * callers: 0x10005f7e
 * callees: 0x10003fe9, 0x10013a6b, 0x10014c90, 0x102c9e3e
 */

void __thiscall GameClient::FEquip::~FEquip(GameClient::FEquip *this)
{
  int v2; // [esp+0h] [ebp-18h]
  int v3; // [esp+0h] [ebp-18h]
  int v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+4h] [ebp-14h]
  int v9; // [esp+4h] [ebp-14h]
  int v10; // [esp+4h] [ebp-14h]
  int v11; // [esp+4h] [ebp-14h]

  *(_DWORD *)this = &GameClient::FEquip::`vftable';
  std::string::~string((char *)this + 2048);
  sub_10014C90(v2, v7);
  sub_10014C90(v3, v8);
  sub_10014C90(v4, v9);
  sub_10014C90(v5, v10);
  sub_10014C90(v6, v11);
  sub_10003FE9();
  `eh vector destructor iterator'((char *)this + 1376, 0x1Cu, 9, std::string::~string);
  `eh vector destructor iterator'((char *)this + 1124, 0x1Cu, 9, std::string::~string);
  `eh vector destructor iterator'((char *)this + 984, 0x1Cu, 5, std::string::~string);
  `eh vector destructor iterator'((char *)this + 844, 0x1Cu, 5, std::string::~string);
  `eh vector destructor iterator'((char *)this + 704, 0x1Cu, 5, std::string::~string);
  sub_10003FE9();
  sub_10003FE9();
  sub_10003FE9();
  sub_10003FE9();
  sub_10003FE9();
  std::string::~string((char *)this + 596);
  std::string::~string((char *)this + 568);
  std::string::~string((char *)this + 540);
  std::string::~string((char *)this + 504);
  std::string::~string((char *)this + 476);
  sub_10003FE9();
  sub_10003FE9();
  std::string::~string((char *)this + 416);
  std::string::~string((char *)this + 388);
  std::string::~string((char *)this + 360);
  std::string::~string((char *)this + 272);
  GameClient::FSystemPart::~FSystemPart(this);
}
