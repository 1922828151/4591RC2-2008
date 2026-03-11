/*
 * func-name: sub_10031E40
 * func-address: 0x10031e40
 * callers: 0x10032790
 * callees: 0x10031a80
 */

int __cdecl sub_10031E40(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edi
  float v5; // eax
  int v6; // ecx

  result = ((a2 - a1) >> 3) - ((a2 - a1) >> 31);
  v3 = ((a2 - a1) >> 3) / 2;
  if ( v3 > 0 )
  {
    v4 = a1 + 8 * v3;
    do
    {
      v5 = *(float *)(v4 - 4);
      v6 = *(_DWORD *)(v4 - 8);
      v4 -= 8;
      result = sub_10031A80(a1, --v3, (a2 - a1) >> 3, v6, v5);
    }
    while ( v3 > 0 );
  }
  return result;
}
