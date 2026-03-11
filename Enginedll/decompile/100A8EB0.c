/*
 * func-name: ?updateAllRects@CMultiLineStatic@@QAEXXZ
 * func-address: 0x100a8eb0
 * callers: 0x100af2b0, 0x100af310, 0x100af340
 * callees: none
 */

void __thiscall CMultiLineStatic::updateAllRects(CMultiLineStatic *this)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // ebp
  int v5; // edi

  if ( *((_DWORD *)this + 189) && !*((_BYTE *)this + 748) )
  {
    v2 = *((_DWORD *)this + 25);
    v3 = *((_DWORD *)this + 27);
    v4 = *((_DWORD *)this + 24);
    v5 = *((_DWORD *)this + 193) - *((_DWORD *)this + 191);
    *((_DWORD *)this + 26) -= v5;
    SetRect((LPRECT)((char *)this + 764), v4 + *((_DWORD *)this + 26), v2, v4 + *((_DWORD *)this + 26) + v5, v2 + v3);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 189) + 156))(
      *((_DWORD *)this + 189),
      *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
      *((_DWORD *)this + 25));
    (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 189) + 160))(*((_DWORD *)this + 189), v5, v3);
  }
  (*(void (__thiscall **)(CMultiLineStatic *))(*(_DWORD *)this + 164))(this);
}
