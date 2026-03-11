/*
 * func-name: sub_1006BB40
 * func-address: 0x1006bb40
 * callers: none
 * callees: 0x100cad10, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006BB40(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x3B8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CTYChatIME::~CTYChatIME);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CTYChatIME::~CTYChatIME((CTYChatIME *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
