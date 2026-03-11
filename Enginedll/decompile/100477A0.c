/*
 * func-name: sub_100477A0
 * func-address: 0x100477a0
 * callers: 0x100481a0, 0x10048630
 * callees: 0x10047270, 0x1004a5a0, 0x1004ae30, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100a1d10, 0x100e2550, 0x101a26c0
 */

char __thiscall sub_100477A0(int this, int a2, char a3)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v5; // ebx
  int v6; // eax
  CRETimer *v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  const char *v11; // eax
  void *v12; // ebp
  void *v13; // eax
  bool v14; // cc
  CRETimer *v15; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  struct xercesc_2_5::DOMTreeWalker *Walker; // edi
  struct DOMDocument *Document; // eax
  int v22; // eax
  int v23; // eax
  float *i; // eax
  int v25; // eax
  CRETimer *v26; // eax
  char v27[4]; // [esp+4h] [ebp-B0h] BYREF
  int v28; // [esp+8h] [ebp-ACh]
  int v29; // [esp+Ch] [ebp-A8h]
  int v30; // [esp+10h] [ebp-A4h]
  int v31; // [esp+14h] [ebp-A0h]
  int v32; // [esp+18h] [ebp-9Ch]
  int v33; // [esp+1Ch] [ebp-98h]
  int v34; // [esp+20h] [ebp-94h]
  int v35; // [esp+24h] [ebp-90h]
  int v36; // [esp+28h] [ebp-8Ch]
  int v37; // [esp+2Ch] [ebp-88h]
  int v38; // [esp+30h] [ebp-84h] BYREF
  _BYTE v39[28]; // [esp+38h] [ebp-7Ch] BYREF
  _BYTE v40[28]; // [esp+54h] [ebp-60h] BYREF
  _BYTE v41[28]; // [esp+70h] [ebp-44h] BYREF
  _BYTE v42[28]; // [esp+8Ch] [ebp-28h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v43; // [esp+A8h] [ebp-Ch]
  void *v44; // [esp+ACh] [ebp-8h]
  int v45; // [esp+B0h] [ebp-4h]

  v45 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v44 = &loc_101A8506;
  v43 = ExceptionList;
  v5 = this + 56;
  v33 = a2;
  *(_BYTE *)(this + 44) = a3;
  std::string::operator=(this + 56, v33);
  v6 = *(_DWORD *)(this + 176);
  if ( v6 && *(_DWORD *)(v6 + 3792) )
  {
    v38 = (int)v27;
    std::string::string(v27, "Parsing Scene File");
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)(this + 176) + 3792))(0.0);
  }
  v7 = REGetGlobalTimer();
  CRETimer::StartMiniTimer(v7);
  v8 = std::string::string(v42, "'");
  v45 = 0;
  v9 = std::string::string(v41, "Loading '");
  LOBYTE(v45) = 1;
  v10 = std::operator+<char>(v40, v9, v5);
  LOBYTE(v45) = 2;
  std::operator+<char>(v39, v10, v8);
  LOBYTE(v45) = 4;
  std::string::~string(v40);
  LOBYTE(v45) = 5;
  std::string::~string(v41);
  LOBYTE(v45) = 6;
  std::string::~string(v42);
  v11 = (const char *)std::string::c_str(v39);
  LogPrintf(v11);
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  v12 = *(void **)(this + 20);
  if ( *(_DWORD *)(this + 16) > (unsigned int)v12 )
    invalid_parameter_noinfo();
  v13 = *(void **)(this + 16);
  v14 = (unsigned int)v13 <= *(_DWORD *)(this + 20);
  v38 = (int)v13;
  if ( !v14 )
  {
    invalid_parameter_noinfo();
    v13 = (void *)v38;
  }
  std::vector<Model *>::erase((int)&v38, this + 12, v13, this + 12, v12);
  v38 = (int)v27;
  std::string::string(v27, v5);
  if ( (unsigned __int8)XMLSystem::Load(v27[0], v28, v29, v30, v31, v32, v33) )
  {
    v17 = *(_DWORD *)(this + 180);
    if ( v17 )
    {
      v33 = a2;
      v18 = v17 + 320;
    }
    else
    {
      v19 = *(_DWORD *)(this + 176);
      v33 = a2;
      v18 = v19 + 3188;
    }
    std::string::operator=(v18, v33);
    Walker = XMLSystem::GetWalker((XMLSystem *)(this + 84));
    Document = xercesc_2_5::AbstractDOMParser::getDocument(*(xercesc_2_5::AbstractDOMParser **)(this + 172));
    v22 = (*(int (__thiscall **)(struct DOMDocument *))(*(_DWORD *)Document + 48))(Document);
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 20))(v22);
    v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23);
    *(_DWORD *)(this + 48) = (int)((double)(unsigned int)v38 * 0.6000000238418579);
    *(_DWORD *)(this + 52) = 0;
    for ( i = (float *)(*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *, int, int, int, int, int))(*(_DWORD *)Walker + 48))(
                         Walker,
                         v34,
                         v35,
                         v36,
                         v37,
                         v38);
          i;
          i = (float *)(*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 40))(Walker) )
    {
      sub_10047270((void *)this, i);
    }
    v25 = *(_DWORD *)(this + 176);
    if ( v25 )
    {
      if ( *(_DWORD *)(v25 + 3792) )
      {
        v38 = (int)v27;
        std::string::string(v27, "Caching Scene Resources");
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)(this + 176) + 3792))(100.0);
      }
    }
    v26 = REGetGlobalTimer();
    CRETimer::StopMiniTimer(v26);
    v45 = -1;
    std::string::~string(v39);
    return 1;
  }
  else
  {
    v15 = REGetGlobalTimer();
    CRETimer::StopMiniTimer(v15);
    v45 = -1;
    std::string::~string(v39);
    return 0;
  }
}
