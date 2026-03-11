/*
 * func-name: sub_100F6000
 * func-address: 0x100f6000
 * callers: 0x10008e40
 * callees: none
 */

int __cdecl sub_100F6000(int a1, int a2, int a3)
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
    v5 = *(_DWORD *)(v3 - 36);
    v3 -= 36;
    v4 -= 36;
    *(_DWORD *)v4 = v5;
    std::string::operator=(v4 + 4, v3 + 4);
    *(float *)(v4 + 32) = *(float *)(v3 + 32);
  }
  while ( v3 != a1 );
  return v4;
}
