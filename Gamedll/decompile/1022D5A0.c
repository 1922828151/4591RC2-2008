/*
 * func-name: ??0FItem@GameClient@@QAE@XZ_0
 * func-address: 0x1022d5a0
 * callers: 0x100076e9
 * callees: 0x10005a4c, 0x102c3880, 0x102c3a00, 0x102c3c40
 */

GameClient::FItem *__thiscall GameClient::FItem::FItem(GameClient::FItem *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::FEquip::FEquip(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FItem::`vftable';
  std::string::string((char *)this + 2084);
  std::string::string((char *)this + 2112);
  std::string::string((char *)this + 2140);
  LOBYTE(v5) = 3;
  *((_DWORD *)this + 79) = 1;
  *((_DWORD *)this + 542) = 1;
  std::string::operator=((char *)this + 2112, &unk_1031C3E4);
  std::string::operator=((char *)this + 2140, &unk_1031C3E5);
  *((float *)this + 548) = 0.0;
  *((float *)this + 549) = 0.0;
  *((_DWORD *)this + 543) = 0;
  *((_DWORD *)this + 544) = 0;
  *((_DWORD *)this + 545) = 5;
  *((_DWORD *)this + 546) = 180;
  *((_DWORD *)this + 547) = 0;
  std::string::operator=((char *)this + 2084, &unk_1031C3E6);
  std::string::string(v4, &unk_1031C3E8);
  LOBYTE(v5) = 4;
  std::string::string(v3, "PrimarySkillName");
  LOBYTE(v5) = 5;
  sub_102C3C40(this, v3, (char *)this + 2112, v4);
  LOBYTE(v5) = 4;
  std::string::~string(v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031C414);
  LOBYTE(v5) = 6;
  std::string::string(v4, "SecondarySkillName");
  LOBYTE(v5) = 7;
  sub_102C3C40(this, v4, (char *)this + 2140, v3);
  LOBYTE(v5) = 6;
  std::string::~string(v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031C440);
  LOBYTE(v5) = 8;
  std::string::string(v4, "UsableDistance");
  LOBYTE(v5) = 9;
  sub_102C3880(this, v4, (char *)this + 2180, v3);
  LOBYTE(v5) = 8;
  std::string::~string(v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031C45C);
  LOBYTE(v5) = 10;
  std::string::string(v4, "Capacitance");
  LOBYTE(v5) = 11;
  sub_102C3A00(this, v4, (char *)this + 2192, v3);
  LOBYTE(v5) = 10;
  std::string::~string(v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031C480);
  LOBYTE(v5) = 12;
  std::string::string(v4, "CapacitanceDuration");
  LOBYTE(v5) = 13;
  sub_102C3A00(this, v4, (char *)this + 2196, v3);
  LOBYTE(v5) = 12;
  std::string::~string(v4);
  LOBYTE(v5) = 3;
  std::string::~string(v3);
  return this;
}
