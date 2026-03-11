/*
 * func-name: sub_10013120
 * func-address: 0x10013120
 * callers: 0x10007d70, 0x1002fc50
 * callees: none
 */

int __cdecl sub_10013120(int a1, __int16 a2, int a3)
{
  int v3; // eax
  unsigned __int16 v5; // [esp+8h] [ebp+8h]

  v3 = a1;
  if ( (_BYTE)a2 )
  {
    LOBYTE(v5) = BYTE1(a1);
    HIBYTE(v5) = a1;
    v3 = v5;
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 32))(a3, v3);
}
