/*
 * func-name: ?IsAnyPlaying@CVideoManager@@QAE_NXZ
 * func-address: 0x1009bd60
 * callers: none
 * callees: 0x10076ef0
 */

char __thiscall CVideoManager::IsAnyPlaying(CVideoManager *this)
{
  unsigned int v2; // edi
  int v3; // ecx
  int v4; // ecx
  bool v5; // bl
  int v6; // ecx
  int v7; // ecx
  __int64 v9; // [esp+10h] [ebp-10h] BYREF
  __int64 v10; // [esp+18h] [ebp-8h] BYREF

  v2 = 0;
  if ( !std::vector<Model *>::size(this) )
    return 0;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 1);
    v9 = 0;
    v10 = 0;
    if ( !v3 || v2 >= (*((_DWORD *)this + 2) - v3) >> 2 )
      invalid_parameter_noinfo();
    (*(void (__stdcall **)(_DWORD, __int64 *))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v2) + 32) + 48))(
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v2) + 32),
      &v9);
    v4 = *((_DWORD *)this + 1);
    if ( !v4 || v2 >= (*((_DWORD *)this + 2) - v4) >> 2 )
      invalid_parameter_noinfo();
    (*(void (__stdcall **)(_DWORD, __int64 *))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v2) + 32) + 40))(
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v2) + 32),
      &v10);
    v5 = v9 < v10;
    v6 = *((_DWORD *)this + 1);
    if ( !v6 || v2 >= (*((_DWORD *)this + 2) - v6) >> 2 )
      invalid_parameter_noinfo();
    *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v2) + 8) = v5;
    v7 = *((_DWORD *)this + 1);
    if ( !v7 || v2 >= (*((_DWORD *)this + 2) - v7) >> 2 )
      invalid_parameter_noinfo();
    if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 1) + 4 * v2) + 8) )
      break;
    if ( ++v2 >= std::vector<Model *>::size(this) )
      return 0;
  }
  return 1;
}
