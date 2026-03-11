/*
 * func-name: ?UpdateRects@CRESlider@@UAEXXZ
 * func-address: 0x100aa930
 * callers: none
 * callees: 0x101a26c0
 */

void __thiscall CRESlider::UpdateRects(CRESlider *this)
{
  int *v2; // ebx
  _DWORD *v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // eax

  v2 = (int *)((char *)this + 164);
  SetRect(
    (LPRECT)((char *)this + 164),
    *((_DWORD *)this + 24),
    *((_DWORD *)this + 25),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25) + *((_DWORD *)this + 27));
  if ( *((int *)this + 31) > 0 )
  {
    v3 = *(_DWORD **)(*((_DWORD *)this + 30) + 4);
    if ( v3 )
    {
      v4 = (*((_DWORD *)this + 42) + *((_DWORD *)this + 44)) / 2 - (v3[6] - v3[4]) / 2;
      v5 = *v2;
      *((_DWORD *)this + 142) = v4;
      v6 = v3[6] - v3[4];
      *((_DWORD *)this + 141) = v5;
      *((_DWORD *)this + 144) = v4 + v6;
      v7 = v5 + v3[5] - v3[3];
      v8 = *((_DWORD *)this + 135);
      v9 = *((_DWORD *)this + 134) - v8;
      *((_DWORD *)this + 143) = v7;
      v10 = (int)((double)v9
                * (double)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41))
                / (double)(*((_DWORD *)this + 136) - v8));
      *((_DWORD *)this + 139) = v10;
      OffsetRect((LPRECT)((char *)this + 564), v10, 0);
    }
  }
}
