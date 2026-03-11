/*
 * func-name: sub_1006A8C0
 * func-address: 0x1006a8c0
 * callers: none
 * callees: 0x100cbde0, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006A8C0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x6A4u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CREComboBox::~CREComboBox);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CREComboBox::~CREComboBox((CREComboBox *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
