/*
 * func-name: ?RemoveSystem@FXManager@@AAEXPAVFXSystem@@@Z
 * func-address: 0x100a0120
 * callers: 0x1000aa70
 * callees: none
 */

void __thiscall FXManager::RemoveSystem(FXManager *this, struct FXSystem *a2)
{
  struct FXSystem **v3; // ebx
  struct FXSystem **v4; // edi
  struct FXSystem **i; // ecx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // ecx

  v3 = (struct FXSystem **)*((_DWORD *)this + 3);
  if ( *((_DWORD *)this + 2) > (unsigned int)v3 )
    invalid_parameter_noinfo();
  v4 = (struct FXSystem **)*((_DWORD *)this + 2);
  if ( (unsigned int)v4 > *((_DWORD *)this + 3) )
    invalid_parameter_noinfo();
  for ( i = v4; i != v3; ++i )
  {
    if ( *i == a2 )
      break;
  }
  v6 = (*((_DWORD *)this + 3) - (int)(i + 1)) >> 2;
  if ( v6 > 0 )
    memmove_s(i, 4 * v6, i + 1, 4 * v6);
  *((_DWORD *)this + 3) -= 4;
  v7 = *((_DWORD *)a2 + 30);
  if ( v7 != -1 )
  {
    v8 = *((_DWORD *)this + 6);
    if ( !v8 || v7 >= (*((_DWORD *)this + 7) - v8) >> 2 )
      invalid_parameter_noinfo();
    *(_DWORD *)(*((_DWORD *)this + 6) + 4 * v7) = 0;
    *((_DWORD *)a2 + 30) = -1;
  }
}
