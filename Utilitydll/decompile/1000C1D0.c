/*
 * func-name: ??1Barrier@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000c1d0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Barrier::~Barrier(HANDLE *this)
{
  CloseHandle(*this);
}
