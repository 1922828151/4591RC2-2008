/*
 * func-name: ?UpdateRects@CRETabPages@@MAEXXZ
 * func-address: 0x100b13c0
 * callers: none
 * callees: 0x100ab960
 */

void __thiscall CRETabPages::UpdateRects(CRETabPages *this)
{
  CRETabPages::RePosPrevPages(this);
  SetRect(
    (LPRECT)((char *)this + 164),
    *((_DWORD *)this + 24),
    *((_DWORD *)this + 25),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25) + *((_DWORD *)this + 27));
}
