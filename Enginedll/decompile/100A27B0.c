/*
 * func-name: ?SetGridSize@CItemHolder@@QAEXHH@Z
 * func-address: 0x100a27b0
 * callers: none
 * callees: 0x10155d30
 */

void __thiscall CItemHolder::SetGridSize(CItemHolder *this, int a2, int a3)
{
  *((_DWORD *)this + 149) = a2;
  *((_DWORD *)this + 150) = a3;
  CItemHolder::SetMaxItem(this, a3 * a2);
}
