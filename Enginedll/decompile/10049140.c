/*
 * func-name: ?CreateDocument@XMLSystem@@QAEPAVDOMDocument@xercesc_2_5@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10049140
 * callers: 0x100407f0, 0x10044770, 0x100e2c10
 * callees: 0x100956d0
 */

int __thiscall XMLSystem::CreateDocument(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  struct xercesc_2_5::DOMImplementation *DOMImplementation; // esi
  const char *v9; // eax
  int (__thiscall *v10)(struct xercesc_2_5::DOMImplementation *, _DWORD, unsigned __int16 *, _DWORD, struct xercesc_2_5::MemoryManager *); // edx
  int v11; // esi
  _DWORD *v12; // edi
  unsigned __int16 *v14; // [esp+Ch] [ebp-18h] BYREF
  unsigned __int16 *v15; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v16; // [esp+14h] [ebp-10h]
  int v17; // [esp+20h] [ebp-4h]

  v16 = this;
  v17 = 0;
  xercesc_2_5::XMLPlatformUtils::Initialize(xercesc_2_5::XMLUni::fgXercescDefaultLocale, 0, 0, 0);
  v14 = xercesc_2_5::XMLString::transcode("Core");
  DOMImplementation = xercesc_2_5::DOMImplementationRegistry::getDOMImplementation(v14);
  xercesc_2_5::XMLString::release(&v14);
  if ( !DOMImplementation )
    Error("getDOMImplementation() failed!");
  v9 = (const char *)std::string::c_str(&a2);
  v15 = xercesc_2_5::XMLString::transcode(v9);
  v10 = *(int (__thiscall **)(struct xercesc_2_5::DOMImplementation *, _DWORD, unsigned __int16 *, _DWORD, struct xercesc_2_5::MemoryManager *))(*(_DWORD *)DOMImplementation + 28);
  LOBYTE(v17) = 2;
  v11 = v10(DOMImplementation, 0, v15, 0, xercesc_2_5::XMLPlatformUtils::fgMemoryManager);
  LOBYTE(v17) = 0;
  xercesc_2_5::XMLString::release(&v15);
  if ( !v11 )
    Error("createDocument() failed!");
  v12 = v16;
  v16[20] = v11;
  v12[19] = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 48))(v11);
  v17 = -1;
  std::string::~string(&a2);
  return v11;
}
