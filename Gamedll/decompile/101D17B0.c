/*
 * func-name: sub_101D17B0
 * func-address: 0x101d17b0
 * callers: 0x1000cb21
 * callees: 0x10013043, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101D17B0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x2BCu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))GameClient::FSAlarm::~FSAlarm);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    GameClient::FSAlarm::~FSAlarm((GameClient::FSAlarm *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
