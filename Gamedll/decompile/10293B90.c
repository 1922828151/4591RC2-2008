/*
 * func-name: sub_10293B90
 * func-address: 0x10293b90
 * callers: 0x10017c97
 * callees: 0x1000146a
 */

int __stdcall sub_10293B90(int a1)
{
  unsigned int v2; // edi
  int v3; // ebx
  int i; // ebp
  int v5; // ecx

  if ( !*(_BYTE *)(a1 + 28) )
    return 27;
  v2 = 0;
  v3 = 27;
  for ( i = 0; ; i += 128 )
  {
    v5 = *(_DWORD *)(a1 + 48);
    if ( !v5 || v2 >= (*(_DWORD *)(a1 + 52) - v5) >> 7 )
      break;
    ++v2;
    v3 += sub_1000146A(i + *(_DWORD *)(a1 + 48)) + 2;
  }
  return v3;
}
