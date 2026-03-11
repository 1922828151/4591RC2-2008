/*
 * func-name: sub_1002D960
 * func-address: 0x1002d960
 * callers: 0x1002d960, 0x1002e5c0, 0x100302e0, 0x10030ea0
 * callees: 0x1002d960
 */

int __cdecl sub_1002D960(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  int v4; // esi

  result = a1;
  if ( !*(_DWORD *)(a1 + 20) )
  {
    v3 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 20) = a2;
    if ( v3 )
    {
      result = dword_103B4E90;
      do
      {
        if ( !*(_DWORD *)(v3 + 4) )
        {
          v4 = result;
          if ( result )
          {
            do
            {
              if ( !strcmp(*(const char **)v4, *(const char **)v3) )
                sub_1002D960(v4, a2);
              v4 = *(_DWORD *)(v4 + 16);
            }
            while ( v4 );
            result = dword_103B4E90;
          }
        }
        v3 = *(_DWORD *)(v3 + 12);
      }
      while ( v3 );
    }
  }
  return result;
}
