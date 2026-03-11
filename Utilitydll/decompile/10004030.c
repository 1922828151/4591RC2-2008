/*
 * func-name: ??1Timer_Queue@Utility@Outpop@@UAE@XZ
 * func-address: 0x10004030
 * callers: 0x10003880
 * callees: 0x10003910, 0x10005d90, 0x1000c140, 0x1000ce30
 */

void __thiscall Outpop::Utility::Timer_Queue::~Timer_Queue(Outpop::Utility::Timer_Queue *this)
{
  *(_DWORD *)this = &Outpop::Utility::Timer_Queue::`vftable';
  sub_10005D90((char *)this + 136);
  Outpop::Utility::Manual_Event::~Manual_Event((Outpop::Utility::Timer_Queue *)((char *)this + 120));
  sub_10003910((int)this + 100);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 76));
  Outpop::Utility::Task::~Task(this);
}
