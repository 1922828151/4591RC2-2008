/*
 * func-name: dllStartPlugin
 * func-address: 0x10004890
 * callers: none
 * callees: 0x10003310, 0x10019882
 */

// write access to const memory has been detected, the output may be wrong!
struct Input *dllStartPlugin()
{
  DialogManager *v0; // eax
  struct DialogManager *v1; // esi
  Input *v2; // eax
  struct Input *result; // eax

  v0 = (DialogManager *)operator new(4u);
  v1 = v0;
  if ( v0 )
  {
    DialogManager::DialogManager(v0);
    *(_DWORD *)v1 = &DialogManagerWin32::`vftable';
  }
  else
  {
    v1 = 0;
  }
  DialogManager::Instance = v1;
  v2 = (Input *)operator new(0x1CB4u);
  if ( v2 )
  {
    result = sub_10003310(v2);
    Input::m_Instance = result;
  }
  else
  {
    result = 0;
    Input::m_Instance = 0;
  }
  return result;
}
