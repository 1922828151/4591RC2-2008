/*
 * func-name: sub_100F5DA0
 * func-address: 0x100f5da0
 * callers: 0x1000c95f
 * callees: none
 */

int __cdecl sub_100F5DA0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    *(_DWORD *)v4 = *(_DWORD *)v3;
    std::string::operator=(v4 + 4, v3 + 4);
    *(float *)(v4 + 32) = *(float *)(v3 + 32);
    v3 += 36;
    v4 += 36;
  }
  while ( v3 != a2 );
  return v4;
}
