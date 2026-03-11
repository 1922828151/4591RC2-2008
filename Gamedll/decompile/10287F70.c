/*
 * func-name: sub_10287F70
 * func-address: 0x10287f70
 * callers: 0x10009002
 * callees: none
 */

int __cdecl sub_10287F70(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // ecx
  int result; // eax
  unsigned int v6; // edx

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
      if ( v6 >= a4 )
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
