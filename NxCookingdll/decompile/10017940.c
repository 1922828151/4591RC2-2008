/*
 * func-name: sub_10017940
 * func-address: 0x10017940
 * callers: 0x10017e30
 * callees: none
 */

char __cdecl sub_10017940(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edx
  int v4; // eax

  if ( (a1[6] & 0xFFFFFFFE) == 0 )
  {
    v3 = (_DWORD *)(a3[1] + 24 * *a3);
    *v3 = *a1;
    v3[1] = a1[1];
    v3[2] = a1[2];
    v3[3] = a1[3];
    v3[4] = a1[4];
    v3[5] = a1[5];
    v4 = a1[8] - a3[3];
    *(_DWORD *)(a3[2] + 4 * (*a3)++) = (4 * v4) ^ ((unsigned __int8)(a1[9] - 1) ^ (unsigned __int8)(4 * v4)) & 0xF;
  }
  return 1;
}
