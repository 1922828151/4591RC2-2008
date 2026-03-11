/*
 * func-name: ?UpdateRects@CREEditBox@@UAEXXZ
 * func-address: 0x100a4220
 * callers: 0x100a45e0, 0x100a6f90, 0x100a7af0
 * callees: none
 */

void __thiscall CREEditBox::UpdateRects(CREEditBox *this)
{
  int *v2; // ebx
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // [esp-8h] [ebp-18h]
  int v11; // [esp-4h] [ebp-14h]

  v2 = (int *)((char *)this + 164);
  SetRect(
    (LPRECT)((char *)this + 164),
    *((_DWORD *)this + 24),
    *((_DWORD *)this + 25),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25) + *((_DWORD *)this + 27));
  v3 = *((_DWORD *)this + 42);
  v4 = *((_DWORD *)this + 43);
  *((_DWORD *)this + 141) = *v2;
  v5 = *((_DWORD *)this + 44);
  *((_DWORD *)this + 142) = v3;
  *((_DWORD *)this + 143) = v4;
  *((_DWORD *)this + 144) = v5;
  InflateRect((LPRECT)((char *)this + 564), -*((_DWORD *)this + 139), -*((_DWORD *)this + 139));
  v6 = *((_DWORD *)this + 142);
  v7 = *((_DWORD *)this + 143);
  *((_DWORD *)this + 145) = *((_DWORD *)this + 141);
  v8 = *((_DWORD *)this + 144);
  *((_DWORD *)this + 146) = v6;
  v11 = *((_DWORD *)this + 142);
  v9 = *v2;
  *((_DWORD *)this + 147) = v7;
  v10 = *((_DWORD *)this + 141);
  *((_DWORD *)this + 148) = v8;
  SetRect((LPRECT)((char *)this + 596), v9, *((_DWORD *)this + 42), v10, v11);
  SetRect(
    (LPRECT)((char *)this + 612),
    *((_DWORD *)this + 141),
    *((_DWORD *)this + 42),
    *((_DWORD *)this + 143),
    *((_DWORD *)this + 142));
  SetRect(
    (LPRECT)((char *)this + 628),
    *((_DWORD *)this + 143),
    *((_DWORD *)this + 42),
    *((_DWORD *)this + 43),
    *((_DWORD *)this + 142));
  SetRect((LPRECT)((char *)this + 644), *v2, *((_DWORD *)this + 142), *((_DWORD *)this + 141), *((_DWORD *)this + 144));
  SetRect(
    (LPRECT)((char *)this + 660),
    *((_DWORD *)this + 143),
    *((_DWORD *)this + 142),
    *((_DWORD *)this + 43),
    *((_DWORD *)this + 144));
  SetRect((LPRECT)((char *)this + 676), *v2, *((_DWORD *)this + 144), *((_DWORD *)this + 141), *((_DWORD *)this + 44));
  SetRect(
    (LPRECT)((char *)this + 692),
    *((_DWORD *)this + 141),
    *((_DWORD *)this + 144),
    *((_DWORD *)this + 143),
    *((_DWORD *)this + 44));
  SetRect(
    (LPRECT)((char *)this + 708),
    *((_DWORD *)this + 143),
    *((_DWORD *)this + 144),
    *((_DWORD *)this + 43),
    *((_DWORD *)this + 44));
  InflateRect((LPRECT)((char *)this + 564), -1, -*((_DWORD *)this + 140));
  *((_DWORD *)this + 136) = 0;
}
