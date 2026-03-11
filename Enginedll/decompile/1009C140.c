/*
 * func-name: ?StopAll@CVideoManager@@QAEXXZ
 * func-address: 0x1009c140
 * callers: none
 * callees: 0x10076ef0, 0x1009be80
 */

void __thiscall CVideoManager::StopAll(CVideoManager *this)
{
  unsigned int i; // ebp
  int v3; // ecx
  struct CVideoManager::tShowInfo *Info; // eax
  struct CVideoManager::tShowInfo *v5; // edi
  int v6; // eax

  for ( i = 0; i < std::vector<Model *>::size(this); ++i )
  {
    v3 = *((_DWORD *)this + 1);
    if ( !v3 || i >= (*((_DWORD *)this + 2) - v3) >> 2 )
      invalid_parameter_noinfo();
    Info = CVideoManager::GetInfo(this, **(_DWORD **)(*((_DWORD *)this + 1) + 4 * i));
    v5 = Info;
    if ( Info )
    {
      v6 = *((_DWORD *)Info + 6);
      if ( v6 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 36))(*((_DWORD *)v5 + 6));
        *((_BYTE *)v5 + 8) = 0;
      }
    }
  }
}
