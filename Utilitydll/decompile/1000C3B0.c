/*
 * func-name: ??1Process_mutex@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000c3b0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Process_mutex::~Process_mutex(HANDLE *this)
{
  if ( *this )
  {
    CloseHandle(*this);
    *this = 0;
  }
}
