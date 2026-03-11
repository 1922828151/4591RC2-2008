/*
 * func-name: sub_100160E0
 * func-address: 0x100160e0
 * callers: 0x10022c20, 0x1002b280, 0x100302d0
 * callees: none
 */

int __cdecl sub_100160E0(int a1, char a2, int a3)
{
  char v3; // cl
  char v4; // al

  if ( a2 )
  {
    v3 = HIBYTE(a1);
    v4 = BYTE1(a1);
    HIBYTE(a1) = a1;
    LOBYTE(a1) = v3;
    BYTE1(a1) = BYTE2(a1);
    BYTE2(a1) = v4;
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 36))(a3, a1);
}
