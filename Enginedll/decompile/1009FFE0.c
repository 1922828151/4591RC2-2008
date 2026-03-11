/*
 * func-name: ?GetFXSystemFromHash@FXManager@@QAEPAVFXSystem@@KPAV2@@Z
 * func-address: 0x1009ffe0
 * callers: none
 * callees: none
 */

struct FXSystem *__thiscall FXManager::GetFXSystemFromHash(FXManager *this, unsigned int a2, struct FXSystem *a3)
{
  int v4; // ecx
  int v5; // eax

  v4 = *((_DWORD *)this + 6);
  if ( !v4 )
    return 0;
  if ( a2 >= (*((_DWORD *)this + 7) - v4) >> 2 )
    return 0;
  v5 = *((_DWORD *)this + 6);
  if ( *(struct FXSystem **)(v5 + 4 * a2) != a3 )
    return 0;
  if ( !v5 || a2 >= (*((_DWORD *)this + 7) - v5) >> 2 )
    invalid_parameter_noinfo();
  return *(struct FXSystem **)(*((_DWORD *)this + 6) + 4 * a2);
}
