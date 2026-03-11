/*
 * func-name: ??4Channel_Config@IONetwork@Outpop@@QAEAAU012@ABU012@@Z
 * func-address: 0x10004030
 * callers: none
 * callees: none
 */

void *__thiscall Outpop::IONetwork::Channel_Config::operator=(void *this, const void *a2)
{
  void *result; // eax

  result = this;
  qmemcpy(this, a2, 0x2Cu);
  return result;
}
