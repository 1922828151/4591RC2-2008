/*
 * func-name: ??4Recursive_mutex@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10001cb0
 * callers: none
 * callees: none
 */

void *__thiscall Outpop::Utility::Recursive_mutex::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0x1Cu);
  return result;
}
