/*
 * func-name: ??4Profiler@@QAEAAV0@ABV0@@Z
 * func-address: 0x10001000
 * callers: none
 * callees: none
 */

void *__thiscall Profiler::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0xB0u);
  return result;
}
