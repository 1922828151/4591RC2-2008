/*
 * func-name: sub_10027790
 * func-address: 0x10027790
 * callers: 0x100295d0
 * callees: none
 */

int __cdecl sub_10027790(float a1)
{
  int v1; // edx
  int v2; // esi
  unsigned int v3; // edi
  _DWORD *v4; // ecx

  v1 = 0;
  v2 = 0;
  if ( dword_1005B474 >= 4 )
  {
    v3 = ((unsigned int)(dword_1005B474 - 4) >> 2) + 1;
    v4 = (_DWORD *)(dword_1005B470 + 8);
    v2 = 4 * v3;
    do
    {
      if ( !v1 || *(v4 - 2) && *(float *)(*(v4 - 2) + 32) > (double)*(float *)(v1 + 32) )
        v1 = *(v4 - 2);
      if ( !v1 || *(v4 - 1) && *(float *)(*(v4 - 1) + 32) > (double)*(float *)(v1 + 32) )
        v1 = *(v4 - 1);
      if ( !v1 || *v4 && *(float *)(*v4 + 32) > (double)*(float *)(v1 + 32) )
        v1 = *v4;
      if ( !v1 || v4[1] && *(float *)(v4[1] + 32) > (double)*(float *)(v1 + 32) )
        v1 = v4[1];
      v4 += 4;
      --v3;
    }
    while ( v3 );
  }
  for ( ; v2 < dword_1005B474; ++v2 )
  {
    if ( !v1
      || *(_DWORD *)(dword_1005B470 + 4 * v2)
      && *(float *)(*(_DWORD *)(dword_1005B470 + 4 * v2) + 32) > (double)*(float *)(v1 + 32) )
    {
      v1 = *(_DWORD *)(dword_1005B470 + 4 * v2);
    }
  }
  if ( a1 >= (double)*(float *)(v1 + 32) )
    return 0;
  else
    return v1;
}
