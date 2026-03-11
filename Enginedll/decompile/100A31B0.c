/*
 * func-name: ?UpdateRects@CREControl@@MAEXXZ
 * func-address: 0x100a31b0
 * callers: none
 * callees: none
 */

void __thiscall CREControl::UpdateRects(CREControl *this)
{
  SetRect(
    (LPRECT)((char *)this + 164),
    *((_DWORD *)this + 24),
    *((_DWORD *)this + 25),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25) + *((_DWORD *)this + 27));
}
