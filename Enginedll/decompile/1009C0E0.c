/*
 * func-name: ?SetVolume@CVideoManager@@QAEXHH@Z
 * func-address: 0x1009c0e0
 * callers: none
 * callees: 0x1009be80
 */

void __thiscall CVideoManager::SetVolume(CVideoManager *this, int a2, int a3)
{
  struct CVideoManager::tShowInfo *Info; // eax
  struct CVideoManager::tShowInfo *v5; // esi
  struct CVideoManager::tShowInfo *v6; // eax
  int v7; // ecx

  Info = CVideoManager::GetInfo(this, a2);
  v5 = Info;
  if ( Info && *((_BYTE *)Info + 8) == 1 )
  {
    if ( (unsigned int)(a3 + 300) <= 0x190 )
      *((_DWORD *)Info + 1) = a3;
    v6 = CVideoManager::GetInfo(this, a2);
    if ( v6 )
      v7 = *((_DWORD *)v6 + 1);
    else
      v7 = -1;
    (*(void (__stdcall **)(_DWORD, int))(**((_DWORD **)v5 + 7) + 28))(*((_DWORD *)v5 + 7), 15 * (v7 - 100));
  }
}
