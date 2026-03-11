/*
 * func-name: ?SetSize@CMultiLineStatic@@UAEXHH@Z
 * func-address: 0x100af340
 * callers: none
 * callees: 0x100a8eb0
 */

void __thiscall CMultiLineStatic::SetSize(CMultiLineStatic *this, int a2, int a3)
{
  int v4; // edx
  void (__thiscall *v5)(CMultiLineStatic *); // eax

  v4 = *(_DWORD *)this;
  *((_DWORD *)this + 26) = a2;
  v5 = *(void (__thiscall **)(CMultiLineStatic *))(v4 + 164);
  *((_DWORD *)this + 27) = a3;
  v5(this);
  CMultiLineStatic::updateAllRects(this);
}
