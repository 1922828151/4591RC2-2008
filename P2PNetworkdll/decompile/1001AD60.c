/*
 * func-name: sub_1001AD60
 * func-address: 0x1001ad60
 * callers: none
 * callees: none
 */

int __cdecl sub_1001AD60(int a1, char *a2, int a3)
{
  int v3; // eax
  int v5; // eax

  if ( (a3 - (int)a2) / 2 == 2 )
  {
    if ( !a2[3] && a2[2] == 116 && !a2[1] )
    {
      v5 = *a2;
      if ( v5 == 103 )
        return 62;
      if ( v5 == 108 )
        return 60;
    }
  }
  else if ( (a3 - (int)a2) / 2 == 3 )
  {
    if ( !a2[1] && *a2 == 97 && !a2[3] && a2[2] == 109 && !a2[5] && a2[4] == 112 )
      return 38;
  }
  else if ( (a3 - (int)a2) / 2 == 4 && !a2[1] )
  {
    v3 = *a2;
    if ( v3 == 97 )
    {
      if ( !a2[3] && a2[2] == 112 && !a2[5] && a2[4] == 111 && !a2[7] && a2[6] == 115 )
        return 39;
    }
    else if ( v3 == 113 && !a2[3] && a2[2] == 117 && !a2[5] && a2[4] == 111 && !a2[7] && a2[6] == 116 )
    {
      return 34;
    }
  }
  return 0;
}
