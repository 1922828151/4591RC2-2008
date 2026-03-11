/*
 * func-name: sub_10016070
 * func-address: 0x10016070
 * callers: 0x10022c20
 * callees: none
 */

int __cdecl sub_10016070(int a1, char a2, int a3)
{
  char v3; // al

  if ( a2 )
  {
    v3 = a1;
    LOBYTE(a1) = BYTE1(a1);
    BYTE1(a1) = v3;
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 32))(a3, a1);
}
