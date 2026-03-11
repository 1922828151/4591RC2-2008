/*
 * func-name: ?remove@Process_mutex@Utility@Outpop@@QAE_NXZ
 * func-address: 0x1000c3d0
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::Process_mutex::remove(void **this)
{
  void *v2; // ecx
  bool result; // al

  v2 = *this;
  result = 1;
  if ( v2 )
  {
    result = CloseHandle(v2);
    *this = 0;
  }
  return result;
}
