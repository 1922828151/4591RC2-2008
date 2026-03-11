/*
 * func-name: ?wakeall@Barrier@Utility@Outpop@@QAEXXZ
 * func-address: 0x1000c1e0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Barrier::wakeall(HANDLE *this)
{
  if ( this[6] == HANDLE_FLAG_INHERIT )
    SetEvent(*this);
}
