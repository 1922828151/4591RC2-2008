/*
 * func-name: ?StaticLoaderProc@AsyncLoader@@SGIPAX@Z
 * func-address: 0x10172700
 * callers: 0x10172f00
 * callees: 0x1001e050, 0x10031ec0, 0x10032870, 0x101714e0, 0x101723f0, 0x10176a10, 0x101a24ac, 0x101a2500
 */

unsigned int __stdcall AsyncLoader::StaticLoaderProc(HANDLE *a1)
{
  HANDLE *v1; // esi
  unsigned int v2; // edi
  int i; // ebx
  int v4; // ecx
  int v5; // ebp
  unsigned int v6; // edi
  int v7; // ebp
  int v8; // ecx
  int v9; // ebx
  int v10; // ebp
  const CHAR *v11; // ecx
  HANDLE FileA; // eax
  void *v13; // esi
  DWORD FileSize; // eax
  void *v15; // eax
  unsigned int v16; // edi
  int v17; // ebp
  int v18; // ecx
  int v19; // ebx
  int v20; // ebp
  const CHAR *v21; // ecx
  HANDLE v22; // eax
  void *v23; // esi
  DWORD v24; // eax
  void *v25; // eax
  unsigned int v26; // edi
  int v27; // ebp
  int v28; // ecx
  int v29; // ebx
  int v30; // ebp
  const CHAR *v31; // ecx
  HANDLE v32; // eax
  void *v33; // esi
  DWORD v34; // eax
  void *v35; // eax
  AsyncLoader *v36; // esi
  struct _RTL_CRITICAL_SECTION *v37; // ebp
  int v38; // edi
  char *v39; // ebx
  int v41; // [esp+4h] [ebp-98h]
  int j; // [esp+4h] [ebp-98h]
  int k; // [esp+4h] [ebp-98h]
  int m; // [esp+4h] [ebp-98h]
  int v45; // [esp+8h] [ebp-94h] BYREF
  int v46[15]; // [esp+Ch] [ebp-90h] BYREF
  int v47; // [esp+48h] [ebp-54h]
  int v48; // [esp+4Ch] [ebp-50h]
  int v49; // [esp+58h] [ebp-44h]
  int v50; // [esp+5Ch] [ebp-40h]
  int v51; // [esp+68h] [ebp-34h]
  int v52; // [esp+6Ch] [ebp-30h]
  int v53; // [esp+78h] [ebp-24h]
  int v54; // [esp+7Ch] [ebp-20h]
  DWORD v55; // [esp+84h] [ebp-18h] BYREF
  DWORD v56; // [esp+88h] [ebp-14h] BYREF
  DWORD NumberOfBytesRead; // [esp+8Ch] [ebp-10h] BYREF
  int v58; // [esp+98h] [ebp-4h]

  v1 = a1;
  while ( WaitForSingleObject(*v1, 0) )
  {
    v45 = -1;
    sub_10176A10(v46);
    v58 = 0;
    AsyncLoader::GetPacketForProduce(AsyncLoader::s_pInstance, (struct ASYNC_SUBMIT_THREAD *)&v45);
    if ( v45 == -1 )
    {
      Sleep(0xAu);
      v58 = -1;
      sub_10031EC0(v46);
    }
    else
    {
      v2 = 0;
      for ( i = 0; ; i += 84 )
      {
        v4 = v49;
        if ( !v49 || v2 >= (v50 - v49) / 84 )
          break;
        v41 = i + v49;
        v5 = i + v49;
        if ( v2 >= (v50 - v49) / 84 )
        {
          invalid_parameter_noinfo();
          v4 = v49;
        }
        sub_101714E0(i + v4 + 28, (_DWORD *)(v5 + 56), (DWORD *)(v41 + 60));
        ++v2;
      }
      v6 = 0;
      v7 = 0;
      for ( j = 0; ; v7 = j )
      {
        v8 = v47;
        if ( !v47 || v6 >= (v48 - v47) / 84 )
          break;
        v9 = v47 + v7;
        v10 = v47 + v7;
        if ( v6 >= (v48 - v47) / 84 )
        {
          invalid_parameter_noinfo();
          v8 = v47;
        }
        if ( *(_DWORD *)(j + v8 + 52) < 0x10u )
          v11 = (const CHAR *)(j + v8 + 32);
        else
          v11 = *(const CHAR **)(j + v8 + 32);
        FileA = CreateFileA(v11, 0x80000000, 1u, 0, 3u, 0, 0);
        v13 = FileA;
        if ( FileA != (HANDLE)-1 )
        {
          FileSize = GetFileSize(FileA, 0);
          *(_DWORD *)(v9 + 60) = FileSize;
          v15 = operator new(FileSize);
          *(_DWORD *)(v10 + 56) = v15;
          ReadFile(v13, v15, *(_DWORD *)(v9 + 60), &NumberOfBytesRead, 0);
          CloseHandle(v13);
        }
        ++v6;
        j += 84;
      }
      v16 = 0;
      v17 = 0;
      for ( k = 0; ; v17 = k )
      {
        v18 = v51;
        if ( !v51 || v16 >= (v52 - v51) / 84 )
          break;
        v19 = v51 + v17;
        v20 = v51 + v17;
        if ( v16 >= (v52 - v51) / 84 )
        {
          invalid_parameter_noinfo();
          v18 = v51;
        }
        if ( *(_DWORD *)(k + v18 + 52) < 0x10u )
          v21 = (const CHAR *)(k + v18 + 32);
        else
          v21 = *(const CHAR **)(k + v18 + 32);
        v22 = CreateFileA(v21, 0x80000000, 1u, 0, 3u, 0, 0);
        v23 = v22;
        if ( v22 != (HANDLE)-1 )
        {
          v24 = GetFileSize(v22, 0);
          *(_DWORD *)(v19 + 60) = v24;
          v25 = operator new(v24);
          *(_DWORD *)(v20 + 56) = v25;
          ReadFile(v23, v25, *(_DWORD *)(v19 + 60), &v55, 0);
          CloseHandle(v23);
        }
        ++v16;
        k += 84;
      }
      v26 = 0;
      v27 = 0;
      for ( m = 0; ; v27 = m )
      {
        v28 = v53;
        if ( !v53 || v26 >= (v54 - v53) / 84 )
          break;
        v29 = v53 + v27;
        v30 = v53 + v27;
        if ( v26 >= (v54 - v53) / 84 )
        {
          invalid_parameter_noinfo();
          v28 = v53;
        }
        if ( *(_DWORD *)(m + v28 + 52) < 0x10u )
          v31 = (const CHAR *)(m + v28 + 32);
        else
          v31 = *(const CHAR **)(m + v28 + 32);
        v32 = CreateFileA(v31, 0x80000000, 1u, 0, 3u, 0, 0);
        v33 = v32;
        if ( v32 != (HANDLE)-1 )
        {
          v34 = GetFileSize(v32, 0);
          *(_DWORD *)(v29 + 60) = v34;
          v35 = operator new(v34);
          *(_DWORD *)(v30 + 56) = v35;
          ReadFile(v33, v35, *(_DWORD *)(v29 + 60), &v56, 0);
          CloseHandle(v33);
        }
        ++v26;
        m += 84;
      }
      v36 = AsyncLoader::s_pInstance;
      v37 = (struct _RTL_CRITICAL_SECTION *)((char *)AsyncLoader::s_pInstance + 152);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)AsyncLoader::s_pInstance + 152));
      v38 = *((_DWORD *)v36 + 30);
      v39 = sub_10032870(v38, *(_DWORD *)(v38 + 4), &v45);
      sub_1001E050((_DWORD *)v36 + 29, 1u);
      *(_DWORD *)(v38 + 4) = v39;
      **((_DWORD **)v39 + 1) = v39;
      LeaveCriticalSection(v37);
      v58 = -1;
      sub_10031EC0(v46);
      v1 = a1;
    }
  }
  SetEvent(v1[1]);
  operator delete(v1);
  endthreadex(0);
  return 0;
}
