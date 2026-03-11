/*
 * func-name: sub_10016120
 * func-address: 0x10016120
 * callers: 0x10018a20, 0x10019960
 * callees: 0x100151e0
 */

int *__cdecl sub_10016120(float a1, char a2, int *a3)
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
  return sub_100151E0(a3, a1);
}
