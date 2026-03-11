/*
 * func-name: sub_100160A0
 * func-address: 0x100160a0
 * callers: 0x10017530, 0x100179f0, 0x10018a20, 0x10019960, 0x1001a620, 0x1001a850
 * callees: 0x10015160
 */

int *__cdecl sub_100160A0(int a1, char a2, int *a3)
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
  return sub_10015160(a3, a1);
}
