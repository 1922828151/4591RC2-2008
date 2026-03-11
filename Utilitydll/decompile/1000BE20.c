/*
 * func-name: ?wait@Event_Base@Utility@Outpop@@QAEHXZ
 * func-address: 0x1000be20
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Event_Base::wait(HANDLE *this)
{
  DWORD v1; // eax

  v1 = WaitForSingleObject(*this, 0xFFFFFFFF);
  if ( !v1 )
    return 0;
  if ( v1 == 128 )
    return 128;
  return v1 != 258 ? -1 : 258;
}
