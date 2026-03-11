/*
 * func-name: sub_10013070
 * func-address: 0x10013070
 * callers: 0x10009820
 * callees: none
 */

int __cdecl sub_10013070(__int16 a1, int a2)
{
  int result; // eax
  unsigned __int16 v3; // [esp+4h] [ebp+4h]

  result = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  if ( (_BYTE)a1 )
  {
    LOBYTE(v3) = BYTE1(result);
    HIBYTE(v3) = result;
    return v3;
  }
  return result;
}
