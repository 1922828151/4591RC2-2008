/*
 * func-name: sub_10289400
 * func-address: 0x10289400
 * callers: 0x10013aac
 * callees: 0x100018a2, 0x100024ff, 0x1000e73c, 0x10013aac, 0x10015ae6
 */

int __cdecl sub_10289400(void *Source, int a2, int a3)
{
  void *v3; // ebx
  int v4; // edi
  int result; // eax
  void *v7; // ebp
  int v8; // [esp+10h] [ebp-8h] BYREF
  void *v9; // [esp+14h] [ebp-4h]

  v3 = Source;
  v4 = a2;
  result = (a2 - (int)Source) >> 2;
  if ( result <= 32 )
  {
LABEL_7:
    if ( result > 1 )
      return sub_100018A2(v3, v4);
  }
  else
  {
    while ( a3 > 0 )
    {
      sub_100024FF((int)&v8, (int)v3, v4);
      v7 = v9;
      a3 = a3 / 2 / 2 + a3 / 2;
      if ( (int)((v8 - (_DWORD)v3) & 0xFFFFFFFC) >= (int)((v4 - (_DWORD)v9) & 0xFFFFFFFC) )
      {
        sub_10013AAC(v9, v4, a3);
        v4 = v8;
      }
      else
      {
        sub_10013AAC(v3, v8, a3);
        v3 = v7;
      }
      result = (v4 - (int)v3) >> 2;
      if ( result <= 32 )
        goto LABEL_7;
    }
    if ( (int)((v4 - (_DWORD)v3) & 0xFFFFFFFC) > 4 )
      sub_10015AE6((int)v3, v4);
    return sub_1000E73C((int)v3, v4);
  }
  return result;
}
