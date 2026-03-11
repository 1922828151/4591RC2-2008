/*
 * func-name: ?setScrollBarSize@CMultiLineStatic@@QAEXHH@Z
 * func-address: 0x100af2b0
 * callers: none
 * callees: 0x100a8eb0
 */

void __thiscall CMultiLineStatic::setScrollBarSize(CMultiLineStatic *this, int a2, int a3)
{
  int v4; // ecx
  int v5; // ecx

  v4 = *((_DWORD *)this + 189);
  if ( v4 && !*((_BYTE *)this + 748) )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 160))(v4, a2, a3);
    v5 = a3 + *((_DWORD *)this + 192);
    *((_DWORD *)this + 193) = a2 + *((_DWORD *)this + 191);
    *((_DWORD *)this + 194) = v5;
  }
  CMultiLineStatic::updateAllRects(this);
}
