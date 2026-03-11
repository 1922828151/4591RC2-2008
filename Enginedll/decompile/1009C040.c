/*
 * func-name: ?Restart@CVideoManager@@QAE_NH@Z
 * func-address: 0x1009c040
 * callers: none
 * callees: 0x100971c0, 0x1009be80
 */

char __thiscall CVideoManager::Restart(CVideoManager *this, int a2)
{
  struct CVideoManager::tShowInfo *Info; // eax
  struct CVideoManager::tShowInfo *v3; // esi
  int v4; // eax
  struct Engine *v5; // eax
  _DWORD v7[2]; // [esp+4h] [ebp-8h] BYREF

  Info = CVideoManager::GetInfo(this, a2);
  v3 = Info;
  if ( !Info || !*((_DWORD *)Info + 8) )
    return 0;
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)Info + 6) + 36))(*((_DWORD *)Info + 6));
  v4 = *((_DWORD *)v3 + 8);
  v7[0] = 0;
  v7[1] = 0;
  (*(void (__stdcall **)(int, _DWORD *, int, _DWORD *, _DWORD))(*(_DWORD *)v4 + 56))(v4, v7, 1, v7, 0);
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)v3 + 6) + 28))(*((_DWORD *)v3 + 6));
  v5 = Engine::Instance();
  InvalidateRect(*((HWND *)v5 + 35), 0, 0);
  return 1;
}
