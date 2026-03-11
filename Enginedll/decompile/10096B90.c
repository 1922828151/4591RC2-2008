/*
 * func-name: ?LoadPlugins@Engine@@IAEXXZ
 * func-address: 0x10096b90
 * callers: 0x10097ea0
 * callees: 0x10029ca0, 0x1007e6e0, 0x1007e750, 0x1007e7c0, 0x100956d0, 0x1009a9c0, 0x1017cd10, 0x1017dba0, 0x1017e0a0, 0x101a2500, 0x101a2534
 */

void __thiscall Engine::LoadPlugins(Engine *this)
{
  unsigned int v1; // ebx
  int i; // ebp
  char *v3; // esi
  char *v4; // edi
  _DWORD *v5; // edi
  void *v6; // esi
  DynLib *v7; // edi
  unsigned int v8; // eax
  int v9; // esi
  unsigned int v10; // edx
  DynLib **v11; // eax
  void *v12; // ebp
  void (*Symbol)(void); // edi
  char *v14; // esi
  const char *v15; // eax
  char *v16; // esi
  char *v17; // edi
  char v18; // [esp-24h] [ebp-F0h] BYREF
  int v19; // [esp-20h] [ebp-ECh]
  int v20; // [esp-1Ch] [ebp-E8h] BYREF
  int v21; // [esp-18h] [ebp-E4h]
  int v22; // [esp-14h] [ebp-E0h]
  int v23; // [esp-10h] [ebp-DCh]
  int v24; // [esp-Ch] [ebp-D8h]
  char *v25; // [esp-8h] [ebp-D4h]
  char *v26; // [esp-4h] [ebp-D0h]
  int v27; // [esp+0h] [ebp-CCh]
  int v28; // [esp+4h] [ebp-C8h]
  int v29; // [esp+10h] [ebp-BCh] BYREF
  char v30; // [esp+14h] [ebp-B8h] BYREF
  void *v31; // [esp+18h] [ebp-B4h]
  char *v32; // [esp+1Ch] [ebp-B0h]
  int v33; // [esp+20h] [ebp-ACh]
  int v34; // [esp+24h] [ebp-A8h]
  char v35; // [esp+28h] [ebp-A4h] BYREF
  void *v36; // [esp+2Ch] [ebp-A0h]
  char *v37; // [esp+30h] [ebp-9Ch]
  int v38; // [esp+34h] [ebp-98h]
  Engine *v39; // [esp+38h] [ebp-94h]
  int v40; // [esp+3Ch] [ebp-90h] BYREF
  _BYTE v41[28]; // [esp+44h] [ebp-88h] BYREF
  int v42[24]; // [esp+60h] [ebp-6Ch] BYREF
  int v43; // [esp+C8h] [ebp-4h]

  v39 = this;
  sub_1017CD10(v27, v28);
  v29 = (int)&v20;
  v43 = 0;
  std::string::string(&v20, "plugins.ini");
  sub_1017E0A0(v20, v21, v22, v23, v24, v25, v26);
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v26 = &v30;
  v25 = &v35;
  v29 = (int)&v18;
  LOBYTE(v43) = 2;
  std::string::string(&v18, "Plugins");
  sub_1017DBA0(v18, v19, v20, v21, v22, v23, v24, v25, v26);
  v1 = 0;
  for ( i = 0; ; i += 28 )
  {
    v3 = (char *)v31;
    v4 = v32;
    v34 = i;
    if ( !v31 || v1 >= (v32 - (_BYTE *)v31) / 28 )
      break;
    v5 = operator new(0x20u);
    v29 = (int)v5;
    LOBYTE(v43) = 3;
    if ( v5 )
    {
      v6 = v31;
      if ( !v31 || v1 >= (v32 - (_BYTE *)v31) / 28 )
      {
        invalid_parameter_noinfo();
        v6 = v31;
      }
      v7 = (DynLib *)DynLib::DynLib(v5, (int)v6 + i);
    }
    else
    {
      v7 = 0;
    }
    LOBYTE(v43) = 2;
    v29 = (int)v7;
    DynLib::Load(v7);
    v8 = *((_DWORD *)v39 + 5);
    v9 = (int)v39 + 16;
    if ( v8 )
      v10 = (int)(*((_DWORD *)v39 + 6) - v8) >> 2;
    else
      v10 = 0;
    if ( v8 && v10 < (int)(*((_DWORD *)v39 + 7) - v8) >> 2 )
    {
      v11 = (DynLib **)*((_DWORD *)v39 + 6);
      *v11 = v7;
      *(_DWORD *)(v9 + 8) = v11 + 1;
    }
    else
    {
      v12 = (void *)*((_DWORD *)v39 + 6);
      if ( v8 > (unsigned int)v12 )
        invalid_parameter_noinfo();
      sub_1009A9C0((int)&v40, v9, v12, (int)&v29);
      i = v34;
    }
    std::string::string(v41, "dllStartPlugin");
    Symbol = (void (*)(void))DynLib::GetSymbol((HMODULE *)v7, (int)v41);
    std::string::~string(v41);
    if ( !Symbol )
    {
      v14 = (char *)v31;
      if ( !v31 || v1 >= (v32 - (_BYTE *)v31) / 28 )
      {
        invalid_parameter_noinfo();
        v14 = (char *)v31;
      }
      v15 = (const char *)std::string::c_str(&v14[i]);
      Error("Cannot find symbol dllStartPlugin in library %s", v15);
    }
    Symbol();
    ++v1;
  }
  LOBYTE(v43) = 1;
  if ( v31 )
  {
    if ( v31 != v32 )
    {
      do
      {
        std::string::~string(v3);
        v3 += 28;
      }
      while ( v3 != v4 );
      v3 = (char *)v31;
    }
    operator delete(v3);
  }
  v16 = (char *)v36;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  LOBYTE(v43) = 0;
  if ( v36 )
  {
    v17 = v37;
    if ( v36 != v37 )
    {
      do
      {
        std::string::~string(v16);
        v16 += 28;
      }
      while ( v16 != v17 );
      v16 = (char *)v36;
    }
    operator delete(v16);
  }
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v43 = -1;
  sub_10029CA0(v42);
}
