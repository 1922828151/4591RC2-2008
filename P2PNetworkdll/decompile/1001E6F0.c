/*
 * func-name: sub_1001E6F0
 * func-address: 0x1001e6f0
 * callers: 0x1001e800
 * callees: 0x1001e520
 */

int __cdecl sub_1001E6F0(int a1, int *a2, unsigned __int8 *a3, _DWORD *a4, int a5)
{
  int *v5; // ebp
  int result; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // ebx
  _BYTE *v10; // ecx
  int v11; // eax
  int v12; // edx

  v5 = a2;
  result = *a2;
  if ( (unsigned __int8 *)*a2 != a3 )
  {
    v7 = a4;
    do
    {
      v8 = *(unsigned __int8 *)*v5;
      result = *(char *)(a1 + 4 * v8 + 884);
      v9 = a5;
      v10 = (_BYTE *)(a1 + 4 * v8 + 885);
      if ( result )
      {
        if ( result > a5 - *v7 )
          return result;
        v12 = *v5 + 1;
      }
      else
      {
        v11 = (*(int (__cdecl **)(_DWORD, int))(a1 + 364))(*(_DWORD *)(a1 + 368), *v5);
        result = sub_1001E520(v11, &a2);
        if ( result > v9 - *v7 )
          return result;
        v12 = *(unsigned __int8 *)(*(unsigned __int8 *)*v5 + a1 + 72) + *v5 - 3;
      }
      *v5 = v12;
      do
      {
        *(_BYTE *)(*v7)++ = *v10++;
        --result;
      }
      while ( result );
      result = (int)a3;
    }
    while ( (unsigned __int8 *)*v5 != a3 );
  }
  return result;
}
