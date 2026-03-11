/*
 * func-name: sub_100A2A30
 * func-address: 0x100a2a30
 * callers: none
 * callees: 0x101500f0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_100A2A30(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x300u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CProgressBar::~CProgressBar);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CProgressBar::~CProgressBar((CProgressBar *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
