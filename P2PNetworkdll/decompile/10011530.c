/*
 * func-name: sub_10011530
 * func-address: 0x10011530
 * callers: 0x10013790
 * callees: none
 */

int __usercall sub_10011530@<eax>(int *a1@<eax>)
{
  int v1; // esi
  int i; // ebx
  int v3; // eax
  int v4; // ebp
  int j; // ebx
  int v6; // eax
  int v7; // ebp

  if ( !a1 )
    return -498;
  v1 = *a1;
  if ( !*a1 )
    return -498;
  if ( *(_DWORD *)v1 )
    free(*(void **)v1);
  if ( *(_DWORD *)(v1 + 4) )
    free(*(void **)(v1 + 4));
  if ( *(_DWORD *)(v1 + 12) )
    free(*(void **)(v1 + 12));
  for ( i = 0; i < *(_DWORD *)(v1 + 16); *(_DWORD *)(v1 + 24) = v4 )
  {
    v3 = *(_DWORD *)(v1 + 24);
    v4 = *(_DWORD *)(v3 + 8);
    free(*(void **)(v3 + 4));
    free(**(void ***)(v1 + 24));
    free(*(void **)(v1 + 24));
    ++i;
  }
  for ( j = 0; j < *(_DWORD *)(v1 + 20); *(_DWORD *)(v1 + 28) = v7 )
  {
    v6 = *(_DWORD *)(v1 + 28);
    v7 = *(_DWORD *)(v6 + 8);
    free(*(void **)(v6 + 4));
    free(**(void ***)(v1 + 28));
    free(*(void **)(v1 + 28));
    ++j;
  }
  free((void *)v1);
  return 0;
}
