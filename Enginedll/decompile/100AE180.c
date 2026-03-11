/*
 * func-name: ?setScrollBarSize@CMultiLineEB@@QAEXHH@Z
 * func-address: 0x100ae180
 * callers: 0x1014a750
 * callees: 0x100a7420
 */

void __thiscall CMultiLineEB::setScrollBarSize(CMultiLineEB *this, int a2, int a3)
{
  int v4; // eax

  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)this + 198) + 160))(*((_DWORD *)this + 198), a2, a3);
  v4 = a2 + *((_DWORD *)this + 199);
  *((_DWORD *)this + 202) = a3 + *((_DWORD *)this + 200);
  *((_DWORD *)this + 201) = v4;
  CMultiLineEB::updateAllRects(this);
}
