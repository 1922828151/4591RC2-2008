/*
 * func-name: ??0Record_Logger@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10016c00
 * callers: none
 * callees: 0x10003c80
 */

Outpop::Utility::Record_Logger *__thiscall Outpop::Utility::Record_Logger::Record_Logger(
        Outpop::Utility::Record_Logger *this,
        const struct Outpop::Utility::Record_Logger *a2)
{
  Outpop::Utility::Dispatch_Thread::Dispatch_Thread(this, a2);
  *(_DWORD *)this = &Outpop::Utility::Record_Logger::`vftable';
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
  std::string::string((char *)this + 176, (char *)a2 + 176);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  return this;
}
