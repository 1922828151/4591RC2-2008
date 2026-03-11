/*
 * func-name: ?SetTrackRange@CREScrollBar@@QAEXHH@Z
 * func-address: 0x100ab130
 * callers: 0x100ab540, 0x100abf40, 0x100ae340, 0x100ae7d0, 0x100b07b0, 0x100b08c0, 0x100b0a20, 0x100b0ac0, 0x100b1450, 0x100c7fa0, 0x100c8100, 0x100c82d0, 0x100cbee0, 0x100cc020, 0x100cc180, 0x100cc300, 0x100cc430, 0x100cdb10, 0x1014a750, 0x10152470
 * callees: 0x100a3c30
 */

void __thiscall CREScrollBar::SetTrackRange(CREScrollBar *this, int a2, int a3)
{
  int v3; // edi
  int v4; // edx

  v3 = *((_DWORD *)this + 150);
  *((_DWORD *)this + 152) = a2;
  *((_DWORD *)this + 153) = a3;
  if ( v3 < a2 || (v4 = *((_DWORD *)this + 151), a3 - a2 <= v4) )
  {
    *((_DWORD *)this + 150) = a2;
  }
  else if ( v4 + v3 > a3 )
  {
    *((_DWORD *)this + 150) = a3 - v4;
    CREScrollBar::UpdateThumbRect(this);
    return;
  }
  CREScrollBar::UpdateThumbRect(this);
}
