/*
 * func-name: sub_1001DA70
 * func-address: 0x1001da70
 * callers: none
 * callees: none
 */

int __cdecl sub_1001DA70(int a1, _BYTE *a2, int a3)
{
  int v3; // eax
  int v5; // eax

  if ( (a3 - (int)a2) / 2 == 2 )
  {
    if ( !a2[2] && a2[3] == 116 && !*a2 )
    {
      v5 = (char)a2[1];
      if ( v5 == 103 )
        return 62;
      if ( v5 == 108 )
        return 60;
    }
  }
  else if ( (a3 - (int)a2) / 2 == 3 )
  {
    if ( !*a2 && a2[1] == 97 && !a2[2] && a2[3] == 109 && !a2[4] && a2[5] == 112 )
      return 38;
  }
  else if ( (a3 - (int)a2) / 2 == 4 && !*a2 )
  {
    v3 = (char)a2[1];
    if ( v3 == 97 )
    {
      if ( !a2[2] && a2[3] == 112 && !a2[4] && a2[5] == 111 && !a2[6] && a2[7] == 115 )
        return 39;
    }
    else if ( v3 == 113 && !a2[2] && a2[3] == 117 && !a2[4] && a2[5] == 111 && !a2[6] && a2[7] == 116 )
    {
      return 34;
    }
  }
  return 0;
}
