/*
 * func-name: ?GetPosByXY@CItemHolder@@QAEHHH@Z
 * func-address: 0x100a2820
 * callers: none
 * callees: none
 */

int __thiscall CItemHolder::GetPosByXY(CItemHolder *this, int a2, int a3)
{
  return a2 + a3 * *((_DWORD *)this + 150);
}
