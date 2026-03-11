/*
 * func-name: sub_10013150
 * func-address: 0x10013150
 * callers: 0x10007d70, 0x100242e0, 0x1002e520, 0x1002fc50
 * callees: none
 */

int __cdecl sub_10013150(int a1, char a2, int a3)
{
  int v4; // [esp+8h] [ebp+8h]

  if ( !a2 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 36))(a3, a1);
  LOBYTE(v4) = HIBYTE(a1);
  BYTE1(v4) = BYTE2(a1);
  BYTE2(v4) = BYTE1(a1);
  HIBYTE(v4) = a1;
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 36))(a3, v4);
}
