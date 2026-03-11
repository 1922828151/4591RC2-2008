/*
 * func-name: ?GetInfo@CVideoManager@@AAEPAUtShowInfo@1@H@Z
 * func-address: 0x1009be80
 * callers: 0x1009bf00, 0x1009bf50, 0x1009bfe0, 0x1009c010, 0x1009c040, 0x1009c0c0, 0x1009c0e0, 0x1009c140, 0x1009ca90
 * callees: 0x10076ef0
 */

struct CVideoManager::tShowInfo *__thiscall CVideoManager::GetInfo(CVideoManager *this, int a2)
{
  unsigned int v3; // edi
  int v4; // ecx
  int v5; // eax

  v3 = 0;
  if ( !std::vector<Model *>::size(this) )
    return 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 1);
    if ( !v4 || v3 >= (*((_DWORD *)this + 2) - v4) >> 2 )
      invalid_parameter_noinfo();
    v5 = *((_DWORD *)this + 1);
    if ( **(_DWORD **)(v5 + 4 * v3) == a2 )
      break;
    if ( ++v3 >= std::vector<Model *>::size(this) )
      return 0;
  }
  if ( !v5 || v3 >= (*((_DWORD *)this + 2) - v5) >> 2 )
    invalid_parameter_noinfo();
  return *(struct CVideoManager::tShowInfo **)(*((_DWORD *)this + 1) + 4 * v3);
}
