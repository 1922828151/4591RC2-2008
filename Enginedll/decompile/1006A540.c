/*
 * func-name: ?CanHaveFocus@CRETabPages@@UAE_NXZ
 * func-address: 0x1006a540
 * callers: none
 * callees: none
 */

BOOL __thiscall CRETabPages::CanHaveFocus(CRETabPages *this)
{
  return *((_BYTE *)this + 90) && *((_BYTE *)this + 156);
}
