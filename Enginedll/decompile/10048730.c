/*
 * func-name: sub_10048730
 * func-address: 0x10048730
 * callers: 0x10048910
 * callees: 0x10048070, 0x1004a5a0, 0x1004ae30, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100e2550, 0x101a26c0
 */

char __thiscall sub_10048730(int this, int a2)
{
  int v3; // edi
  CRETimer *v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  const char *v8; // eax
  CRETimer *v9; // eax
  struct xercesc_2_5::DOMTreeWalker *Walker; // edi
  struct DOMDocument *Document; // eax
  int v13; // eax
  int v14; // eax
  int i; // eax
  CRETimer *v16; // eax
  char v17; // [esp-1Ch] [ebp-ACh] BYREF
  int v18; // [esp-18h] [ebp-A8h]
  int v19; // [esp-14h] [ebp-A4h]
  int v20; // [esp-10h] [ebp-A0h]
  int v21; // [esp-Ch] [ebp-9Ch]
  int v22; // [esp-8h] [ebp-98h]
  int v23; // [esp-4h] [ebp-94h]
  char *v24; // [esp+10h] [ebp-80h]
  _BYTE v25[28]; // [esp+14h] [ebp-7Ch] BYREF
  _BYTE v26[28]; // [esp+30h] [ebp-60h] BYREF
  _BYTE v27[28]; // [esp+4Ch] [ebp-44h] BYREF
  _BYTE v28[28]; // [esp+68h] [ebp-28h] BYREF
  int v29; // [esp+8Ch] [ebp-4h]

  v3 = this + 44;
  std::string::operator=(this + 44, a2);
  v4 = REGetGlobalTimer();
  CRETimer::StartMiniTimer(v4);
  v5 = std::string::string(v28, L"'");
  v29 = 0;
  v6 = std::string::string(v27, "Loading '");
  LOBYTE(v29) = 1;
  v7 = std::operator+<char>(v26, v6, v3);
  LOBYTE(v29) = 2;
  std::operator+<char>(v25, v7, v5);
  LOBYTE(v29) = 4;
  std::string::~string(v26);
  LOBYTE(v29) = 5;
  std::string::~string(v27);
  LOBYTE(v29) = 6;
  std::string::~string(v28);
  v8 = (const char *)std::string::c_str(v25);
  LogPrintf(v8);
  v24 = &v17;
  std::string::string(&v17, v3);
  if ( (unsigned __int8)XMLSystem::Load(v17, v18, v19, v20, v21, v22, v23) )
  {
    Walker = XMLSystem::GetWalker((XMLSystem *)(this + 72));
    Document = xercesc_2_5::AbstractDOMParser::getDocument(*(xercesc_2_5::AbstractDOMParser **)(this + 160));
    v13 = (*(int (__thiscall **)(struct DOMDocument *))(*(_DWORD *)Document + 48))(Document);
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 20))(v13);
    v24 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14);
    *(_DWORD *)(this + 36) = (int)((double)(unsigned int)v24 * 0.6000000238418579);
    *(_DWORD *)(this + 40) = 0;
    for ( i = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 48))(Walker);
          i;
          i = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 40))(Walker) )
    {
      sub_10048070((char *)this, i);
    }
    v16 = REGetGlobalTimer();
    CRETimer::StopMiniTimer(v16);
    v29 = -1;
    std::string::~string(v25);
    return 1;
  }
  else
  {
    v9 = REGetGlobalTimer();
    CRETimer::StopMiniTimer(v9);
    v29 = -1;
    std::string::~string(v25);
    return 0;
  }
}
