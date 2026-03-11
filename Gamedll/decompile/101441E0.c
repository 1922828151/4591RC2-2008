/*
 * func-name: sub_101441E0
 * func-address: 0x101441e0
 * callers: 0x100159b0
 * callees: 0x10014493, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101441E0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xFE8u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CDropBagUI::~CDropBagUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CDropBagUI::~CDropBagUI((CDropBagUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
