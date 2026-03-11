/*
 * func-name: ??1FRobotFramework@GameClient@@UAE@XZ_0
 * func-address: 0x1023d5a0
 * callers: 0x10013cbe
 * callees: 0x1000321f, 0x10003fe9, 0x100095b6, 0x100181e2, 0x102c0750, 0x102c9d50, 0x102c9e3e
 */

void __thiscall GameClient::FRobotFramework::~FRobotFramework(GameClient::FRobotFramework *this)
{
  unsigned int v2; // ebx
  bool v3; // cc
  char *v4; // edi
  unsigned int v5; // ebp
  void *v6; // eax
  _BYTE v7[8]; // [esp+18h] [ebp-14h] BYREF
  int v8; // [esp+28h] [ebp-4h]

  *(_DWORD *)this = &GameClient::FRobotFramework::`vftable';
  v2 = *((_DWORD *)this + 108);
  v3 = *((_DWORD *)this + 107) <= v2;
  v4 = (char *)this + 424;
  v8 = 14;
  if ( !v3 )
    _invalid_parameter_noinfo();
  v5 = *((_DWORD *)v4 + 1);
  if ( v5 > *((_DWORD *)v4 + 2) )
    _invalid_parameter_noinfo();
  sub_100181E2((int)v7, (int)v4, v5, (int)v4, v2);
  LOBYTE(v8) = 13;
  `eh vector destructor iterator'((char *)this + 488, 0x1Cu, 50, std::string::~string);
  LOBYTE(v8) = 12;
  sub_10003FE9();
  LOBYTE(v8) = 11;
  sub_10003FE9();
  LOBYTE(v8) = 10;
  sub_10003FE9();
  v6 = (void *)*((_DWORD *)v4 + 1);
  LOBYTE(v8) = 9;
  if ( v6 )
  {
    sub_100095B6(v6, *((_DWORD *)v4 + 2));
    operator delete(*((void **)v4 + 1));
  }
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  LOBYTE(v8) = 8;
  std::string::~string((char *)this + 396);
  LOBYTE(v8) = 7;
  std::string::~string((char *)this + 368);
  LOBYTE(v8) = 6;
  std::string::~string((char *)this + 340);
  LOBYTE(v8) = 5;
  std::string::~string((char *)this + 312);
  LOBYTE(v8) = 4;
  std::string::~string((char *)this + 284);
  LOBYTE(v8) = 3;
  std::string::~string((char *)this + 240);
  LOBYTE(v8) = 2;
  std::string::~string((char *)this + 212);
  LOBYTE(v8) = 1;
  std::string::~string((char *)this + 184);
  LOBYTE(v8) = 0;
  sub_102C0750((char *)this + 124);
  v8 = -1;
  GameClient::Flyweight::~Flyweight(this);
}
