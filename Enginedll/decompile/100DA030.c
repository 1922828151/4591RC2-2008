/*
 * func-name: ?IsInVolumeType@IndoorVolume@@SA_NPAVWorld@@AAVVector@@H@Z
 * func-address: 0x100da030
 * callers: none
 * callees: 0x100d9db0
 */

char __cdecl IndoorVolume::IsInVolumeType(struct World *a1, struct Vector *a2, int a3)
{
  int v3; // edx
  IndoorVolume **v4; // eax
  unsigned int i; // esi

  v3 = dword_11240BEC;
  v4 = (IndoorVolume **)dword_11240BE8;
  for ( i = 0; v4 && i < (v3 - (int)v4) >> 2; ++i )
  {
    if ( *((struct World **)v4[i] + 178) == a1 )
    {
      if ( i >= (v3 - (int)v4) >> 2 )
      {
        invalid_parameter_noinfo();
        v3 = dword_11240BEC;
        v4 = (IndoorVolume **)dword_11240BE8;
      }
      if ( *((_DWORD *)v4[i] + 274) == a3 )
      {
        if ( !v4 || i >= (v3 - (int)v4) >> 2 )
        {
          invalid_parameter_noinfo();
          v4 = (IndoorVolume **)dword_11240BE8;
        }
        if ( IndoorVolume::IsInsideThisVolume(v4[i], a2) )
          return 1;
        v3 = dword_11240BEC;
        v4 = (IndoorVolume **)dword_11240BE8;
      }
    }
  }
  return 0;
}
