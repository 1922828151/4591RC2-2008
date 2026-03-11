/*
 * func-name: sub_100D29B0
 * func-address: 0x100d29b0
 * callers: 0x10055990, 0x100c5b70, 0x100d29b0, 0x10128c50
 * callees: 0x10057b10, 0x100cef00, 0x100cfdc0, 0x100d04f0, 0x100d29b0
 */

int __cdecl sub_100D29B0(int *a1, int *a2, int a3, int (__cdecl *a4)(int, int))
{
  int *v4; // ebx
  int *v5; // edi
  int result; // eax
  int *v8; // ebp
  int *v9; // [esp+10h] [ebp-8h] BYREF
  int *v10; // [esp+14h] [ebp-4h]

  v4 = a1;
  v5 = a2;
  result = a2 - a1;
  if ( result <= 32 )
  {
LABEL_7:
    if ( result > 1 )
      return sub_100CFDC0(v4, v5, a4);
  }
  else
  {
    while ( a3 > 0 )
    {
      sub_10057B10(&v9, v4, v5, (unsigned __int8 (__cdecl *)(int, int))a4);
      v8 = v10;
      a3 = a3 / 2 / 2 + a3 / 2;
      if ( (int)(((char *)v9 - (char *)v4) & 0xFFFFFFFC) >= (int)(((char *)v5 - (char *)v10) & 0xFFFFFFFC) )
      {
        sub_100D29B0(v10, v5, a3, a4);
        v5 = v9;
      }
      else
      {
        sub_100D29B0(v4, v9, a3, a4);
        v4 = v8;
      }
      result = v5 - v4;
      if ( result <= 32 )
        goto LABEL_7;
    }
    if ( (int)(((char *)v5 - (char *)v4) & 0xFFFFFFFC) > 4 )
      sub_100CEF00((int)v4, (int)v5, a4);
    return sub_100D04F0(v4, (int)v5, a4);
  }
  return result;
}
