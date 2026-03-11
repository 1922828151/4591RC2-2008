/*
 * func-name: sub_10034C20
 * func-address: 0x10034c20
 * callers: 0x10003314
 * callees: 0x1000b082, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_10034C20(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x104u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FProductInfo::~FProductInfo);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::FProductInfo::~FProductInfo((GameClient::FProductInfo *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
