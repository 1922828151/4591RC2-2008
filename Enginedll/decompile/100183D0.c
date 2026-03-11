/*
 * func-name: ?DestroyInstance@AsyncLoader@@SAXXZ
 * func-address: 0x100183d0
 * callers: none
 * callees: none
 */

void __cdecl AsyncLoader::DestroyInstance()
{
  if ( AsyncLoader::s_pInstance )
  {
    (**(void (__thiscall ***)(AsyncLoader *, int))AsyncLoader::s_pInstance)(AsyncLoader::s_pInstance, 1);
    AsyncLoader::s_pInstance = 0;
  }
}
