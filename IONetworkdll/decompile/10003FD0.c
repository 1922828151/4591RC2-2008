/*
 * func-name: ??4WIN32_IoCompletionPort@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10003fd0
 * callers: none
 * callees: none
 */

void *__thiscall Outpop::IONetwork::WIN32_IoCompletionPort::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0x24u);
  return result;
}
