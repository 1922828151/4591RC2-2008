/*
 * func-name: sub_100130A0
 * func-address: 0x100130a0
 * callers: 0x10009820, 0x1000dbc0, 0x100134a0, 0x10013840
 * callees: none
 */

int __cdecl sub_100130A0(char a1, int a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp+4h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  if ( a1 )
  {
    LOBYTE(v3) = HIBYTE(result);
    BYTE1(v3) = BYTE2(result);
    BYTE2(v3) = BYTE1(result);
    HIBYTE(v3) = result;
    return v3;
  }
  return result;
}
