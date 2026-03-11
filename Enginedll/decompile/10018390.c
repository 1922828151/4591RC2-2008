/*
 * func-name: ??4Script@@QAEAAV0@ABV0@@Z
 * func-address: 0x10018390
 * callers: none
 * callees: none
 */

void *__thiscall Script::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0x8Cu);
  return result;
}
