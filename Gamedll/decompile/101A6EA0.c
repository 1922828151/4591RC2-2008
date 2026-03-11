/*
 * func-name: sub_101A6EA0
 * func-address: 0x101a6ea0
 * callers: 0x10004f84
 * callees: 0x10019de9, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_101A6EA0(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0xF48u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))CEstablishmentUI::~CEstablishmentUI);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    CEstablishmentUI::~CEstablishmentUI((CEstablishmentUI *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
