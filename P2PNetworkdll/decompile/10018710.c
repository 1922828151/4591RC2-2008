/*
 * func-name: sub_10018710
 * func-address: 0x10018710
 * callers: 0x10018780
 * callees: none
 */

int __usercall sub_10018710@<eax>(char *a1@<eax>, _DWORD *a2)
{
  int v2; // edx
  int v3; // ecx
  char *v5; // eax
  int v6; // ecx
  char *v7; // eax
  int v8; // eax

  v2 = 0;
  if ( !a1[1] )
  {
    v3 = *a1;
    if ( v3 == 88 )
    {
      v2 = 1;
    }
    else if ( v3 != 120 )
    {
      return 1;
    }
    v5 = a1 + 2;
    if ( !v5[1] )
    {
      v6 = *v5;
      if ( v6 == 77 )
      {
        v2 = 1;
      }
      else if ( v6 != 109 )
      {
        return 1;
      }
      v7 = v5 + 2;
      if ( !v7[1] )
      {
        v8 = *v7;
        if ( v8 == 76 )
          return 0;
        if ( v8 == 108 )
        {
          if ( v2 )
            return 0;
          *a2 = 12;
        }
      }
    }
  }
  return 1;
}
