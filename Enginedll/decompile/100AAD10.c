/*
 * func-name: ?UpdateRects@CREScrollBar@@UAEXXZ
 * func-address: 0x100aad10
 * callers: none
 * callees: none
 */

void __thiscall CREScrollBar::UpdateRects(CREScrollBar *this)
{
  int *v2; // ebx
  int v3; // ecx
  int v4; // edx
  int v5; // eax

  v2 = (int *)((char *)this + 164);
  SetRect(
    (LPRECT)((char *)this + 164),
    *((_DWORD *)this + 24),
    *((_DWORD *)this + 25),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25) + *((_DWORD *)this + 27));
  SetRect(
    (LPRECT)((char *)this + 536),
    *v2,
    *((_DWORD *)this + 42),
    *((_DWORD *)this + 43),
    *((_DWORD *)this + 42) + 10);
  SetRect(
    (LPRECT)((char *)this + 552),
    *v2,
    *((_DWORD *)this + 44) - 10,
    *((_DWORD *)this + 43),
    *((_DWORD *)this + 44));
  SetRect((LPRECT)((char *)this + 568), *v2, *((_DWORD *)this + 137), *((_DWORD *)this + 43), *((_DWORD *)this + 139));
  v3 = *((_DWORD *)this + 143);
  v4 = *((_DWORD *)this + 144);
  *((_DWORD *)this + 146) = *((_DWORD *)this + 142);
  v5 = *((_DWORD *)this + 145);
  *((_DWORD *)this + 147) = v3;
  *((_DWORD *)this + 148) = v4;
  *((_DWORD *)this + 149) = v5;
  CREScrollBar::UpdateThumbRect(this);
}
