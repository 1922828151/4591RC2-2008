/*
 * func-name: sub_1001B3D0
 * func-address: 0x1001b3d0
 * callers: 0x1001b440
 * callees: none
 */

int __usercall sub_1001B3D0@<eax>(_BYTE *a1@<eax>, _DWORD *a2)
{
  int v2; // edx
  int v3; // ecx
  _BYTE *v5; // eax
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // eax

  v2 = 0;
  if ( !*a1 )
  {
    v3 = (char)a1[1];
    if ( v3 == 88 )
    {
      v2 = 1;
    }
    else if ( v3 != 120 )
    {
      return 1;
    }
    v5 = a1 + 2;
    if ( !*v5 )
    {
      v6 = (char)v5[1];
      if ( v6 == 77 )
      {
        v2 = 1;
      }
      else if ( v6 != 109 )
      {
        return 1;
      }
      v7 = v5 + 2;
      if ( !*v7 )
      {
        v8 = (char)v7[1];
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
