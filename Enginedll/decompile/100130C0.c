/*
 * func-name: ?AddSystem@FXManager@@AAEPAVFXSystem@@PAV2@@Z
 * func-address: 0x100130c0
 * callers: 0x10013120
 * callees: 0x10012390
 */

struct FXSystem *__thiscall FXManager::AddSystem(FXManager *this, struct FXSystem *a2)
{
  char *v2; // esi
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // edi

  v2 = (char *)this + 4;
  sub_10012390((_DWORD *)this + 1, (int *)&a2);
  v3 = *((_DWORD *)v2 + 1);
  if ( v3 )
    v4 = (*((_DWORD *)v2 + 2) - v3) >> 2;
  else
    v4 = 0;
  v5 = v4 - 1;
  if ( v3 && v5 < (*((_DWORD *)v2 + 2) - v3) >> 2 )
    return *(struct FXSystem **)(v3 + 4 * v5);
  invalid_parameter_noinfo();
  return *(struct FXSystem **)(*((_DWORD *)v2 + 1) + 4 * v5);
}
