/*
 * func-name: ?UpdateRects@CREHScrollBar@@UAEXXZ
 * func-address: 0x100ab190
 * callers: none
 * callees: none
 */

void __thiscall CREHScrollBar::UpdateRects(CREHScrollBar *this)
{
  int *v2; // edi
  int v3; // edx
  int v4; // eax
  int v5; // ecx

  v2 = (int *)((char *)this + 164);
  SetRect(
    (LPRECT)((char *)this + 164),
    *((_DWORD *)this + 24),
    *((_DWORD *)this + 25),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25) + *((_DWORD *)this + 27));
  SetRect((LPRECT)((char *)this + 536), *v2, *((_DWORD *)this + 42), *v2 + 17, *((_DWORD *)this + 44));
  SetRect(
    (LPRECT)((char *)this + 552),
    *((_DWORD *)this + 43) - 17,
    *((_DWORD *)this + 42),
    *((_DWORD *)this + 43),
    *((_DWORD *)this + 44));
  SetRect(
    (LPRECT)((char *)this + 568),
    *((_DWORD *)this + 136),
    *((_DWORD *)this + 42),
    *((_DWORD *)this + 138),
    *((_DWORD *)this + 44));
  v3 = *((_DWORD *)this + 143);
  v4 = *((_DWORD *)this + 144);
  *((_DWORD *)this + 146) = *((_DWORD *)this + 142);
  v5 = *((_DWORD *)this + 145);
  *((_DWORD *)this + 147) = v3;
  *((_DWORD *)this + 148) = v4;
  *((_DWORD *)this + 149) = v5;
  CREHScrollBar::UpdateThumbRect(this);
}
