/*
 * func-name: sub_1006B430
 * func-address: 0x1006b430
 * callers: none
 * callees: 0x100cca30, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006B430(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x374u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CPicCheckBox::~CPicCheckBox);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CPicCheckBox::~CPicCheckBox((CPicCheckBox *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
