/*
 * func-name: ?ShowItem@CREHScrollBar@@QAEXH@Z
 * func-address: 0x100a3e60
 * callers: none
 * callees: 0x100a3d90
 */

void __thiscall CREHScrollBar::ShowItem(CREHScrollBar *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // esi
  int v5; // edx

  v2 = a2;
  if ( a2 < 0 )
    v2 = 0;
  v3 = *((_DWORD *)this + 153);
  if ( v2 >= v3 )
    v2 = v3 - 1;
  v4 = *((_DWORD *)this + 150);
  if ( v4 > v2 )
    goto LABEL_8;
  v5 = *((_DWORD *)this + 151);
  if ( v5 + v4 <= v2 )
  {
    v2 = v2 - v5 + 1;
LABEL_8:
    *((_DWORD *)this + 150) = v2;
  }
  CREHScrollBar::UpdateThumbRect(this);
}
