/*
 * func-name: ?Stop@CVideoManager@@QAE_NH@Z
 * func-address: 0x1009c010
 * callers: none
 * callees: 0x1009be80
 */

char __thiscall CVideoManager::Stop(CVideoManager *this, int a2)
{
  struct CVideoManager::tShowInfo *Info; // eax
  struct CVideoManager::tShowInfo *v3; // esi
  int v4; // eax

  Info = CVideoManager::GetInfo(this, a2);
  v3 = Info;
  if ( !Info )
    return 0;
  v4 = *((_DWORD *)Info + 6);
  if ( !v4 )
    return 0;
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 36))(*((_DWORD *)v3 + 6));
  *((_BYTE *)v3 + 8) = 0;
  return 1;
}
