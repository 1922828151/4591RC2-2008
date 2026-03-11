/*
 * func-name: ?GetSystem@FXManager@@ABEPAVFXSystem@@H@Z
 * func-address: 0x1000aa30
 * callers: none
 * callees: none
 */

struct FXSystem *__thiscall FXManager::GetSystem(FXManager *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 2);
  if ( v3 && a2 < (*((_DWORD *)this + 3) - v3) >> 2 )
    return *(struct FXSystem **)(v3 + 4 * a2);
  invalid_parameter_noinfo();
  return *(struct FXSystem **)(*((_DWORD *)this + 2) + 4 * a2);
}
