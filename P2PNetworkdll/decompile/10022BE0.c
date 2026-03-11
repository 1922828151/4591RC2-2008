/*
 * func-name: sub_10022BE0
 * func-address: 0x10022be0
 * callers: 0x10020f30
 * callees: none
 */

_BYTE *__usercall sub_10022BE0@<eax>(_BYTE *a1@<esi>)
{
  _BYTE *result; // eax
  char *v2; // edx
  char v3; // cl

  result = a1;
  v2 = a1;
  if ( !*a1 )
    goto LABEL_14;
  do
  {
    v3 = *v2;
    if ( *v2 != 10 && v3 != 13 && v3 != 32 )
    {
      *result = v3;
LABEL_9:
      ++result;
      goto LABEL_10;
    }
    if ( result != a1 && *(result - 1) != 32 )
    {
      *result = 32;
      goto LABEL_9;
    }
LABEL_10:
    ++v2;
  }
  while ( *v2 );
  if ( result != a1 && *(result - 1) == 32 )
  {
    *(result - 1) = 0;
    return result;
  }
LABEL_14:
  *result = 0;
  return result;
}
