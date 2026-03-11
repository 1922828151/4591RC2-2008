/*
 * func-name: ?record@Record@Utility@Outpop@@QAEXXZ
 * func-address: 0x10016d50
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Record::record(volatile LONG *this)
{
  volatile LONG *v1; // esi
  volatile LONG *v2; // [esp+8h] [ebp-10h] BYREF
  int v3; // [esp+14h] [ebp-4h]

  v2 = this;
  if ( this )
    InterlockedIncrement(this + 1);
  v3 = 0;
  (*(void (__thiscall **)(int *, volatile LONG **))(Outpop::Utility::Record_Logger::g_record_logger_[0] + 8))(
    Outpop::Utility::Record_Logger::g_record_logger_,
    &v2);
  v3 = -1;
  v1 = v2;
  if ( v2 && !InterlockedDecrement(v2 + 1) )
  {
    if ( v1 )
      (**(void (__thiscall ***)(volatile LONG *, int))v1)(v1, 1);
  }
}
