/*
 * func-name: ??4FARepair@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101d0420
 * callers: 0x10011eb4
 * callees: 0x10009395
 */

int __thiscall GameClient::FARepair::operator=(int this, int a2)
{
  int result; // eax

  GameClient::FAura::operator=(a2);
  *(_DWORD *)(this + 260) = *(_DWORD *)(a2 + 260);
  *(_DWORD *)(this + 264) = *(_DWORD *)(a2 + 264);
  *(float *)(this + 268) = *(float *)(a2 + 268);
  result = this;
  *(float *)(this + 272) = *(float *)(a2 + 272);
  *(float *)(this + 276) = *(float *)(a2 + 276);
  return result;
}
