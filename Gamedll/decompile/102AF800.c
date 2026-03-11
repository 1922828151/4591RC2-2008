/*
 * func-name: sub_102AF800
 * func-address: 0x102af800
 * callers: 0x10003ca6
 * callees: none
 */

int __cdecl sub_102AF800(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int result; // eax
  int v6; // edx

  v4 = a2;
  result = (a2 - 1) / 2;
  if ( a3 >= a2 )
  {
    result = a4;
    *(_DWORD *)(a1 + 4 * a2) = a4;
  }
  else
  {
    do
    {
      v6 = *(_DWORD *)(a1 + 4 * result);
      if ( v6 <= a4 )
        break;
      *(_DWORD *)(a1 + 4 * v4) = v6;
      v4 = result;
      result = (result - 1) / 2;
    }
    while ( a3 < v4 );
    *(_DWORD *)(a1 + 4 * v4) = a4;
  }
  return result;
}
