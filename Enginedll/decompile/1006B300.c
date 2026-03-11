/*
 * func-name: sub_1006B300
 * func-address: 0x1006b300
 * callers: none
 * callees: 0x100cc8a0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006B300(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x304u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CRENumericEdit::~CRENumericEdit);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CRENumericEdit::~CRENumericEdit((CRENumericEdit *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
