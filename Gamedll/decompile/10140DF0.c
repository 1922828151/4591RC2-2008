/*
 * func-name: ??4Aura@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10140df0
 * callers: 0x10016ed7
 * callees: none
 */

int __thiscall GameClient::Aura::operator=(int this, int a2)
{
  int v3; // ebx
  int result; // eax

  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(float *)(this + 24) = *(float *)(a2 + 24);
  *(float *)(this + 28) = *(float *)(a2 + 28);
  v3 = this + 36;
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  std::string::operator=(this + 36, a2 + 36);
  std::string::operator=(v3 + 28, a2 + 64);
  std::string::operator=(v3 + 56, a2 + 92);
  std::string::operator=(v3 + 84, a2 + 120);
  *(_DWORD *)(v3 + 112) = *(_DWORD *)(a2 + 148);
  result = this;
  *(_DWORD *)(v3 + 116) = *(_DWORD *)(a2 + 152);
  return result;
}
