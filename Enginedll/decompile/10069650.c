/*
 * func-name: ??4CREElement@@QAEAAV0@ABV0@@Z
 * func-address: 0x10069650
 * callers: none
 * callees: none
 */

void *__thiscall CREElement::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0xC4u);
  return result;
}
