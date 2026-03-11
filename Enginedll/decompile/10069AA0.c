/*
 * func-name: sub_10069AA0
 * func-address: 0x10069aa0
 * callers: none
 * callees: 0x100c6de0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_10069AA0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xEA8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CREDialog::~CREDialog);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CREDialog::~CREDialog((CREDialog *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
