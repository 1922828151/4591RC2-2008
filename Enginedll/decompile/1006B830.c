/*
 * func-name: sub_1006B830
 * func-address: 0x1006b830
 * callers: none
 * callees: 0x100c9e60, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006B830(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF20u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CTYDialog::~CTYDialog);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CTYDialog::~CTYDialog((CTYDialog *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
