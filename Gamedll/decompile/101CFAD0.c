/*
 * func-name: ??4FADamage@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101cfad0
 * callers: 0x10009629
 * callees: 0x10009395
 */

int __thiscall GameClient::FADamage::operator=(int this, int a2)
{
  GameClient::FAura::operator=(a2);
  *(float *)(this + 260) = *(float *)(a2 + 260);
  *(_DWORD *)(this + 264) = *(_DWORD *)(a2 + 264);
  return this;
}
