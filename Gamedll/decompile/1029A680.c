/*
 * func-name: sub_1029A680
 * func-address: 0x1029a680
 * callers: 0x10002cc5
 * callees: 0x1000f209
 */

int __thiscall sub_1029A680(int this, int a2)
{
  std::wstring::wstring(this, a2);
  *(_BYTE *)(this + 28) = *(_BYTE *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  sub_1000F209(a2 + 44);
  return this;
}
