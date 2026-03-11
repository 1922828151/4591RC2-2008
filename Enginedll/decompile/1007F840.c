/*
 * func-name: sub_1007F840
 * func-address: 0x1007f840
 * callers: 0x1007f840, 0x1008ce00
 * callees: 0x1007f840
 */

int __cdecl sub_1007F840(int a1, int a2, int a3)
{
  int v3; // esi
  int result; // eax

  v3 = a3;
  if ( a3 == a1 )
    return a2;
  while ( 1 )
  {
    if ( *(_DWORD *)(v3 + 360) )
    {
      result = sub_1007F840(a1, v3, *(_DWORD *)(v3 + 360));
      if ( result )
        break;
    }
    v3 = *(_DWORD *)(v3 + 356);
    if ( !v3 )
      return 0;
    if ( v3 == a1 )
      return a2;
  }
  return result;
}
