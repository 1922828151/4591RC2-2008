/*
 * func-name: sub_10016160
 * func-address: 0x10016160
 * callers: 0x10022c20
 * callees: none
 */

int __cdecl sub_10016160(float a1, char a2, int a3)
{
  char v3; // cl
  char v4; // al

  if ( a2 )
  {
    v3 = HIBYTE(a1);
    v4 = BYTE1(a1);
    HIBYTE(a1) = LOBYTE(a1);
    LOBYTE(a1) = v3;
    BYTE1(a1) = BYTE2(a1);
    BYTE2(a1) = v4;
  }
  return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)a3 + 40))(LODWORD(a1));
}
