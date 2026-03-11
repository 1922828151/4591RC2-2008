/*
 * func-name: ??4Function@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x100341f0
 * callers: 0x10003d73
 * callees: none
 */

int __thiscall GameClient::Function::operator=(int this, int a2)
{
  int result; // eax

  result = this;
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_BYTE *)(this + 36) = *(_BYTE *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  return result;
}
