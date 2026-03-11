/*
 * func-name: ?Initialize@AsyncLoader@@QAE_NXZ
 * func-address: 0x10172f00
 * callers: 0x10097ea0
 * callees: 0x10175ea0, 0x101a2534
 */

char __thiscall AsyncLoader::Initialize(AsyncLoader *this)
{
  char *v2; // esi
  unsigned int i; // ebp
  int v4; // ecx
  int v5; // ebx
  HANDLE *v6; // edi
  int v7; // ecx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ecx
  _DWORD *v11; // edi
  int v12; // ecx
  unsigned int ThrdAddr; // [esp+10h] [ebp-4h] BYREF

  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v2 = (char *)this + 8;
  sub_10175EA0(10, 0, 0);
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)v2 + 1);
    if ( !v4 || i >= (*((_DWORD *)v2 + 2) - v4) >> 3 )
      break;
    v5 = 8 * i;
    v6 = (HANDLE *)(8 * i + *((_DWORD *)v2 + 1));
    *v6 = CreateEventA(0, 0, 0, 0);
    v7 = *((_DWORD *)v2 + 1);
    if ( !v7 || i >= (*((_DWORD *)v2 + 2) - v7) >> 3 )
      invalid_parameter_noinfo();
    v8 = v5 + *((_DWORD *)v2 + 1);
    *(_DWORD *)(v8 + 4) = CreateEventA(0, 0, 0, 0);
    v9 = operator new(8u);
    v10 = *((_DWORD *)v2 + 1);
    v11 = v9;
    if ( !v10 || i >= (*((_DWORD *)v2 + 2) - v10) >> 3 )
      invalid_parameter_noinfo();
    v11[1] = *(_DWORD *)(*((_DWORD *)v2 + 1) + v5 + 4);
    v12 = *((_DWORD *)v2 + 1);
    if ( !v12 || i >= (*((_DWORD *)v2 + 2) - v12) >> 3 )
      invalid_parameter_noinfo();
    *v11 = *(_DWORD *)(v5 + *((_DWORD *)v2 + 1));
    beginthreadex(0, 0, (_beginthreadex_proc_type)AsyncLoader::StaticLoaderProc, v11, 0, &ThrdAddr);
  }
  return 1;
}
