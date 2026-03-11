/*
 * func-name: sub_10013370
 * func-address: 0x10013370
 * callers: 0x100135a0, 0x100242e0, 0x1002fc50
 * callees: none
 */

int __cdecl sub_10013370(float *a1, int a2, char a3, int a4)
{
  int i; // edi
  double v6; // st7
  int result; // eax
  float v8; // [esp+14h] [ebp-4h]
  float v9; // [esp+20h] [ebp+8h]

  for ( i = a2; i; result = (*(int (__thiscall **)(int, float))(*(_DWORD *)a4 + 40))(a4, COERCE_FLOAT(LODWORD(v9))) )
  {
    v6 = *a1;
    --i;
    ++a1;
    v9 = v6;
    if ( a3 )
    {
      LOBYTE(v8) = HIBYTE(v9);
      BYTE1(v8) = BYTE2(v9);
      BYTE2(v8) = BYTE1(v9);
      HIBYTE(v8) = LOBYTE(v9);
      v9 = v8;
    }
  }
  return result;
}
