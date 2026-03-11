/*
 * func-name: sub_10164F10
 * func-address: 0x10164f10
 * callers: 0x10016c1b
 * callees: 0x100037d3
 */

int __cdecl sub_10164F10(int *a1, int *a2, int (__cdecl *a3)(int, int))
{
  int result; // eax
  int *v4; // edi
  int *v5; // esi
  int v6; // ebp
  int v7; // edi
  int v8; // ecx
  int v9; // ebx

  result = (int)a2;
  v4 = a1;
  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    if ( a1 + 1 != a2 )
    {
      v6 = (int)(a1 + 2);
      do
      {
        result = a3(*v5, *v4);
        if ( (_BYTE)result )
        {
          if ( v4 != v5 && v5 != (int *)v6 )
            result = sub_100037D3((int)v4, (int)v5, v6);
        }
        else
        {
          v7 = v6 - 8;
          result = a3(*v5, *(_DWORD *)(v6 - 8));
          if ( (_BYTE)result )
          {
            do
            {
              v8 = *(_DWORD *)(v7 - 4);
              v9 = v7;
              v7 -= 4;
              result = a3(*v5, v8);
            }
            while ( (_BYTE)result );
            if ( (int *)v9 != v5 && v5 != (int *)v6 )
              result = sub_100037D3(v9, (int)v5, v6);
          }
          v4 = a1;
        }
        ++v5;
        v6 += 4;
      }
      while ( v5 != a2 );
    }
  }
  return result;
}
