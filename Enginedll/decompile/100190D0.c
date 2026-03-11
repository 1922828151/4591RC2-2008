/*
 * func-name: ?SetOwner@Event@@QAEXI@Z
 * func-address: 0x100190d0
 * callers: none
 * callees: none
 */

void __thiscall Event::SetOwner(Event *this, unsigned int a2)
{
  *((_DWORD *)this + 4) = a2;
}
