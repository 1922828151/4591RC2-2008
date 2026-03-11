/*
 * func-name: sub_100E8B90
 * func-address: 0x100e8b90
 * callers: 0x100154c9
 * callees: 0x10009a43, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_100E8B90(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x450u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))SampleWeapon::~SampleWeapon);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    SampleWeapon::~SampleWeapon((SampleWeapon *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
