/*
 * func-name: sub_102999A0
 * func-address: 0x102999a0
 * callers: 0x100148e4
 * callees: 0x10005be6, 0x1000f1b4
 */

int __thiscall sub_102999A0(int this, int a2)
{
  std::wstring::operator=(this, a2);
  sub_10005BE6(a2 + 28);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  sub_1000F1B4(a2 + 72);
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(this + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(this + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(this + 100) = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(this + 104) = *(_DWORD *)(a2 + 104);
  *(_BYTE *)(this + 108) = *(_BYTE *)(a2 + 108);
  *(_DWORD *)(this + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(this + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(this + 124) = *(_DWORD *)(a2 + 124);
  return this;
}
