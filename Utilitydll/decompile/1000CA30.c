/*
 * func-name: ??4TF_rwlock_t@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x1000ca30
 * callers: none
 * callees: none
 */

void *__thiscall Outpop::Utility::TF_rwlock_t::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0xA0u);
  return result;
}
