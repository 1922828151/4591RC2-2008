/*
 * func-name: dllStopPlugin
 * func-address: 0x10004840
 * callers: none
 * callees: 0x10019870
 */

// write access to const memory has been detected, the output may be wrong!
struct Input *dllStopPlugin()
{
  struct Input *result; // eax

  if ( DialogManager::Instance )
  {
    operator delete(DialogManager::Instance);
    DialogManager::Instance = 0;
  }
  result = Input::m_Instance;
  if ( Input::m_Instance )
  {
    (*(void (__thiscall **)(struct Input *, int))(*(_DWORD *)Input::m_Instance + 128))(Input::m_Instance, 1);
    result = Input::m_Instance;
    Input::m_Instance = 0;
  }
  return result;
}
