/*
 * func-name: ??4GUID_PAIR@@QAEAAU0@ABU0@@Z
 * func-address: 0x100010c0
 * callers: none
 * callees: none
 */

void *__thiscall GUID_PAIR::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0x20u);
  return result;
}
