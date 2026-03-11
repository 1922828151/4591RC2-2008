/*
 * func-name: sub_10146A50
 * func-address: 0x10146a50
 * callers: 0x10146b80
 * callees: 0x10029a50
 */

int __cdecl sub_10146A50(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v5 = *(_DWORD *)(v3 - 112);
    v3 -= 112;
    v4 -= 112;
    *(_DWORD *)v4 = v5;
    *(_DWORD *)(v4 + 4) = *(_DWORD *)(v3 + 4);
    CollisionInfo::operator=((double *)(v4 + 8), v3 + 8);
  }
  while ( v3 != a1 );
  return v4;
}
