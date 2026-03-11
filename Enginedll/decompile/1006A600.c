/*
 * func-name: sub_1006A600
 * func-address: 0x1006a600
 * callers: none
 * callees: 0x100c7d60, 0x101a2500, 0x101a253a, 0x101a259e
 */

char *__thiscall sub_1006A600(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x4E0u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CREListBox::~CREListBox);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CREListBox::~CREListBox((CREListBox *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
