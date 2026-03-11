/*
 * func-name: sub_10016810
 * func-address: 0x10016810
 * callers: none
 * callees: 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10016810(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(this, 4u, *((_DWORD *)this - 1), (void (__thiscall *)(void *))WaveBank::~WaveBank);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    *(_DWORD *)this = &WaveBank::`vftable';
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
