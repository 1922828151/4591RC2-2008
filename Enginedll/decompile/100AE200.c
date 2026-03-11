/*
 * func-name: ?SetSize@CMultiLineEB@@UAEXHH@Z
 * func-address: 0x100ae200
 * callers: none
 * callees: 0x100a7420
 */

void __thiscall CMultiLineEB::SetSize(CMultiLineEB *this, int a2, int a3)
{
  int v4; // edx
  void (__thiscall *v5)(CMultiLineEB *); // eax

  v4 = *(_DWORD *)this;
  *((_DWORD *)this + 26) = a2;
  v5 = *(void (__thiscall **)(CMultiLineEB *))(v4 + 164);
  *((_DWORD *)this + 27) = a3;
  v5(this);
  CMultiLineEB::updateAllRects(this);
}
