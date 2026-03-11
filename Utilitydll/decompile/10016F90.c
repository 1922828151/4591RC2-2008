/*
 * func-name: ?stop@Record_Logger@Utility@Outpop@@UAEXXZ
 * func-address: 0x10016f90
 * callers: none
 * callees: 0x1000aba0, 0x1000ced0
 */

void __thiscall Outpop::Utility::Record_Logger::stop(HANDLE *this)
{
  Outpop::Utility::Dispatch_Thread::stop((Outpop::Utility::Dispatch_Thread *)this);
  Outpop::Utility::Task::wait((Outpop::Utility::Task *)this);
  if ( this[41] != (HANDLE)-1 )
  {
    CloseHandle(this[41]);
    this[41] = (HANDLE)-1;
  }
}
