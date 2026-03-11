/*
 * func-name: ?reset@Event_Base@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000bec0
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::Event_Base::reset(HANDLE *this)
{
  return ResetEvent(*this);
}
