/*
 * func-name: ??4IO_Thread@Message@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10004c40
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Message::IO_Thread::operator=(int this, int a2)
{
  Outpop::Utility::Task::operator=(a2);
  qmemcpy((void *)(this + 76), (const void *)(a2 + 76), 0x24u);
  return this;
}
