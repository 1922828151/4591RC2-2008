/*
 * func-name: sub_10025AC0
 * func-address: 0x10025ac0
 * callers: 0x10020e00, 0x10021fa0
 * callees: none
 */

char __cdecl sub_10025AC0(unsigned int a1, int a2)
{
  unsigned int v2; // eax
  _BYTE *v3; // ecx
  char v4; // dl

  if ( !a1 || !a2 )
    return 0;
  v2 = 0;
  if ( a1 >> 1 )
  {
    v3 = (_BYTE *)(a1 + a2 - 1);
    do
    {
      v4 = *(_BYTE *)(v2 + a2);
      *(_BYTE *)(v2 + a2) = *v3;
      *v3 = v4;
      ++v2;
      --v3;
    }
    while ( v2 < a1 >> 1 );
  }
  return 1;
}
