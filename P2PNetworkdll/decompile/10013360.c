/*
 * func-name: sub_10013360
 * func-address: 0x10013360
 * callers: 0x100132c0
 * callees: 0x1001ef60, 0x1001f170, 0x1001f2a0
 */

int __usercall sub_10013360@<eax>(const char *a1@<ebx>, char *Destination)
{
  char ***v2; // esi
  char *v4; // [esp-4h] [ebp-14h]
  char *Source[2]; // [esp+8h] [ebp-8h] BYREF

  Source[0] = 0;
  Source[1] = 0;
  v2 = (char ***)sub_1001EF60();
  if ( v2[1] == *v2 )
  {
    *v2 = Source;
    v2[1] = Source;
  }
  else
  {
    *v2 = Source;
  }
  v2[10] = (char **)sub_10013430;
  v2[11] = (char **)sub_10013460;
  v2[12] = (char **)sub_10013470;
  strlen(a1);
  if ( sub_1001F2A0(v2) )
  {
    if ( Source[0] )
    {
      strncpy(Destination, Source[0], 0x1Fu);
      v4 = Source[0];
      Destination[31] = 0;
      free(v4);
      sub_1001F170(v2);
      return 0;
    }
    else
    {
      return -697;
    }
  }
  else
  {
    sub_1001F170(v2);
    return -696;
  }
}
