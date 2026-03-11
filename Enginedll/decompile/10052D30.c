/*
 * func-name: sub_10052D30
 * func-address: 0x10052d30
 * callers: 0x10052e90, 0x10144030
 * callees: 0x10029a50
 */

int __cdecl sub_10052D30(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    *(_DWORD *)v4 = *v3;
    *(_DWORD *)(v4 + 4) = v3[1];
    CollisionInfo::operator=((double *)(v4 + 8), (int)(v3 + 2));
    v3 += 28;
    v4 += 112;
  }
  while ( v3 != a2 );
  return v4;
}
