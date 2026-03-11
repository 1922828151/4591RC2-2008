/*
 * func-name: sub_10019170
 * func-address: 0x10019170
 * callers: none
 * callees: 0x1016f820, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10019170(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xACu,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))EventAttemper::~EventAttemper);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    EventAttemper::~EventAttemper((EventAttemper *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
