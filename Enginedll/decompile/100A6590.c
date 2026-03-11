/*
 * func-name: ?SetLocation@CREContainer@@UAEXHH@Z
 * func-address: 0x100a6590
 * callers: none
 * callees: none
 */

void __thiscall CREContainer::SetLocation(CREContainer *this, int a2, int a3)
{
  *((_DWORD *)this + 24) = a2;
  *((_DWORD *)this + 25) = a3;
}
