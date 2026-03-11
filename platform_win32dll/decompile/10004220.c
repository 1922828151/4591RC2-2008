/*
 * func-name: sub_10004220
 * func-address: 0x10004220
 * callers: none
 * callees: 0x10002cf0
 */

DWORD __thiscall sub_10004220(void *this, DWORD dwUserIndex, float a3, float a4)
{
  DWORD result; // eax

  result = (*(int (__thiscall **)(void *, DWORD, _DWORD))(*(_DWORD *)this + 84))(this, dwUserIndex, 0);
  if ( (_BYTE)result )
    return sub_10002CF0(dwUserIndex, a3, a4);
  return result;
}
