/*
 * func-name: sub_1002DBB0
 * func-address: 0x1002dbb0
 * callers: 0x1002dc10
 * callees: none
 */

char *__usercall sub_1002DBB0@<eax>(char *result@<eax>, _BYTE *a2@<edx>, int a3@<ecx>)
{
  char v4; // dl
  int i; // edi
  int v6; // ecx
  char *v7; // eax
  int v8; // ecx
  char v9; // cl
  char v10; // [esp+7h] [ebp-1h]

  if ( a3 > 0 )
  {
    v4 = v10;
    for ( i = a3; i; --i )
    {
      v6 = *result;
      v7 = result + 1;
      if ( (unsigned int)(v6 - 48) > 9 )
      {
        if ( (unsigned int)(v6 - 97) > 5 )
          goto LABEL_7;
        LOBYTE(v6) = v6 - 7;
      }
      v4 = 16 * v6;
LABEL_7:
      v8 = *v7;
      result = v7 + 1;
      if ( (unsigned int)(v8 - 48) <= 9 )
      {
        v9 = v8 - 48;
LABEL_11:
        v4 |= v9;
        goto LABEL_12;
      }
      if ( (unsigned int)(v8 - 97) <= 5 )
      {
        v9 = v8 - 87;
        goto LABEL_11;
      }
LABEL_12:
      *a2++ = v4;
    }
  }
  return result;
}
