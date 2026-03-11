/*
 * func-name: ?CanScroll@CMultiLineStatic@@QAEX_N@Z
 * func-address: 0x1006b9c0
 * callers: none
 * callees: none
 */

void __thiscall CMultiLineStatic::CanScroll(CMultiLineStatic *this, bool a2)
{
  *((_BYTE *)this + 747) = a2;
  CMultiLineStatic::ShowScroll(this, 0);
}
