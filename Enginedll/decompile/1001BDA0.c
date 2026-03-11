/*
 * func-name: ?CreateInstance@AsyncLoader@@SAXXZ
 * func-address: 0x1001bda0
 * callers: 0x10097ea0
 * callees: 0x10174800, 0x101a2534
 */

void __cdecl AsyncLoader::CreateInstance()
{
  AsyncLoader *v0; // eax

  if ( AsyncLoader::s_pInstance )
  {
    (**(void (__thiscall ***)(AsyncLoader *, int))AsyncLoader::s_pInstance)(AsyncLoader::s_pInstance, 1);
    AsyncLoader::s_pInstance = 0;
  }
  v0 = (AsyncLoader *)operator new(0x1C8u);
  if ( v0 )
    AsyncLoader::s_pInstance = AsyncLoader::AsyncLoader(v0);
  else
    AsyncLoader::s_pInstance = 0;
}
