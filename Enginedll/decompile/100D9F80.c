/*
 * func-name: ?IsIndoors@IndoorVolume@@SA_NPAVWorld@@AAVVector@@@Z
 * func-address: 0x100d9f80
 * callers: 0x1012e2b0
 * callees: 0x100d9db0
 */

char __cdecl IndoorVolume::IsIndoors(struct World *a1, struct Vector *a2)
{
  int v2; // edx
  IndoorVolume **v3; // eax
  unsigned int i; // esi

  v2 = dword_11240BEC;
  v3 = (IndoorVolume **)dword_11240BE8;
  for ( i = 0; v3 && i < (v2 - (int)v3) >> 2; ++i )
  {
    if ( *((struct World **)v3[i] + 178) == a1 )
    {
      if ( i >= (v2 - (int)v3) >> 2 )
      {
        invalid_parameter_noinfo();
        v2 = dword_11240BEC;
        v3 = (IndoorVolume **)dword_11240BE8;
      }
      if ( !*((_DWORD *)v3[i] + 274) )
      {
        if ( !v3 || i >= (v2 - (int)v3) >> 2 )
        {
          invalid_parameter_noinfo();
          v3 = (IndoorVolume **)dword_11240BE8;
        }
        if ( IndoorVolume::IsInsideThisVolume(v3[i], a2) )
          return 1;
        v2 = dword_11240BEC;
        v3 = (IndoorVolume **)dword_11240BE8;
      }
    }
  }
  return 0;
}
