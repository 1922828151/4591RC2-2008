/*
 * func-name: ?GetVolume@CVideoManager@@QAEHH@Z
 * func-address: 0x1009c0c0
 * callers: none
 * callees: 0x1009be80
 */

int __thiscall CVideoManager::GetVolume(CVideoManager *this, int a2)
{
  struct CVideoManager::tShowInfo *Info; // eax

  Info = CVideoManager::GetInfo(this, a2);
  if ( Info )
    return *((_DWORD *)Info + 1);
  else
    return -1;
}
