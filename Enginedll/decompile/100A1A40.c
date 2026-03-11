/*
 * func-name: ?getBatchForWriting@FXManager@@SAHPAVFXSystem@@PAVMaterial@@@Z
 * func-address: 0x100a1a40
 * callers: none
 * callees: 0x100a12a0
 */

unsigned int __cdecl FXManager::getBatchForWriting(struct FXSystem *a1, struct Material *a2)
{
  char *v2; // esi
  unsigned int v3; // edi
  int v4; // ebx

  if ( (**((_BYTE **)a2 + 38) & 1) == 0 )
  {
    v2 = (char *)dword_1123D68C;
    v3 = 0;
    v4 = 0;
    while ( v2 && v3 < (dword_1123D690 - (int)v2) / 20 )
    {
      if ( a2 == *(struct Material **)&v2[v4] )
      {
        if ( v3 >= (dword_1123D690 - (int)v2) / 20 )
        {
          invalid_parameter_noinfo();
          v2 = (char *)dword_1123D68C;
        }
        if ( *(_DWORD *)&v2[v4 + 16] <= 0x5DBu )
          return v3;
      }
      ++v3;
      v4 += 20;
    }
  }
  return FXManager::addNewBatch(a2);
}
