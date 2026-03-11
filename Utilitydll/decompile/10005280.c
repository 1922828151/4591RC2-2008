/*
 * func-name: ?start@Timer_Queue@Utility@Outpop@@QAEXXZ
 * func-address: 0x10005280
 * callers: none
 * callees: 0x1000d3c0
 */

void __thiscall Outpop::Utility::Timer_Queue::start(Outpop::Utility::Timer_Queue *this)
{
  Outpop::Utility::Task::activate(this, 1, 0, 0, 0, 0);
}
