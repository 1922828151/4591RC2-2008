/*
 * func-name: sub_100092E0
 * func-address: 0x100092e0
 * callers: 0x10008f00
 * callees: none
 */

void __cdecl sub_100092E0(int *a1)
{
  int *v1; // ecx
  int v2; // eax
  bool v3; // zf

  if ( v1 )
  {
    v2 = *a1;
    v3 = *a1 == 0;
    *v1 = *a1;
    if ( !v3 )
      InterlockedIncrement((volatile LONG *)(v2 + 4));
  }
}
