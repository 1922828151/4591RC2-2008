/*
 * func-name: ?GetCurDriverState@ControlledEstab@GameClient@@QAEHXZ_0
 * func-address: 0x1019c990
 * callers: 0x100167bb
 * callees: none
 */

struct Concurrency::details::ScheduleGroupBase *__thiscall GameClient::ControlledEstab::GetCurDriverState(
        GameClient::ControlledEstab *this)
{
  Concurrency::details::SchedulerBase *v1; // ecx

  v1 = (Concurrency::details::SchedulerBase *)*((_DWORD *)this + 114);
  if ( v1 )
    return Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v1);
  else
    return (struct Concurrency::details::ScheduleGroupBase *)-1;
}
