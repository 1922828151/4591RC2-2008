/*
 * func-name: ?Load@XMLSystem@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1004ae30
 * callers: 0x10037000, 0x10037b30, 0x1003af90, 0x1003e810, 0x10043050, 0x100477a0, 0x10048730, 0x10095720, 0x10096e60, 0x100e6db0, 0x1010b030, 0x1010b240, 0x10149660, 0x1014c910, 0x1014d2f0, 0x1014d940, 0x1014da70, 0x1014dc70, 0x10159c30
 * callees: 0x100161f0, 0x100192a0, 0x100490f0, 0x1004c120, 0x101a2534, 0x101a2780
 */

bool __thiscall XMLSystem::Load(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // eax
  xercesc_2_5::XercesDOMParser *v10; // eax
  xercesc_2_5::XercesDOMParser *v11; // edi
  xercesc_2_5::XercesDOMParser *v12; // ecx
  struct xercesc_2_5::ErrorHandler *v13; // eax
  xercesc_2_5::XercesDOMParser *v14; // ecx
  const char *v15; // eax
  bool v16; // zf
  char v17; // bl
  _DWORD v19[1034]; // [esp+0h] [ebp-1034h] BYREF
  int v20; // [esp+1030h] [ebp-4h]

  v19[1033] = v19;
  v19[1031] = this;
  v20 = 1;
  xercesc_2_5::XMLPlatformUtils::Initialize(xercesc_2_5::XMLUni::fgXercescDefaultLocale, 0, 0, 0);
  v20 = 0;
  v9 = std::string::c_str(&a2);
  std::string::operator=(this, v9);
  v10 = (xercesc_2_5::XercesDOMParser *)xercesc_2_5::XMemory::operator new(0x70u);
  v11 = v10;
  v19[1032] = v10;
  LOBYTE(v20) = 4;
  if ( v10 )
  {
    xercesc_2_5::XercesDOMParser::XercesDOMParser(v10, 0, xercesc_2_5::XMLPlatformUtils::fgMemoryManager, 0);
    *(_DWORD *)v11 = &xercesc_2_5::XercesDOMParser::`vftable';
    *((_DWORD *)v11 + 1) = &xercesc_2_5::XercesDOMParser::`vftable';
    *((_DWORD *)v11 + 2) = &xercesc_2_5::XercesDOMParser::`vftable';
    *((_DWORD *)v11 + 3) = &xercesc_2_5::XercesDOMParser::`vftable';
    v12 = v11;
  }
  else
  {
    v12 = 0;
  }
  LOBYTE(v20) = 0;
  *(_DWORD *)(this + 88) = v12;
  xercesc_2_5::AbstractDOMParser::setValidationScheme(0);
  xercesc_2_5::AbstractDOMParser::setDoNamespaces(
    *(xercesc_2_5::AbstractDOMParser **)(this + 88),
    *(_BYTE *)(this + 28));
  xercesc_2_5::AbstractDOMParser::setDoSchema(*(xercesc_2_5::AbstractDOMParser **)(this + 88), *(_BYTE *)(this + 29));
  xercesc_2_5::AbstractDOMParser::setValidationSchemaFullChecking(
    *(xercesc_2_5::AbstractDOMParser **)(this + 88),
    *(_BYTE *)(this + 30));
  *(_BYTE *)(*(_DWORD *)(this + 88) + 16) = *(_BYTE *)(this + 31);
  v13 = (struct xercesc_2_5::ErrorHandler *)operator new(8u);
  if ( v13 )
  {
    *(_DWORD *)v13 = &DOMTreeErrorReporter::`vftable';
    *((_BYTE *)v13 + 4) = 0;
  }
  else
  {
    v13 = 0;
  }
  v14 = *(xercesc_2_5::XercesDOMParser **)(this + 88);
  *(_DWORD *)(this + 72) = v13;
  xercesc_2_5::XercesDOMParser::setErrorHandler(v14, v13);
  LOBYTE(v20) = 5;
  v15 = (const char *)std::string::c_str(this);
  xercesc_2_5::AbstractDOMParser::parse(*(xercesc_2_5::AbstractDOMParser **)(this + 88), v15);
  v16 = *(_BYTE *)(*(_DWORD *)(this + 72) + 4) == 0;
  v20 = 0;
  if ( v16 )
  {
    v17 = 0;
    *(_DWORD *)(this + 80) = xercesc_2_5::AbstractDOMParser::getDocument(*(xercesc_2_5::AbstractDOMParser **)(this + 88));
  }
  else
  {
    v17 = 1;
    XMLSystem::Destroy((XMLSystem *)this);
  }
  v20 = -1;
  std::string::~string(&a2);
  return v17 == 0;
}
