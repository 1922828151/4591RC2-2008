/*
 * func-name: ?Cap@CREScrollBar@@IAEXXZ
 * func-address: 0x100a3d40
 * callers: 0x1006a3a0, 0x1006a3d0, 0x10152470
 * callees: none
 */

void __thiscall CREScrollBar::Cap(CREScrollBar *this)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // edx

  v1 = *((_DWORD *)this + 152);
  v2 = *((_DWORD *)this + 150);
  if ( v2 < v1 || (v3 = *((_DWORD *)this + 153), v4 = *((_DWORD *)this + 151), v3 - v1 <= v4) )
  {
    *((_DWORD *)this + 150) = v1;
  }
  else if ( v4 + v2 > v3 )
  {
    *((_DWORD *)this + 150) = v3 - v4;
  }
}
