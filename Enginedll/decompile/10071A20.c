/*
 * func-name: ??4CREButton@@QAEAAV0@ABV0@@Z
 * func-address: 0x10071a20
 * callers: 0x10071b50, 0x10071c60, 0x10072a10, 0x10073cc0, 0x100d4480
 * callees: 0x100718a0
 */

int __thiscall CREButton::operator=(int this, int a2)
{
  CREStatic::operator=(this, a2);
  qmemcpy((void *)(this + 696), (const void *)(a2 + 696), 0x78u);
  return this;
}
