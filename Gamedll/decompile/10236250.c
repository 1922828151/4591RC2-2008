/*
 * func-name: ??1FRobotArmor@GameClient@@UAE@XZ_0
 * func-address: 0x10236250
 * callers: 0x1000dbb1
 * callees: 0x10003fe9, 0x1000b82a, 0x1000fcea, 0x10013a6b, 0x102c9d50
 */

void __thiscall GameClient::FRobotArmor::~FRobotArmor(GameClient::FRobotArmor *this)
{
  void *v2; // eax
  void *v3; // eax

  *(_DWORD *)this = &GameClient::FRobotArmor::`vftable';
  sub_10003FE9();
  sub_10003FE9();
  v2 = (void *)*((_DWORD *)this + 107);
  if ( v2 )
  {
    sub_1000B82A(v2, *((_DWORD *)this + 108));
    operator delete(*((void **)this + 107));
  }
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 108) = 0;
  *((_DWORD *)this + 109) = 0;
  sub_10003FE9();
  sub_10003FE9();
  v3 = (void *)*((_DWORD *)this + 95);
  if ( v3 )
  {
    sub_1000FCEA(v3, *((_DWORD *)this + 96));
    operator delete(*((void **)this + 95));
  }
  *((_DWORD *)this + 95) = 0;
  *((_DWORD *)this + 96) = 0;
  *((_DWORD *)this + 97) = 0;
  std::string::~string((char *)this + 304);
  std::string::~string((char *)this + 276);
  GameClient::FSystemPart::~FSystemPart(this);
}
