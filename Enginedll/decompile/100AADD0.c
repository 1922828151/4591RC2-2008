/*
 * func-name: ?Scroll@CREScrollBar@@QAEXH@Z
 * func-address: 0x100aadd0
 * callers: 0x100aae30, 0x100b03f0, 0x100b0e50, 0x100b1760
 * callees: 0x100a3c30
 */

void __thiscall CREScrollBar::Scroll(CREScrollBar *this, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // edx

  *((_DWORD *)this + 150) += a2;
  v2 = *((_DWORD *)this + 152);
  v3 = *((_DWORD *)this + 150);
  if ( v3 < v2 || (v4 = *((_DWORD *)this + 153), v5 = *((_DWORD *)this + 151), v4 - v2 <= v5) )
  {
    *((_DWORD *)this + 150) = v2;
  }
  else if ( v5 + v3 > v4 )
  {
    *((_DWORD *)this + 150) = v4 - v5;
    CREScrollBar::UpdateThumbRect(this);
    return;
  }
  CREScrollBar::UpdateThumbRect(this);
}
