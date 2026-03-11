/*
 * func-name: sub_10022250
 * func-address: 0x10022250
 * callers: 0x10022290, 0x100223b0
 * callees: none
 */

_BYTE *__usercall sub_10022250@<eax>(_BYTE *result@<eax>)
{
  char v1; // cl
  _BYTE *v2; // ecx

  v1 = *result;
  if ( *result )
  {
    while ( v1 != 13 )
    {
      v1 = *++result;
      if ( !v1 )
        return result;
    }
    v2 = result;
    while ( *result == 13 )
    {
      *v2 = 10;
      ++result;
      ++v2;
      if ( *result == 10 )
        goto LABEL_10;
LABEL_11:
      if ( !*result )
      {
        *v2 = 0;
        return result;
      }
    }
    *v2++ = *result;
LABEL_10:
    ++result;
    goto LABEL_11;
  }
  return result;
}
