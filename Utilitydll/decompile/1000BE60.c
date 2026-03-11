/*
 * func-name: ?wait@Event_Base@Utility@Outpop@@QAEHAAVTime_Value@23@@Z
 * func-address: 0x1000be60
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Event_Base::wait(HANDLE *this, struct Outpop::Utility::Time_Value *a2)
{
  DWORD v2; // eax

  v2 = WaitForSingleObject(*this, 1000 * *(_DWORD *)a2 + *((_DWORD *)a2 + 1) / 1000);
  if ( !v2 )
    return 0;
  if ( v2 == 128 )
    return 128;
  return v2 != 258 ? -1 : 258;
}
