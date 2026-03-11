/*
 * func-name: ?ShowItem@CREScrollBar@@QAEXH@Z
 * func-address: 0x100a3ce0
 * callers: 0x100abff0, 0x100b0b80, 0x100b0c30, 0x100b1510, 0x100bc4f0, 0x100bd330, 0x100bda20
 * callees: 0x100a3c30
 */

void __thiscall CREScrollBar::ShowItem(CREScrollBar *this, int a2)
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
  CREScrollBar::UpdateThumbRect(this);
}
