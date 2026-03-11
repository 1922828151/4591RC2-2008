/*
 * func-name: ??4GUIConsole@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10065810
 * callers: 0x10005c36
 * callees: 0x10004264, 0x1000d5c1, 0x10014be6
 */

int __thiscall GUIConsole::operator=(int this, int a2)
{
  std::string::operator=(this, a2);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_BYTE *)(this + 32) = *(_BYTE *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  std::string::operator=(this + 40, a2 + 40);
  *(_BYTE *)(this + 68) = *(_BYTE *)(a2 + 68);
  std::string::operator=(this + 72, a2 + 72);
  sub_10004264(a2 + 100);
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116);
  *(float *)(this + 120) = *(float *)(a2 + 120);
  *(_BYTE *)(this + 124) = *(_BYTE *)(a2 + 124);
  *(_BYTE *)(this + 125) = *(_BYTE *)(a2 + 125);
  sub_1000D5C1(a2 + 128);
  std::string::operator=(this + 144, a2 + 144);
  sub_10014BE6(a2 + 172);
  *(_DWORD *)(this + 188) = *(_DWORD *)(a2 + 188);
  return this;
}
