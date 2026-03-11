/*
 * func-name: ?Instance@CVideoManager@@SAPAV1@XZ
 * func-address: 0x1009c1c0
 * callers: none
 * callees: 0x101a2534
 */

struct CVideoManager *__cdecl CVideoManager::Instance()
{
  struct CVideoManager *result; // eax

  result = CVideoManager::m_pInstance;
  if ( !CVideoManager::m_pInstance )
  {
    result = (struct CVideoManager *)operator new(0x10u);
    if ( result )
    {
      *((_DWORD *)result + 1) = 0;
      *((_DWORD *)result + 2) = 0;
      *((_DWORD *)result + 3) = 0;
      CVideoManager::m_pInstance = result;
    }
    else
    {
      result = 0;
      CVideoManager::m_pInstance = 0;
    }
  }
  return result;
}
