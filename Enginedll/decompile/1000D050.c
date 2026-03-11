/*
 * func-name: ?DoesExist@FXManager@@ABE_NPAVFXSystem@@@Z
 * func-address: 0x1000d050
 * callers: none
 * callees: none
 */

BOOL __thiscall FXManager::DoesExist(FXManager *this, struct FXSystem *a2)
{
  struct FXSystem **v2; // ebp
  char *v3; // edi
  struct FXSystem **v4; // ebx
  struct FXSystem **v5; // esi

  v2 = (struct FXSystem **)*((_DWORD *)this + 3);
  v3 = (char *)this + 4;
  if ( *((_DWORD *)this + 2) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v4 = (struct FXSystem **)*((_DWORD *)v3 + 2);
  if ( *((_DWORD *)v3 + 1) > (unsigned int)v4 )
    invalid_parameter_noinfo();
  v5 = (struct FXSystem **)*((_DWORD *)v3 + 1);
  if ( (unsigned int)v5 > *((_DWORD *)v3 + 2) )
    invalid_parameter_noinfo();
  for ( ; v5 != v4; ++v5 )
  {
    if ( *v5 == a2 )
      break;
  }
  if ( !v3 )
    invalid_parameter_noinfo();
  return v5 != v2;
}
