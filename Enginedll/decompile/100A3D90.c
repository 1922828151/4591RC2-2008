/*
 * func-name: ?UpdateThumbRect@CREHScrollBar@@IAEXXZ
 * func-address: 0x100a3d90
 * callers: 0x1006a470, 0x1006a490, 0x100a3e60, 0x100ab190, 0x100ab250, 0x100ab2b0, 0x100ab4e0
 * callees: none
 */

void __thiscall CREHScrollBar::UpdateThumbRect(CREHScrollBar *this)
{
  int v1; // ebp
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx

  v1 = *((_DWORD *)this + 152);
  v2 = *((_DWORD *)this + 151);
  v3 = *((_DWORD *)this + 153) - v1;
  if ( v3 <= v2 )
  {
    v8 = *((_DWORD *)this + 44);
    *((_DWORD *)this + 147) = *((_DWORD *)this + 42);
    v9 = *((_DWORD *)this + 136);
    *((_DWORD *)this + 149) = v8;
    v10 = *((_DWORD *)this + 138);
    *((_DWORD *)this + 146) = v9;
    *((_DWORD *)this + 148) = v10;
    *((_BYTE *)this + 532) = 0;
  }
  else
  {
    if ( v2 * (*((_DWORD *)this + 144) - *((_DWORD *)this + 142)) / v3 <= 8 )
      v4 = 8;
    else
      v4 = v2 * (*((_DWORD *)this + 144) - *((_DWORD *)this + 142)) / v3;
    v5 = (*((_DWORD *)this + 150) - v1) * (*((_DWORD *)this + 144) - *((_DWORD *)this + 142) - v4) / (v3 - v2);
    v6 = *((_DWORD *)this + 142);
    *((_BYTE *)this + 532) = 1;
    v7 = v6 + v5;
    *((_DWORD *)this + 146) = v7;
    *((_DWORD *)this + 148) = v4 + v7;
  }
}
