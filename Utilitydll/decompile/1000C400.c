/*
 * func-name: ?acquire@Process_mutex@Utility@Outpop@@QAE_NPAVTime_Value@23@@Z
 * func-address: 0x1000c400
 * callers: none
 * callees: none
 */

char __thiscall Outpop::Utility::Process_mutex::acquire(HANDLE *this, struct Outpop::Utility::Time_Value *a2)
{
  if ( a2 )
    WaitForSingleObject(*this, 1000 * *(_DWORD *)a2 + *((_DWORD *)a2 + 1) / 1000);
  else
    WaitForSingleObject(*this, 0xFFFFFFFF);
  return 1;
}
