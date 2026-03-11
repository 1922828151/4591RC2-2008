/*
 * func-name: ?acquire@Process_mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c3f0
 * callers: none
 * callees: none
 */

char __thiscall Outpop::Utility::Process_mutex::acquire(HANDLE *this)
{
  WaitForSingleObject(*this, 0xFFFFFFFF);
  return 1;
}
