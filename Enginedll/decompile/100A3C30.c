/*
 * func-name: ?UpdateThumbRect@CREScrollBar@@IAEXXZ
 * func-address: 0x100a3c30
 * callers: 0x1006a3a0, 0x1006a3d0, 0x100a3ce0, 0x100aad10, 0x100aadd0, 0x100aae30, 0x100ab130, 0x100b3710, 0x100b3800, 0x100b38b0, 0x100c5520, 0x100c5d60, 0x10152470
 * callees: none
 */

void __thiscall CREScrollBar::UpdateThumbRect(CREScrollBar *this)
{
  int v1; // ebp
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax

  v1 = *((_DWORD *)this + 152);
  v2 = *((_DWORD *)this + 151);
  v3 = *((_DWORD *)this + 153) - v1;
  if ( v3 <= v2 )
  {
    v8 = *((_DWORD *)this + 147);
    *((_BYTE *)this + 532) = 0;
    *((_DWORD *)this + 149) = v8;
  }
  else
  {
    if ( v2 * (*((_DWORD *)this + 145) - *((_DWORD *)this + 143)) / v3 <= 8 )
      v4 = 8;
    else
      v4 = v2 * (*((_DWORD *)this + 145) - *((_DWORD *)this + 143)) / v3;
    v5 = (*((_DWORD *)this + 150) - v1) * (*((_DWORD *)this + 145) - *((_DWORD *)this + 143) - v4) / (v3 - v2);
    v6 = *((_DWORD *)this + 143);
    *((_BYTE *)this + 532) = 1;
    v7 = v6 + v5;
    *((_DWORD *)this + 147) = v7;
    *((_DWORD *)this + 149) = v4 + v7;
  }
}
