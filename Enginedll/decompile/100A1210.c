/*
 * func-name: ?AddFXSystemToHash@FXManager@@AAEXPAVFXSystem@@@Z
 * func-address: 0x100a1210
 * callers: 0x10001020
 * callees: 0x100a1da0
 */

void __thiscall FXManager::AddFXSystemToHash(FXManager *this, struct FXSystem *a2)
{
  unsigned int v2; // edi
  char *v3; // esi
  int v4; // ecx
  int v5; // ecx

  v2 = 0;
  v3 = (char *)this + 20;
  while ( 1 )
  {
    v4 = *((_DWORD *)v3 + 1);
    if ( !v4 || v2 >= (*((_DWORD *)v3 + 2) - v4) >> 2 )
      break;
    if ( !*(_DWORD *)(*((_DWORD *)v3 + 1) + 4 * v2) )
      goto LABEL_10;
    ++v2;
  }
  if ( v4 )
    v2 = (*((_DWORD *)v3 + 2) - v4) >> 2;
  else
    v2 = 0;
  sub_100A1DA0((int)v3, v2 + 1, 0);
LABEL_10:
  v5 = *((_DWORD *)v3 + 1);
  if ( !v5 || v2 >= (*((_DWORD *)v3 + 2) - v5) >> 2 )
    invalid_parameter_noinfo();
  *(_DWORD *)(*((_DWORD *)v3 + 1) + 4 * v2) = a2;
  *((_DWORD *)a2 + 30) = v2;
}
