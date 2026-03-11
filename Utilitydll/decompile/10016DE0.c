/*
 * func-name: ??0Record_Logger@Utility@Outpop@@QAE@XZ
 * func-address: 0x10016de0
 * callers: 0x1001cc70
 * callees: 0x100018c0, 0x1000a7c0
 */

Outpop::Utility::Record_Logger *__thiscall Outpop::Utility::Record_Logger::Record_Logger(
        Outpop::Utility::Record_Logger *this)
{
  Outpop::Utility::Dispatch_Thread::Dispatch_Thread(this);
  *(_DWORD *)this = &Outpop::Utility::Record_Logger::`vftable';
  std::string::string((char *)this + 176);
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  Outpop::Utility::Time_Value::normalize((Outpop::Utility::Record_Logger *)((char *)this + 208));
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  Outpop::Utility::Time_Value::normalize((Outpop::Utility::Record_Logger *)((char *)this + 216));
  *((_DWORD *)this + 41) = -1;
  *((_DWORD *)this + 42) = 0;
  return this;
}
