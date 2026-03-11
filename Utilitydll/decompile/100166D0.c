/*
 * func-name: ??1Logger@Utility@Outpop@@QAE@XZ
 * func-address: 0x100166d0
 * callers: 0x10008510
 * callees: 0x10005570
 */

void __thiscall Outpop::Utility::Logger::~Logger(Outpop::Utility::Logger *this)
{
  if ( *((_DWORD *)this + 11) != -1 )
    CloseHandle(*((HANDLE *)this + 11));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 6);
  sub_10005570((int)this + 92);
  sub_10005570((int)this + 48);
  sub_10005570((int)this);
}
