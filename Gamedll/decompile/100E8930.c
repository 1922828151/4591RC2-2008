/*
 * func-name: sub_100E8930
 * func-address: 0x100e8930
 * callers: 0x10005a92
 * callees: 0x1000b2ad, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100E8930(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x424u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))SampleBullet::~SampleBullet);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    SampleBullet::~SampleBullet((SampleBullet *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
