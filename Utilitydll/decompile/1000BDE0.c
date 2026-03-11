/*
 * func-name: ?signal@Event_Base@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000bde0
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::Event_Base::signal(HANDLE *this)
{
  return SetEvent(*this);
}
