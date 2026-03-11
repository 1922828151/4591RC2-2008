/*
 * func-name: ??4FAMovement@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101d0050
 * callers: 0x1001a636
 * callees: 0x10009395
 */

int __thiscall GameClient::FAMovement::operator=(int this, int a2)
{
  int result; // eax

  GameClient::FAura::operator=(a2);
  *(_BYTE *)(this + 260) = *(_BYTE *)(a2 + 260);
  *(float *)(this + 264) = *(float *)(a2 + 264);
  result = this;
  *(float *)(this + 268) = *(float *)(a2 + 268);
  return result;
}
