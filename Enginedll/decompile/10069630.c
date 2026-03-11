/*
 * func-name: ??4REBlendColor@@QAEAAU0@ABU0@@Z
 * func-address: 0x10069630
 * callers: none
 * callees: none
 */

void *__thiscall REBlendColor::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0x50u);
  return result;
}
