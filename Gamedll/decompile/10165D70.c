/*
 * func-name: sub_10165D70
 * func-address: 0x10165d70
 * callers: 0x10011135
 * callees: 0x10011135, 0x10014e3e, 0x10016c1b, 0x10017431, 0x100195a6
 */

int __cdecl sub_10165D70(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edi
  int result; // eax
  int v8; // ebp
  int v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v4 = a1;
  v5 = a2;
  result = (a2 - a1) >> 2;
  if ( result <= 32 )
  {
LABEL_7:
    if ( result > 1 )
      return sub_10016C1B(v4, v5, a4);
  }
  else
  {
    while ( a3 > 0 )
    {
      sub_10017431((int)&v9, v4, v5, a4);
      v8 = v10;
      a3 = a3 / 2 / 2 + a3 / 2;
      if ( (int)((v9 - v4) & 0xFFFFFFFC) >= (int)((v5 - v10) & 0xFFFFFFFC) )
      {
        sub_10011135(v10, v5, a3, a4);
        v5 = v9;
      }
      else
      {
        sub_10011135(v4, v9, a3, a4);
        v4 = v8;
      }
      result = (v5 - v4) >> 2;
      if ( result <= 32 )
        goto LABEL_7;
    }
    if ( (int)((v5 - v4) & 0xFFFFFFFC) > 4 )
      sub_10014E3E(v4, v5, a4);
    return sub_100195A6(v4, v5, a4);
  }
  return result;
}
