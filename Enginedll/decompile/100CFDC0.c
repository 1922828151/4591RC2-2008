/*
 * func-name: sub_100CFDC0
 * func-address: 0x100cfdc0
 * callers: 0x100d29b0
 * callees: 0x1012b1b0
 */

int __cdecl sub_100CFDC0(int *a1, int *a2, int (__cdecl *a3)(int, int))
{
  int result; // eax
  int *v4; // edi
  int *v5; // esi
  int *v6; // ebp
  int *v7; // edi
  int v8; // ecx
  int *v9; // ebx

  result = (int)a2;
  v4 = a1;
  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    if ( a1 + 1 != a2 )
    {
      v6 = a1 + 2;
      do
      {
        result = a3(*v5, *v4);
        if ( (_BYTE)result )
        {
          if ( v4 != v5 && v5 != v6 )
            result = sub_1012B1B0(v4, v5, v6);
        }
        else
        {
          v7 = v6 - 2;
          result = a3(*v5, *(v6 - 2));
          if ( (_BYTE)result )
          {
            do
            {
              v8 = *(v7 - 1);
              v9 = v7--;
              result = a3(*v5, v8);
            }
            while ( (_BYTE)result );
            if ( v9 != v5 && v5 != v6 )
              result = sub_1012B1B0(v9, v5, v6);
          }
          v4 = a1;
        }
        ++v5;
        ++v6;
      }
      while ( v5 != a2 );
    }
  }
  return result;
}
