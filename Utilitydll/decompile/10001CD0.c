/*
 * func-name: ??4TF_RW_Thread_Mutex@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10001cd0
 * callers: none
 * callees: none
 */

void *__thiscall Outpop::Utility::TF_RW_Thread_Mutex::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0x30u);
  return result;
}
