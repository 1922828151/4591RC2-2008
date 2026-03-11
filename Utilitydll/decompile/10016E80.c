/*
 * func-name: ??1Record_Logger@Utility@Outpop@@UAE@XZ
 * func-address: 0x10016e80
 * callers: 0x10016ce0, 0x1001cce0
 * callees: 0x1000a880
 */

void __thiscall Outpop::Utility::Record_Logger::~Record_Logger(Outpop::Utility::Record_Logger *this)
{
  *(_DWORD *)this = &Outpop::Utility::Record_Logger::`vftable';
  std::string::~string((char *)this + 176);
  Outpop::Utility::Dispatch_Thread::~Dispatch_Thread(this);
}
