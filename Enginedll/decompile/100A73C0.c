/*
 * func-name: ?setPicSize@CPicCheckBox@@QAEXHH@Z
 * func-address: 0x100a73c0
 * callers: 0x1014a750
 * callees: none
 */

void __thiscall CPicCheckBox::setPicSize(CPicCheckBox *this, int a2, int a3)
{
  SetRect(
    (LPRECT)this + 54,
    *((_DWORD *)this + 41),
    *((_DWORD *)this + 42),
    *((_DWORD *)this + 41) + a2,
    *((_DWORD *)this + 42) + a3);
  SetRect(
    (LPRECT)((char *)this + 836),
    *((_DWORD *)this + 218) + 10,
    *((_DWORD *)this + 217),
    *((_DWORD *)this + 43),
    *((_DWORD *)this + 44));
}
