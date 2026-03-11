/*
 * func-name: ?UpdateRects@CRECheckBox@@UAEXXZ
 * func-address: 0x100aa150
 * callers: none
 * callees: 0x101a26c0
 */

void __thiscall CRECheckBox::UpdateRects(CRECheckBox *this)
{
  int *v2; // edi
  _DWORD *v3; // ecx
  int v4; // ecx
  int v5; // edx
  int v6; // eax

  v2 = (int *)((char *)this + 164);
  SetRect(
    (LPRECT)((char *)this + 164),
    *((_DWORD *)this + 24),
    *((_DWORD *)this + 25),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25) + *((_DWORD *)this + 27));
  if ( *((int *)this + 31) > 0 )
  {
    v3 = (_DWORD *)**((_DWORD **)this + 30);
    SetRect(
      (LPRECT)((char *)this + 820),
      *v2,
      (*((_DWORD *)this + 42) + *((_DWORD *)this + 44)) / 2 - (v3[6] - v3[4]) / 2,
      *v2 + v3[5] - v3[3],
      (*((_DWORD *)this + 42) + *((_DWORD *)this + 44)) / 2 - (v3[6] - v3[4]) / 2 + v3[6] - v3[4]);
    v4 = *((_DWORD *)this + 42);
    v5 = *((_DWORD *)this + 43);
    *((_DWORD *)this + 209) = *v2;
    v6 = *((_DWORD *)this + 44);
    *((_DWORD *)this + 210) = v4;
    *((_DWORD *)this + 211) = v5;
    *((_DWORD *)this + 212) = v6;
    *((_DWORD *)this + 209) += (int)((double)(*((_DWORD *)this + 207) - *((_DWORD *)this + 205)) * 1.25);
  }
}
