/*
 * func-name: sub_1006B8F0
 * func-address: 0x1006b8f0
 * callers: none
 * callees: 0x100ca100, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006B8F0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x3E8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CMLIMEEditBox::~CMLIMEEditBox);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CMLIMEEditBox::~CMLIMEEditBox((CMLIMEEditBox *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
