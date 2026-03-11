/*
 * func-name: sub_100319A0
 * func-address: 0x100319a0
 * callers: 0x10031a80
 * callees: none
 */

int __cdecl sub_100319A0(int a1, int a2, int a3, int a4, float a5)
{
  int v5; // esi
  int v6; // ecx
  bool v7; // cc
  int result; // eax

  v5 = a2;
  v6 = (a2 - 1) / 2;
  if ( a3 < a2 )
  {
    do
    {
      if ( a5 <= (double)*(float *)(a1 + 8 * v6 + 4) )
        break;
      *(_DWORD *)(a1 + 8 * v5) = *(_DWORD *)(a1 + 8 * v6);
      *(_DWORD *)(a1 + 8 * v5 + 4) = *(_DWORD *)(a1 + 8 * v6 + 4);
      v5 = v6;
      v7 = a3 < v6;
      v6 = (v6 - 1) / 2;
    }
    while ( v7 );
  }
  result = a4;
  *(_DWORD *)(a1 + 8 * v5) = a4;
  *(float *)(a1 + 8 * v5 + 4) = a5;
  return result;
}
