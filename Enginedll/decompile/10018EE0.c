/*
 * func-name: ??4LightState@@QAEAAV0@ABV0@@Z
 * func-address: 0x10018ee0
 * callers: none
 * callees: none
 */

void *__thiscall LightState::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0x48u);
  return result;
}
