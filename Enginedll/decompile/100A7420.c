/*
 * func-name: ?updateAllRects@CMultiLineEB@@IAEXXZ
 * func-address: 0x100a7420
 * callers: 0x100ae180, 0x100ae1d0, 0x100ae200
 * callees: none
 */

void __thiscall CMultiLineEB::updateAllRects(CMultiLineEB *this)
{
  int v2; // ebp
  int v3; // ecx
  int v4; // ebx
  int v5; // edi

  v2 = *((_DWORD *)this + 24);
  v3 = *((_DWORD *)this + 25);
  v4 = *((_DWORD *)this + 27);
  v5 = *((_DWORD *)this + 201) - *((_DWORD *)this + 199);
  *((_DWORD *)this + 26) -= v5;
  SetRect((LPRECT)((char *)this + 796), v2 + *((_DWORD *)this + 26), v3, v2 + *((_DWORD *)this + 26) + v5, v3 + v4);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 198) + 156))(
    *((_DWORD *)this + 198),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25));
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 198) + 160))(*((_DWORD *)this + 198), v5, v4);
  (*(void (__thiscall **)(CMultiLineEB *))(*(_DWORD *)this + 164))(this);
}
