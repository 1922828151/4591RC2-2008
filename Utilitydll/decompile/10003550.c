/*
 * func-name: ??4Sect_Block_Allocator@Utility@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10003550
 * callers: none
 * callees: none
 */

void *__thiscall Outpop::Utility::Sect_Block_Allocator::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0x23Cu);
  return result;
}
