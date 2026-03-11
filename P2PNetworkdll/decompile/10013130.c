/*
 * func-name: sub_10013130
 * func-address: 0x10013130
 * callers: 0x10012e40
 * callees: none
 */

void __cdecl sub_10013130(void *Block, void *a2, void *a3)
{
  if ( Block )
    free(Block);
  if ( a2 )
    free(a2);
  if ( a3 )
    free(a3);
}
