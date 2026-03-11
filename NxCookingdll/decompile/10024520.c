/*
 * func-name: NxSetCookingParams
 * func-address: 0x10024520
 * callers: none
 * callees: none
 */

char __cdecl NxSetCookingParams(int *a1)
{
  int v1; // ecx
  int v2; // edx
  int v3; // esi
  char *v4; // eax

  v1 = *a1;
  dword_1005B1D0 = *a1;
  v2 = a1[1];
  dword_1005B1D4 = v2;
  v3 = a1[2];
  dword_1005B1D8 = v3;
  if ( dword_1005B468 )
  {
    v4 = &byte_1005B1CC[20 * dword_1005B468];
    *(_DWORD *)v4 = v1;
    *((_DWORD *)v4 + 1) = v2;
    *((_DWORD *)v4 + 2) = v3;
  }
  return 1;
}
