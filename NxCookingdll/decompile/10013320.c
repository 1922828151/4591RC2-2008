/*
 * func-name: sub_10013320
 * func-address: 0x10013320
 * callers: 0x1002fc50
 * callees: none
 */

void __cdecl sub_10013320(unsigned __int16 *a1, int a2, char a3, int a4)
{
  int v4; // edi
  int v6; // eax
  unsigned __int16 v7; // [esp+Ch] [ebp+8h]

  v4 = a2;
  while ( v4 )
  {
    v6 = *a1;
    --v4;
    ++a1;
    if ( a3 )
    {
      LOBYTE(v7) = BYTE1(v6);
      HIBYTE(v7) = v6;
      v6 = v7;
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a4 + 32))(a4, v6);
  }
}
