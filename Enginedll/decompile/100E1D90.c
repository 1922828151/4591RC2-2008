/*
 * func-name: ?Instance@LODManager@@SAPAV1@XZ
 * func-address: 0x100e1d90
 * callers: 0x10097ea0, 0x1009ed40, 0x100ee360, 0x101282d0
 * callees: none
 */

struct LODManager *__cdecl LODManager::Instance()
{
  if ( (dword_11240C4C & 1) == 0 )
  {
    dword_11240C4C |= 1u;
    flt_11240C44 = 1.0;
    flt_11240C48 = 1.0;
  }
  return (struct LODManager *)&flt_11240C44;
}
