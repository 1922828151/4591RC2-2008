/*
 * func-name: ?Load@XMLSystem@@QAE_NPBEIAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1004b190
 * callers: none
 * callees: 0x100161f0, 0x100192a0, 0x100490f0, 0x1004c120, 0x101a2534, 0x101a2780
 */

BOOL __thiscall XMLSystem::Load(int this, const unsigned __int8 *a2, unsigned int a3, int a4)
{
  int v5; // eax
  xercesc_2_5::XercesDOMParser *v6; // eax
  xercesc_2_5::XercesDOMParser *v7; // edi
  xercesc_2_5::XercesDOMParser *v8; // ecx
  struct xercesc_2_5::ErrorHandler *v9; // eax
  xercesc_2_5::XercesDOMParser *v10; // ecx
  xercesc_2_5::MemBufInputSource *v11; // edi
  const char *v12; // eax
  xercesc_2_5::AbstractDOMParser *v13; // ecx
  bool v14; // zf
  char v15; // bl
  int v17; // [esp+0h] [ebp-1034h] BYREF
  xercesc_2_5::XercesDOMParser *v18; // [esp+101Ch] [ebp-18h]
  int v19; // [esp+1020h] [ebp-14h]
  int *v20; // [esp+1024h] [ebp-10h]
  int v21; // [esp+1030h] [ebp-4h]

  v20 = &v17;
  v19 = this;
  v21 = 0;
  xercesc_2_5::XMLPlatformUtils::Initialize(xercesc_2_5::XMLUni::fgXercescDefaultLocale, 0, 0, 0);
  v21 = -1;
  v5 = std::string::c_str(a4);
  std::string::operator=(this, v5);
  v6 = (xercesc_2_5::XercesDOMParser *)xercesc_2_5::XMemory::operator new(0x70u);
  v7 = v6;
  v18 = v6;
  v21 = 3;
  if ( v6 )
  {
    xercesc_2_5::XercesDOMParser::XercesDOMParser(v6, 0, xercesc_2_5::XMLPlatformUtils::fgMemoryManager, 0);
    *(_DWORD *)v7 = &xercesc_2_5::XercesDOMParser::`vftable';
    *((_DWORD *)v7 + 1) = &xercesc_2_5::XercesDOMParser::`vftable';
    *((_DWORD *)v7 + 2) = &xercesc_2_5::XercesDOMParser::`vftable';
    *((_DWORD *)v7 + 3) = &xercesc_2_5::XercesDOMParser::`vftable';
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  v21 = -1;
  *(_DWORD *)(this + 88) = v8;
  xercesc_2_5::AbstractDOMParser::setValidationScheme(0);
  xercesc_2_5::AbstractDOMParser::setDoNamespaces(
    *(xercesc_2_5::AbstractDOMParser **)(this + 88),
    *(_BYTE *)(this + 28));
  xercesc_2_5::AbstractDOMParser::setDoSchema(*(xercesc_2_5::AbstractDOMParser **)(this + 88), *(_BYTE *)(this + 29));
  xercesc_2_5::AbstractDOMParser::setValidationSchemaFullChecking(
    *(xercesc_2_5::AbstractDOMParser **)(this + 88),
    *(_BYTE *)(this + 30));
  *(_BYTE *)(*(_DWORD *)(this + 88) + 16) = *(_BYTE *)(this + 31);
  v9 = (struct xercesc_2_5::ErrorHandler *)operator new(8u);
  if ( v9 )
  {
    *(_DWORD *)v9 = &DOMTreeErrorReporter::`vftable';
    *((_BYTE *)v9 + 4) = 0;
  }
  else
  {
    v9 = 0;
  }
  v10 = *(xercesc_2_5::XercesDOMParser **)(this + 88);
  *(_DWORD *)(this + 72) = v9;
  xercesc_2_5::XercesDOMParser::setErrorHandler(v10, v9);
  v21 = 4;
  v11 = (xercesc_2_5::MemBufInputSource *)xercesc_2_5::XMemory::operator new(0x28u);
  v18 = v11;
  LOBYTE(v21) = 5;
  if ( v11 )
  {
    v12 = (const char *)std::string::c_str(a4);
    xercesc_2_5::MemBufInputSource::MemBufInputSource(
      v11,
      a2,
      a3,
      v12,
      0,
      xercesc_2_5::XMLPlatformUtils::fgMemoryManager);
    *(_DWORD *)v11 = &xercesc_2_5::MemBufInputSource::`vftable';
  }
  else
  {
    v11 = 0;
  }
  v13 = *(xercesc_2_5::AbstractDOMParser **)(this + 88);
  LOBYTE(v21) = 4;
  *(_DWORD *)(this + 84) = v11;
  xercesc_2_5::AbstractDOMParser::parse(v13, v11);
  v14 = *(_BYTE *)(*(_DWORD *)(this + 72) + 4) == 0;
  v21 = -1;
  if ( v14 )
  {
    v15 = 0;
    *(_DWORD *)(this + 80) = xercesc_2_5::AbstractDOMParser::getDocument(*(xercesc_2_5::AbstractDOMParser **)(this + 88));
  }
  else
  {
    v15 = 1;
    XMLSystem::Destroy((XMLSystem *)this);
  }
  return v15 == 0;
}
