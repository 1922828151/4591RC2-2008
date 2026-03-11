/*
 * func-name: ??4RW_Thread_Mutex@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x1000ca50
 * callers: none
 * callees: none
 */

void *__thiscall Outpop::Utility::RW_Thread_Mutex::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0xA4u);
  return result;
}
