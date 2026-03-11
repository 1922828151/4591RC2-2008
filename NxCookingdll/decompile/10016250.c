/*
 * func-name: sub_10016250
 * func-address: 0x10016250
 * callers: 0x100166e0, 0x10022c20
 * callees: none
 */

int __cdecl sub_10016250(float *a1, int a2, char a3, int a4)
{
  int i; // edi
  double v6; // st7
  char v7; // cl
  char v8; // al
  int result; // eax
  float v10; // [esp+1Ch] [ebp+8h]

  for ( i = a2; i; result = (*(int (__thiscall **)(int, float))(*(_DWORD *)a4 + 40))(a4, COERCE_FLOAT(LODWORD(v10))) )
  {
    v6 = *a1;
    --i;
    ++a1;
    v10 = v6;
    if ( a3 )
    {
      v7 = HIBYTE(v10);
      v8 = BYTE1(v10);
      HIBYTE(v10) = LOBYTE(v10);
      LOBYTE(v10) = v7;
      BYTE1(v10) = BYTE2(v10);
      BYTE2(v10) = v8;
    }
  }
  return result;
}
