/*
 * func-name: ?IsPlaying@CVideoManager@@QAE_NH@Z
 * func-address: 0x1009bf50
 * callers: none
 * callees: 0x1009be80
 */

bool __thiscall CVideoManager::IsPlaying(CVideoManager *this, int a2)
{
  struct CVideoManager::tShowInfo *Info; // eax
  struct CVideoManager::tShowInfo *v3; // esi
  bool result; // al
  __int64 v5; // [esp+10h] [ebp-10h] BYREF
  __int64 v6; // [esp+18h] [ebp-8h] BYREF

  Info = CVideoManager::GetInfo(this, a2);
  v3 = Info;
  if ( !Info )
    return 0;
  v5 = 0;
  v6 = 0;
  (*(void (__stdcall **)(_DWORD, __int64 *))(**((_DWORD **)Info + 8) + 48))(*((_DWORD *)Info + 8), &v5);
  (*(void (__stdcall **)(_DWORD, __int64 *))(**((_DWORD **)v3 + 8) + 40))(*((_DWORD *)v3 + 8), &v6);
  if ( v5 >= v6 )
  {
    result = 0;
    *((_BYTE *)v3 + 8) = 0;
  }
  else
  {
    result = 1;
    *((_BYTE *)v3 + 8) = 1;
  }
  return result;
}
