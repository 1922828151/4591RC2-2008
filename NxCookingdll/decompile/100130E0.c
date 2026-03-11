/*
 * func-name: sub_100130E0
 * func-address: 0x100130e0
 * callers: 0x10009820, 0x10013840
 * callees: none
 */

double __cdecl sub_100130E0(char a1, int a2)
{
  int v2; // eax
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+8h] [ebp+8h]

  *(float *)&v2 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2));
  v5 = *(float *)&v2;
  if ( a1 )
  {
    LOBYTE(v4) = HIBYTE(v2);
    BYTE1(v4) = BYTE2(v2);
    BYTE2(v4) = BYTE1(v2);
    HIBYTE(v4) = v2;
    return v4;
  }
  return v5;
}
