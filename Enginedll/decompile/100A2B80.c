/*
 * func-name: sub_100A2B80
 * func-address: 0x100a2b80
 * callers: none
 * callees: 0x10150b10, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100A2B80(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x220u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CSeperateLine::~CSeperateLine);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CSeperateLine::~CSeperateLine((CSeperateLine *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
