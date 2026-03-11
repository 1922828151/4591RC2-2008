/*
 * func-name: ?Save@XMLSystem@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1004b530
 * callers: 0x100407f0, 0x10044770, 0x100e2c10, 0x1014d940
 * callees: 0x100161f0, 0x10016490, 0x100192a0, 0x1004c120, 0x10097e80, 0x1017aa70, 0x101a2534
 */

char __thiscall XMLSystem::Save(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  struct xercesc_2_5::DOMImplementation *DOMImplementation; // eax
  int v10; // esi
  void *v11; // ecx
  void *v12; // eax
  int v13; // edx
  void (__thiscall *v14)(int, void *); // eax
  _DWORD *v15; // eax
  xercesc_2_5::LocalFileFormatTarget *v16; // edi
  const char *v17; // eax
  int v18; // eax
  int v19; // eax
  void *v21; // [esp-4h] [ebp-FCh]
  _DWORD v22[3]; // [esp+0h] [ebp-F8h] BYREF
  unsigned __int16 v23[102]; // [esp+Ch] [ebp-ECh] BYREF
  xercesc_2_5::LocalFileFormatTarget *v24; // [esp+DCh] [ebp-1Ch]
  void (__thiscall ***v25)(_DWORD, int); // [esp+E0h] [ebp-18h]
  void *v26; // [esp+E4h] [ebp-14h]
  _DWORD *v27; // [esp+E8h] [ebp-10h]
  int v28; // [esp+F4h] [ebp-4h]

  v27 = v22;
  v28 = 1;
  v26 = 0;
  xercesc_2_5::XMLString::transcode("LS", v23, 0x63u, xercesc_2_5::XMLPlatformUtils::fgMemoryManager);
  DOMImplementation = xercesc_2_5::DOMImplementationRegistry::getDOMImplementation(v23);
  v10 = (*(int (__thiscall **)(struct xercesc_2_5::DOMImplementation *, struct xercesc_2_5::MemoryManager *))(*(_DWORD *)DOMImplementation + 8))(
          DOMImplementation,
          xercesc_2_5::XMLPlatformUtils::fgMemoryManager);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 16))(v10, *(_DWORD *)(this + 60));
  if ( *(_BYTE *)(this + 66) )
  {
    v11 = operator new(8u);
    v26 = v11;
    LOBYTE(v28) = 2;
    if ( v11 )
      v12 = (void *)std::locale::facet::facet((std::locale::facet *)v11, 0x203u);
    else
      v12 = 0;
    v13 = *(_DWORD *)v10;
    v26 = v12;
    v21 = v12;
    v14 = *(void (__thiscall **)(int, void *))(v13 + 28);
    LOBYTE(v28) = 1;
    v14(v10, v21);
  }
  v15 = operator new(4u);
  if ( v15 )
  {
    *v15 = &DOMPrintErrorHandler::`vftable';
    v25 = (void (__thiscall ***)(_DWORD, int))v15;
  }
  else
  {
    v25 = 0;
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 24))(v10, v25);
  if ( (*(unsigned __int8 (__thiscall **)(int, const unsigned __int16 *const, _DWORD))(*(_DWORD *)v10 + 4))(
         v10,
         xercesc_2_5::XMLUni::fgDOMWRTSplitCdataSections,
         *(unsigned __int8 *)(this + 64)) )
  {
    (*(void (__thiscall **)(int, const unsigned __int16 *const, _DWORD))(*(_DWORD *)v10 + 8))(
      v10,
      xercesc_2_5::XMLUni::fgDOMWRTSplitCdataSections,
      *(unsigned __int8 *)(this + 64));
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, const unsigned __int16 *const, _DWORD))(*(_DWORD *)v10 + 4))(
         v10,
         xercesc_2_5::XMLUni::fgDOMWRTDiscardDefaultContent,
         *(unsigned __int8 *)(this + 65)) )
  {
    (*(void (__thiscall **)(int, const unsigned __int16 *const, _DWORD))(*(_DWORD *)v10 + 8))(
      v10,
      xercesc_2_5::XMLUni::fgDOMWRTDiscardDefaultContent,
      *(unsigned __int8 *)(this + 65));
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, const unsigned __int16 *const, _DWORD))(*(_DWORD *)v10 + 4))(
         v10,
         xercesc_2_5::XMLUni::fgDOMWRTFormatPrettyPrint,
         *(unsigned __int8 *)(this + 67)) )
  {
    (*(void (__thiscall **)(int, const unsigned __int16 *const, _DWORD))(*(_DWORD *)v10 + 8))(
      v10,
      xercesc_2_5::XMLUni::fgDOMWRTFormatPrettyPrint,
      *(unsigned __int8 *)(this + 67));
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, const unsigned __int16 *const, _DWORD))(*(_DWORD *)v10 + 4))(
         v10,
         xercesc_2_5::XMLUni::fgDOMWRTBOM,
         *(unsigned __int8 *)(this + 68)) )
  {
    (*(void (__thiscall **)(int, const unsigned __int16 *const, _DWORD))(*(_DWORD *)v10 + 8))(
      v10,
      xercesc_2_5::XMLUni::fgDOMWRTBOM,
      *(unsigned __int8 *)(this + 68));
  }
  v16 = (xercesc_2_5::LocalFileFormatTarget *)xercesc_2_5::XMemory::operator new(0x18u);
  v24 = v16;
  LOBYTE(v28) = 3;
  if ( v16 )
  {
    v17 = (const char *)std::string::c_str(&a2);
    xercesc_2_5::LocalFileFormatTarget::LocalFileFormatTarget(v16, v17, xercesc_2_5::XMLPlatformUtils::fgMemoryManager);
    *(_DWORD *)v16 = &xercesc_2_5::LocalFileFormatTarget::`vftable';
  }
  else
  {
    v16 = 0;
  }
  v18 = *(_DWORD *)(this + 80);
  LOBYTE(v28) = 1;
  if ( v18 )
    v19 = v18 + 12;
  else
    v19 = 0;
  (*(void (__thiscall **)(int, xercesc_2_5::LocalFileFormatTarget *, int))(*(_DWORD *)v10 + 48))(v10, v16, v19);
  (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  if ( v16 )
    (**(void (__thiscall ***)(xercesc_2_5::LocalFileFormatTarget *, int))v16)(v16, 1);
  if ( v25 )
    (**v25)(v25, 1);
  if ( *(_BYTE *)(this + 66) && v26 )
    (**(void (__thiscall ***)(void *, int))v26)(v26, 1);
  v28 = 0;
  sub_1017AA70(v22[0], v22[1]);
  RebuildSearchPaths();
  v28 = -1;
  std::string::~string(&a2);
  return 1;
}
